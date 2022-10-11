# Question #0
What are the steps of compilation?
1. preprocessor 2.compiler 3. assembler 4. linker

#  Question #1
The preprocessor generates assembly code  
False

# Question #2
The preprocessor generates object code  
False

# Question #4
This portion of code is actually using the library stdlib.
```
#include <stdlib.h>
```
False

# Question #5
The preprocessor removes all comments  
True

# Question #6
What is the gcc option that runs only the preprocessor? 
-E

# Question #7
NULL is a macro  
True

# Question #8
What will be the last 5 lines of the output of the command gcc -E on this code?
```
#include <stdlib.h>

int main(void)
{
    NULL;
    return (EXIT_SUCCESS);
}
```
```
int main(void)
{
 ((void *)0);
 return (0);
}
```
# Question #9
This code will try to allocate 1024 bytes in the heap:
```
#define BUFFER_SIZE 1024
malloc(BUFFER_SIZE)

True
```

# Question #10
What does the macro TABLESIZE expand to?
```
#define BUFSIZE 1020
#define TABLESIZE BUFSIZE
#undef BUFSIZE
#define BUFSIZE 37
```
37

# Question #11
This is the correct way to define the macro SUB:
```
#define SUB(a, b) a - b
```
No, it should be written this way:
```
#define SUB(a, b) ((a) - (b))
```

# Question #12
Why should we use include guards in our header files?  
To avoid the problem of double inclusion when dealing with the include directive.

# Question #13
The macro __FILE__ expands to the name of the current input file, in the form of a C string constant.  
True

# Question #14
What will be the output of this program? (on a standard 64 bits, Linux machine)
```
#include <stdio.h>
#include <stdlib.h>

#define int char

int main(void)
{
    int i;

    i = 5;
    printf ("sizeof(i) = %lu", sizeof(i));
    return (EXIT_SUCCESS);
}
```
sizeof(i) = 1