# sizeof

In the context of sizeof, the name of the array refers to the array object itself (composed of all its elements). Thus, sizeof an array will give you the amount of memory space used by all its elements.  

**See 12-main.c**  

## &
In the context of &, the name of the array refers to the array object itself (composed of all its elements). So the address-of the array name will give you the address of the whole array, which is the same as the address of its first element.  

**See 13-main.c**  

As a consequence, the value of b is the same as the value of &b. But they do not have the same type:  
b: in this context, general rule applies, so using b will be evaluated as the address of the first element of the array. Thus, b is of type char *  

&b: in this context (one of the two exceptions to the general rule), b will be evaluated as the array object itself.  

So b is of type char[98] - an array of 98 characters - and then &b is of type char (*)[98], a pointer to an array of 98 characters.  

This is important because when we will manipulate those two pointers, they will behave differently, since the size of their type is different:

sizeof b is 98 (see 14-main.c)  
sizeof &b is 8, (if you are using a regular 64 bits machine) (see below)  

