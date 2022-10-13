# Variadic Functions
https://www.gnu.org/software/libc/manual/html_node/Receiving-Arguments.html  
ISO C defines a syntax for declaring a function to take a variable number or type of arguments. (Such functions are referred to as varargs functions or variadic functions.) However, the language itself provides no mechanism for such functions to access their non-required arguments; instead, you use the variable arguments macros defined in stdarg.h.  

This section describes how to declare variadic functions, how to write them, and how to call them properly.   

**Compatibility Note:** Many older C dialects provide a similar, but incompatible, mechanism for defining functions with variable numbers of arguments, using varargs.h.  

## Why Variadic Functions are Used
Ordinary C functions take a fixed number of arguments. When you define a function, you specify the data type for each argument. Every call to the function should supply the expected number of arguments, with types that can be converted to the specified ones. Thus, if the function ‘foo’ is declared with int foo (int, char *); then you must call it with two arguments, a number (any kind will do) and a string pointer.  
 
But some functions perform operations that can meaningfully accept an unlimited number of arguments.  

In some cases a function can handle any number of values by operating on all of them as a block. For example, consider a function that allocates a one-dimensional array with malloc to hold a specified set of values. This operation makes sense for any number of values, as long as the length of the array corresponds to that number. Without facilities for variable arguments, you would have to define a separate function for each possible array size.

The library function printf is an example of another class of function where variable arguments are useful. This function prints its arguments (which can vary in type as well as number) under the control of a format template string.  

These are good reasons to define a variadic function which can handle as many arguments as the caller chooses to pass.   

Some functions such as open take a fixed set of arguments, but occasionally ignore the last few. Strict adherence to ISO C requires these functions to be defined as variadic; in practice, however, the GNU C compiler and most other C compilers let you define such a function to take a fixed set of arguments—the most it can ever use—and then only declare the function as variadic (or not declare its arguments at all!).  

## How Variadic Functions are Defined and Used
Defining and using a variadic function involves three steps:  
Define the function as variadic, using an ellipsis (‘…’) in the argument list, and using special macros to access the variable arguments.  
Declare the function as variadic, using a prototype with an ellipsis (‘…’), in all the files which call it.   
Call the function by writing the fixed arguments followed by the additional variable arguments.  

### Syntax for Variable Arguments
A function that accepts a variable number of arguments must be declared with a prototype that says so. You write the fixed arguments as usual, and then tack on ‘…’ to indicate the possibility of additional arguments. The syntax of ISO C requires at least one fixed argument before the ‘…’. For example,
```
int
func (const char *a, int b, ...)
{
    ................
}
```
defines a function func which returns an int and takes two required arguments, a const char * and an int. These are followed by any number of anonymous arguments.  

**Portability note:** For some C compilers, the last required argument must not be declared register in the function definition. Furthermore, this argument’s type must be self-promoting: that is, the default promotions must not change its type. This rules out array and function types, as well as float, char (whether signed or not) and short int (whether signed or not). This is actually an ISO C requirement.  

### Receiving the Argument Values
Ordinary fixed arguments have individual names, and you can use these names to access their values. But optional arguments have no names—nothing but ‘…’. How can you access them?  

The only way to access them is sequentially, in the order they were written, and you must use special macros from stdarg.h in the following three step process:   

1. You initialize an argument pointer variable of type va_list using va_start. The argument pointer when initialized points to the first optional argument.  
2. You access the optional arguments by successive calls to va_arg. The first call to va_arg gives you the first optional argument, the next call gives you the second, and so on.  
You can stop at any time if you wish to ignore any remaining optional arguments. It is perfectly all right for a function to access fewer arguments than were supplied in the call, but you will get garbage values if you try to access too many arguments.  

3. You indicate that you are finished with the argument pointer variable by calling va_end.
(In practice, with most C compilers, calling va_end does nothing. This is always true in the GNU C compiler. But you might as well call va_end just in case your program is someday compiled with a peculiar compiler.)  

Steps 1 and 3 must be performed in the function that accepts the optional arguments. However, you can pass the va_list variable as an argument to another function and perform all or part of step 2 there.  

You can perform the entire sequence of three steps multiple times within a single function invocation. If you want to ignore the optional arguments, you can do these steps zero times.  

You can have more than one argument pointer variable if you like. You can initialize each variable with va_start when you wish, and then you can fetch arguments with each argument pointer as you wish. Each argument pointer variable will sequence through the same set of argument values, but at its own pace.  

**Portability note:** With some compilers, once you pass an argument pointer value to a subroutine, you must not keep using the same argument pointer value after that subroutine returns. For full portability, you should just pass it to va_end. This is actually an ISO C requirement, but most ANSI C compilers work happily regardless.  

### How Many Arguments Were Supplied
There is no general way for a function to determine the number and type of the optional arguments it was called with. So whoever designs the function typically designs a convention for the caller to specify the number and type of arguments. It is up to you to define an appropriate calling convention for each variadic function, and write all calls accordingly.  

