# Memory Layout of C program
https://aticleworld.com/memory-layout-of-c-program/
Basically, the memory layout of C program contains five segments these are the stack segment, heap segment, BSS (block started by symbol), DS (Data Segment) and text segment.  

Each segment has own read, write and executable permission. If a program tries to access the memory in a way that is not allowed then segmentation fault occurs.  
A segmentation fault is a common problem that causes programs to crash. A core file (core dumped file) also associated with a segmentation fault that is used by the developer to finding the root cause of the crashing (segmentation fault).  

## Below find the memory Layout of C Program
Note:  You must remember that this is only an example. The actual static memory layout is specific to the processor, development tools, and the underlying hardware.  
1. Stack  
2. Heap   
3. BSS (Uninitialized data segment)  
4. DS (Initialized data segment)  
5. Text  

![me1](me1.png?raw=true "me1")  


## Stack:
It located at a higher address and grows and shrinks opposite to the heap segment.  
The stack contains local variables from functions and related book-keeping data.  
A stack frame will create in the stack when a function is called.  
Each function has one stack frame.  
Stack frames contain the function’s local variables arguments and return value.  
The stack contains a LIFO structure. Function variables are pushed onto the stack when called and functions variables are popped off the stack when return.  
SP(stack pointer) register tracks the top of the stack.???  

```
#include <stdio.h>

int main(void)
{
    int data; //local variable stored in stack
    return 0;
}
```

## Heap:
It is used to allocate the memory at run time.  
Heap area managed by the memory management functions like malloc, calloc, free, etc which may internally use the brk and sbrk system calls to adjust its size.  
The Heap area is shared by all shared libraries and dynamically loaded modules in a process.  
It grows and shrinks in the opposite direction of the stack.  
```
#include <stdio.h>

int main(void)
{
    char *pStr = malloc(sizeof(char)*4); //stored in heap
    return 0;
}
```

## BSS(Uninitialized data segment):
It contains all uninitialized global and static variables.  
All variables in this segment initialized by the zero(0) and pointer with the null pointer.  
The program loader allocates memory for the BSS section when it loads the program.  
```
#include <stdio.h>

int data1; // Uninitialized global variable stored in BSS
int main(void)
{
    static int data2;  // Uninitialized static variable stored in BSS
    return 0;
}
```

## DS(Initialized data segment):
It contains the explicitly initialized global and static variables.  
The size of this segment is determined by the size of the values in the program’s source code and does not change at run time.  
It has read-write permission so the value of the variable of this segment can be changed at run time.  
This segment can be further classified into an initialized read-only area and an initialized read-write area.  
```
#include <stdio.h>
int data1 = 10 ; //Initialized global variable stored in DS
int main(void)
{
    static int data2 = 3;  //Initialized static variable stored in DS
    return 0;
}
```
## Text:
The text segment contains a binary of the compiled program.  
The text segment is a read-only segment that prevents a program from being accidentally modified.  
It is sharable so that only a single copy needs to be in memory for frequently executed programs such as text editors etc.  

Note: The size command basically lists section sizes as well as total size for the input object file.  
Let see few examples to understand the memory layout of the C program.  
```
#include <stdio.h> 
  
int main(void) 
{ 
    return 0; 
}

[aticleworld@CentOS]$ gcc memory-layout.c -o memory-layout
[aticleworld@CentOS]$ size memory-layout

text	   data	    bss	    dec	    hex	filename
1418	    544	      8	   1970	    7b2	memory_layout

```
Now add a static uninitialized variable and check the size.
```
#include <stdio.h> 
    
int main(void) 
{ 
    static int data; // Stored in uninitialized area
    return 0; 
}

text	   data	    bss	    dec	    hex	filename
1418	    544	      8	   1970	    7b2	memory_layout
```
You can see the size of the .bss has been increased.  
Now add the initialized static variable and check the size.
```
#include <stdio.h> 
    
int main(void) 
{ 
    static int data =10; // Stored in initialized area
    return 0; 
}

text	   data	    bss	    dec	    hex	filename
1418	    548	      4	   1970	    7b2	memory_layout

```
You can see the size of the data segment has been increased.  
Now add the global uninitialized variable and check the size.  
```
#include <stdio.h> 
 
int data; // Stored in uninitialized area
 
int main(void) 
{ 
    return 0; 
}

text	   data	    bss	    dec	    hex	filename
1418	    544	      8	   1970	    7b2	memory_layout
```
You can see the size of the bss has been increased.  

Now add the global and static uninitialized variable and check the size.  
```
#include <stdio.h> 
 
int data1; //Stored in uninitialized area
 
int main(void) 
{ 
    static int data2; //Stored in uninitialized area
   
    return 0; 
}

text	   data	    bss	    dec	    hex	filename
1418	    544	     16	   1978	    7ba	memory_layout
```
The size of .bss increases as per the uninitialized global and static variables.  

Now add the global and static initialized variable and check the size.
```
#include <stdio.h> 
 
int data1 = 0; //Stored in uninitialized area
 
int main(void) 
{ 
    static int data2 = 0; //Stored in uninitialized area
   
    return 0; 
}

text	   data	    bss	    dec	    hex	filename
1418	    544	     16	   1978	    7ba	memory_layout
```
In the data segment, I have said that the “data segment can be further classified into the two-part initialized read-only area and an initialized read-write area”. So let us see two C programs to understand this concept.  
```
#include <stdio.h>
char str[]= "Amlendra Kumar";

int main(void)
{
    printf("%s\n",str);
    str[0]='k';

    printf("%s\n",str);
    return 0;
}

Output:
Amlendra Kumar
kmlendra Kumar
```
You can see the above example str is a global array, so it will go in the data segment. You can also see that I am able to change the value so it has read and write permission.  

Now see the other example code,  
```
#include <stdio.h>
char *str= "Amlendra Kumar";

int main(void)
{
    str[0]='k';
    printf("%s\n",str);
    return 0;
}
```
In the above example, y we are not able to change the array character is because it is a literal string.  A constant string does not only go in the data section but all types of const global data go in that section.  

It is not necessarily that const global and constant string go in the data section. It can be also in the text section of the program (normally the .rodata segment), as it is normally not modifiable by a program.  





