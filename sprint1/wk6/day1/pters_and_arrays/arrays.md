## Arrays
Arrays in C are contiguous memory areas that hold a number of values of the same type. Unlike some other languages, in C, all elements of an array have the same type. To declare an array we use this syntax: type var_name[number_of_elements];, where number_of_elements is the number of elements of type type that we need.
```
int t[5];  
```
In this example we declare an array of 5 integers. The computer will reserve a continuous space for 5 integers in memory.   
We access the different elements of an array this way: t[0] will access the first element, t[1] the second element, and so on.  

**See 9-main.c**  

## Pointers vs Arrays
In C, an array is NOT a pointer, the variables we declare as arrays do not hold a memory address.  

When we declare an array, we use a name to refer to it, but it is only a name. Array names are identifiers that identify the entire array object. They are not pointers to anything. That is why we can not change the value of a 'variable’ which is an array.  


```
ds will cause an error

/**
* main - You can not modify a 
*
* Return: Always 0.
*/

int main(void)
{
    int a[5];
    int b;
    int c[5];

    a = 0;  /* nop */
    b = &b; /* nop */
    a = c;  /* nop */
    return (0);
}
```
But, you can still use the name of the array in your code, and its value will be… the address of the first element of the array. 

**See 10-main.c**  

So what is happening here? If arrays are not pointers, why is it that the value of an array is the address of the first element of the same array. Isn’t this the definition of a pointer: “a variable which contains the address”? Well… YES, this is a pointer, but the variable a (the array) is NOT. This is why:  

When the name of an array is used in an expression, the array type gets automatically implicitly converted to pointer-to-element type in almost all contexts (this is often referred to as “array type decay”). The resultant pointer is a completely independent temporary value, that is the address of the first element of the array.  

There are two exceptions to this: when the array name is an operand of sizeof or unary & (address-of), the name of the array then refers to the array object itself.  

**See 11-main.c**  