One kind of calling convention is to pass the number of optional arguments as one of the fixed arguments. This convention works provided all of the optional arguments are of the same type.  

A similar alternative is to have one of the required arguments be a bit mask, with a bit for each possible purpose for which an optional argument might be supplied. You would test the bits in a predefined sequence; if the bit is set, fetch the value of the next argument, otherwise use a default value.  

A required argument can be used as a pattern to specify both the number and types of the optional arguments. The format string argument to printf is one example of this.  

Another possibility is to pass an “end marker” value as the last optional argument. For example, for a function that manipulates an arbitrary number of pointer arguments, a null pointer might indicate the end of the argument list. (This assumes that a null pointer isn’t otherwise meaningful to the function.) The execl function works in just this way; 

### Calling Variadic Functions
You don’t have to do anything special to call a variadic function. Just put the arguments (required arguments, followed by optional ones) inside parentheses, separated by commas, as usual. But you must declare the function with a prototype and know how the argument values are converted.  

In principle, functions that are defined to be variadic must also be declared to be variadic using a function prototype whenever you call them. This is because some C compilers use a different calling convention to pass the same set of argument values to a function depending on whether that function takes variable arguments or fixed arguments.  

In practice, the GNU C compiler always passes a given set of argument types in the same way regardless of whether they are optional or required. So, as long as the argument types are self-promoting, you can safely omit declaring them. Usually it is a good idea to declare the argument types for variadic functions, and indeed for all functions. But there are a few functions which it is extremely convenient not to have to declare as variadic—for example, open and printf.  

Since the prototype doesn’t specify types for optional arguments, in a call to a variadic function the default argument promotions are performed on the optional argument values. This means the objects of type char or short int (whether signed or not) are promoted to either int or unsigned int, as appropriate; and that objects of type float are promoted to type double. So, if the caller passes a char as an optional argument, it is promoted to an int, and the function can access it with va_arg (ap, int).  

Conversion of the required arguments is controlled by the function prototype in the usual way: the argument expression is converted to the declared argument type as if it were being assigned to a variable of that type.  

### Argument Access Macros
Here are descriptions of the macros used to retrieve variable arguments. These macros are defined in the header file stdarg.h.  

Data Type: va_list  
The type va_list is used for argument pointer variables.  

Macro: void va_start (va_list ap, last-required)  
This macro initializes the argument pointer variable ap to point to the first of the optional arguments of the current function; last-required must be the last required argument to the function.  

Macro: type va_arg (va_list ap, type)  
This ends the use of ap. After a va_end call, further va_arg calls with the same ap may not work. You should invoke va_end before returning from the function in which va_start was invoked with the same ap argument.  

In the GNU C Library, va_end does nothing, and you need not ever use it except for reasons of portability.  

Sometimes it is necessary to parse the list of parameters more than once or one wants to remember a certain position in the parameter list. To do this, one will have to make a copy of the current value of the argument. But va_list is an opaque type and one cannot necessarily assign the value of one variable of type va_list to another variable of the same type.  

Macro: void va_copy (va_list dest, va_list src)  
Macro: void __va_copy (va_list dest, va_list src)  

The va_copy macro allows copying of objects of type va_list even if this is not an integral type. The argument pointer in dest is initialized to point to the same argument as the pointer in src.  

va_copy was added in ISO C99. When building for strict conformance to ISO C90 (‘gcc -std=c90’), it is not available. GCC provides __va_copy, as an extension, in any standards mode; before GCC 3.0, it was the only macro for this functionality.  

These macros are no longer provided by the GNU C Library, but rather by the compiler.  

If you want to use va_copy and be portable to pre-C99 systems, you should always be prepared for the possibility that this macro will not be available. On architectures where a simple assignment is invalid, hopefully va_copy will be available, so one should always write something like this if concerned about pre-C99 portability:
```
{
  va_list ap, save;
  …
#ifdef va_copy
  va_copy (save, ap);
#else
  save = ap;
#endif
  …
}
```

## Example of a Variadic Function
Here is a complete sample function that accepts a variable number of arguments. The first argument to the function is the count of remaining arguments, which are added up and the result returned. While trivial, this function is sufficient to illustrate how to use the variable arguments facility.  
```
#include <stdarg.h>
#include <stdio.h>

int 
add_em_up (int count, ...)
{
    va_list ap;
    int i, sum;

    va_start (ap, count);   /* Initialize the argument list. */

    sum = 0;

    for (i = 0; i < count; i++)
        sum += va_arg (ar, int);    /* Get the next argument value. */

    va_end (ap);                  /* Clean up. */
    return sum;
}


int
main (void)
{
    /* This call prints 16. */
    printf("%d\n", add_em_up (3, 5, 5, 6));

    /* This call prints 55. */
    printf ("%d\n", add_em_up (10, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10));

    return 0;
}
```