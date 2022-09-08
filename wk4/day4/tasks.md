## 0. Preprocessor
Write a script that runs a C file through the preprocessor and save the result into another file.  
The C file name will be saved in the variable $CFILE
The output should be saved in the file c
```
0-preprocessor
gcc $CFILE -E -o c

main.c
#include <stdio.h>

/**
 * main - Entry point
 * Return: Always 0 (Success)
 */

int main(void)
{
return (0);
}
```

## 1. Compiler
Write a script that compiles a C file but does not link.  
The C file name will be saved in the variable $CFILE  
The output file should be named the same as the C file, but with the extension .o instead of .c.
Example: if the C file is main.c, the output file should be main.o
```
gcc -c $CFILE

main.c
#include <stdio.h>

/**
 * main - Entry point
 * Return: Always 0 (Success)
 */

int main(void)
{
return (0);
}
```

## 2. Assembler
Write a script that generates the assembly code of a C code and save it in an output file.  

The C file name will be saved in the variable $CFILE  
The output file should be named the same as the C file, but with the extension .s instead of .c.  
Example: if the C file is main.c, the output file should be main.s  
```
gcc -S $CFILE

main.s
#include <stdio.h>

/**
 * main - Entry point
 * Return: Always 0 (Success)
 */

int main(void)
{
return (0);
}
```

## 3. Name
Write a script that compiles a C file and creates an executable named cisfun.
The C file name will be saved in the variable $CFILE
```
gcc $CFILE -o cisfun

main.c
#include <stdio.h>

/**
 * main - Entry point
 * Return: Always 0 (Success)
 */

int main(void)
{
return (0);
}
```
## 4. Hello, puts
Write a C program that prints exactly "Programming is like building a multilingual puzzle, followed by a new line.

Use the function puts
You are not allowed to use printf
Your program should end with the value 0
```
#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
puts("\"Programming is like building a multilingual puzzle");
return (0);
}
```

##  5. Hello, printf
Write a C program that prints exactly with proper grammar, but the outcome is a piece of art,, followed by a new line.

Use the function printf
You are not allowed to use the function puts
Your program should return 0
Your program should compile without warning when using the -Wall gcc option
```
#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
printf("%s", "with proper grammar, but the outcome is a piece of art,\n");
return (0);
}
```

## 6. Size is not grandeur, and territory does not make a nation
Write a C program that prints the size of various types on the computer it is compiled and run on.

You should produce the exact same output as in the example
Warnings are allowed
Your program should return 0
You might have to install the package libc6-dev-i386 on your Linux to test the -m32 gcc option
```
#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    int i;
    char c;
    float f;
    long int e;
    long long int g;

    printf("Size of a char: %lu byte(s)\n", (unsigned long)sizeof(c));
    printf("Size of an int: %lu byte(s)\n", (unsigned long)sizeof(i));
    printf("Size of a long int: %lu byte(s)\n", (unsigned long)sizeof(e));
    printf("Size of a long long int: %lu byte(s)\n", (unsigned long)sizeof(g));
    printf("Size of a float: %lu byte(s)\n", (unsigned long)sizeof(f));
    return (0);
}

```

## 7. Intel
Write a script that generates the assembly code (Intel syntax) of a C code and save it in an output file.

The C file name will be saved in the variable $CFILE.
The output file should be named the same as the C file, but with the extension .s instead of .c.
Example: if the C file is main.c, the output file should be main.s
```
gcc -S -masm=intel $CFILE
```

## 8. UNIX is basically a simple operating system, but you have to be a genius to understand the simplicity
Write a C program that prints exactly and that piece of art is useful" - Dora Korpar, 2015-10-19, followed by a new line, to the standard error.

You are not allowed to use any functions listed in the NAME section of the man (3) printf or man (3) puts
Your program should return 1
Your program should compile without any warnings when using the -Wall gcc option
```
#include <unistd.h>
/**
 * main - Entry point
 *
 * Return: Always 1 (Success)
 */
int main(void)
{
	char str1[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";

	write(2, str1, 59);
	return (1);
}
```