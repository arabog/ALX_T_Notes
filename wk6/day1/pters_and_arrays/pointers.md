# Pointers
https://alx-intranet.hbtn.io/concepts/60  
A pointer is a variable which contains a memory address.  

## Types and memory
Every time you declare a variable, the computer will reserve memory for this variable. The memory reserved will then store the value of the variable.  
Depending on the type of the variable, the computer will reserve more or less memory.  The size of each type is generally defined in bytes (1 byte = 8 bits, each bit being 0 or 1). The sizes of the types also depend on the computer you are using. Here are the sizes of the most common types on most 64-bit Linux machines:  
char -> 1 byte  
int -> 4 bytes  
float -> 4 bytes  
To determine the size of those types on your computer, you can use the `sizeof` operator.  

**See 0-main-c**  

The size of a type will determine how many different possible values a variable of this type can hold. For instance, a char variable could only hold 256 (2^8, 8 being the number of bits) different values: from -128 to 127. And because the size of int is 4 bytes, so 32 bits, an int variable can hold 2^32 different possible values.  

When we declare a variable, the computer will reserve the right amount of space for the variable in the memory (depending on its type). The space reserved for the variable is its address. And when we assign a value to this variable, the computer will store this value at its address.  
```
char c;  

Address             8
Variable            c
Value               ?
```
In this example, we simply declare a variable c of type char. The address of c is 8. At this stage, you have not assigned a value to your variable c. So you do not know its value. It depends on what this memory address was used for before. You should never assumed that it is 0.  

```
char c;  

c = 'H';  
```
When we assign the value 'H' to c, then 'H' is stored at c‘s address.
```
Address     8
Variable    c
Value       'H'
```
But you know that a byte can only store numbers. So actually, the byte will not hold exactly the letter 'H', but its ascii code, which is 72 (man ascii). So it really looks like this in memory:  
```
Address     8
Variable    c
Value       72
```

Since integers are stored within 4 bytes of memory, the same example with an int variable would look like this:
```
int n;

n = 98;

Address     26 to 29
Variable    n
Value       98
```
In this example, the address of the variable n is the smallest address of its bytes, so in this example, 26.
Note that you do not control the address where the variable is stored. In order to know what is the address of a variable, you can use the **“address-of unary operator”** &.  

**See 1-main.c**  

Note that:  
You can use %p to print addresses (the values of pointers) with printf  
This example will not compile with our regular flags -Wall -Wextra -Werror -pedantic -std=gnu89. You’ll learn why later  

## Storing memory addresses
Now that we know how to get an address, we can store it in a… pointer! :)
A pointer is simply the address of a piece of data in memory. A pointer variable is a variable that stores the address of that piece of data. Like any other variable it needs to be declared. General form is:  
```
var_type *var;  
```
The * tells that the variable var is a pointer…  
… that points to a var_type.  
The value of var will be a memory address holding a value of type var_type  
```
int *ptr;   
```
In this example, ptr is the name of the variable, of type “pointer to an integer”. Anything that is on the left of the last * before the name of the variable will give you the type that the pointer points to.  
```
/* ptr2 is a pointer to a char */  
char *ptr2  
```
Because a pointer is like any other variable, the computer will also reserve the right amount of memory for it to store its value. **On most 64 bits machines, the size of pointers is 8 bytes.**  

**See 2-main.c**  

To get the address where a pointer is stored, you can use the same technique as for any other variable: use the & operator.  

**See 3-main.c**  

Ok, now let’s store the address of a variable into a pointer.
```
int n;
int *p;

n = 98;
p = &n;
```
Because &n gives us the address of the variable n, the variable p now holds the address of the variable n: p points to n. If the variable n’s address were 26, then the value of our pointer p would be 26.  

**See 4-main.c**  

Remember that a pointer can only point to a variable of the type it is supposed to point to. The following example is incorrect:
```
char c;  
int *p;  

p = &c;  
```

## Dereferencing
You could argue that so far, we could have used an integer (or a unsigned long int that is also 8 bytes long on most 64 bits computers) to store an address, since it is a number. The real power of pointers is that they can manipulate values stored at the memory address they point to. This is called dereferencing. To do this, you can use the dereference operator *.  

**See 5-main.c**  

Let’s walk through this example:  
int *p;
* is used in the declaration:  
p is a pointer to an integer, and so, after dereferencing, *p is an integer.  

p = &n;
& takes the address of n.  
So now p == &n, so *p == n  

**See 6-main.c**  

Note that * has a different meaning depending on the context (declaring vs dereferencing pointers).  
at declaration, it is used to declare a variable of type pointer to something. Example: int *n;  
when used inside the code it is used to dereference pointers. Example *n = 98;  

## Functions parameters are passed by value
When we call a function in C, parameters are copied.  
```
/**
* modif_my_param - this function does not modify n
* @m: a useless integer
*
* Return: nothing.
*/

void modify_my_param(int m)
{
    m = 402;
}

/**
* main - parameters are passed by value
*
* Return: Always 0.
*/

int main(void)
{
    int n;

    n = 98;

    modify_my_param(n);
    return (0);
}
```
In this example, when we call the modif_my_param function, the value of n (98) is copied inside a new variable m, only available in the modif_my_param function.  
When we leave the function modif_my_param the variable m is destroyed and does not exist anymore. Its value though, stays in memory until this space is used by the program for another variable or something else.  

This rule applies to any type of variable. But since the values of pointers are addresses, it is possible to modify a variable from outside the function it is declared, using a pointer.  

**See 7-main.c**  

Since m stores the same memory address(i.e Value of 'm': 0x7ffefbadcfdc), it points to the same address, and so both p(Value of 'p': 0x7ffefbadcfdc) and m now point to n. Therefore, when we execute the line *m = 402; we 
modify the value of n(Address of 'n': 0x7ffefbadcfdc) and n now holds 402.

```
Value of 'n' before the call: 98
Address of 'n': 0x7ffefbadcfdc
Value of 'p': 0x7ffefbadcfdc
Address of 'p': 0x7ffefbadcfe0
Value of 'm': 0x7ffefbadcfdc
Address of 'm': 0x7ffefbadcfb8
Value of 'n' after the call: 402
```
When we leave the function modif_my_param, the variable m is destroyed, but n’s value is still 402.   


Using the same format, try to represent in memory what is happening at every step of the following program. When done, add some printfs and compile to verify your hypothesis.
```
/**
 * modif_my_char_var - Solve me
 *
 * Return: nothing.
 */
void modif_my_char_var(char *cc, char ccc)  
{
   *cc = 'o';
   ccc = 'l';
}

/**
 * main - Solve me
 *
 * Return: Always 0.
 */
int main(void)
{
   char c;
   char *p;

   p = &c;
   c = 'H';
   modif_my_char_var(p, c);
   return (0);
}
```

