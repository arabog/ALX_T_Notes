## 0x00. C - Hello, World
https://www.youtube.com/watch?v=co0b0xLEuRM

## Dennis Ritchie
Dennis MacAlistair Ritchie (September 9, 1941 – c. October 12, 2011) was an American computer scientist. He is most well-known for creating the C programming language and, with long-time colleague Ken Thompson, the Unix operating system and B programming language.  

## "C" Programming Language: Brian Kernighan - Computerphile
https://www.youtube.com/watch?v=de2Hsvxaf8M  


## Why C Programming Is Awesome
https://www.youtube.com/watch?v=smGalmxPVYc


## Learning to Program in C (Part 01)
https://www.youtube.com/watch?v=rk2fK2IIiiQ  

**char means character**  
char is typically 1 byte e.g a, b, c
int is typically 4 bytes
float (floating point) typically 4 bytes
double(extended precision float) typically 8 bytes  

**C: Modifiers**  
long, long long, short, unsigned, and signed
long, long long - extended (size/space) on some systems and can be used with int, double  
short - takes half space on some systems  
signed/unsigned(int or char)  

sizeof() can be used to determine d amt of size any intrinsic type, union, or struct takes in bytes.  

Type Casting  
```
float f;
int i = 10;
f = (float) i;  //assigned 10.0 to f

f = 3.14;
i = (int) f;    // assigned 3 to i
```
Fout ways to compile source code(.c)    
```
1. gcc hello.c
./a.out
2. gcc hello.c -o hello
./hello

3. make hello
NB: u must have a file named hello.c before u can use ds i.e make name_of_file_without_dot_c

4. gcc hello.c -o hello && ./hello
```

## Learning to Program in C (Part 02): Input and Output
https://www.youtube.com/watch?v=FwpP_MsZWnU  

getchar() - reading input from standard input  
putchar() - writing output, returns d xter dt was written.  

**Formatted Output**  
printf() displays formatted output to stdout  
printf(format_str, arg1, arg2, ..)  
printf("who: %s size: %d cost: %5.2f", "you", 12, 1.2);

%s: string  
%d: integer   
%5.2f: floating pt 5 digits with 2 to the right of d decimal place  
%c: characters e.g c, R, T etc  

scanf() reads formatted input from standard input  
scanf(format_str, &arg1, &arg2, ..)  

&arg denotes d address of the entered variables/inputs  

```
#include <stdio.h>

int main(void) {
    int i;
    double d;
    char c;

    printf("The size of an int is: %lu.\n", (unsigned long)sizeof(i));

    printf("The size of a double is: %lu.\n", (unsigned long)sizeof(d));

    printf("The size of a c is: %lu.\n", (unsigned long)sizeof(c));
}
```


## Understanding C program Compilation Process
https://www.youtube.com/watch?v=VDslRumKvRA  

Components of compiler:
Preprocessor - source code(.c file). It removes comments, include header files in source code, replace macro name with code.    
Compiler - generate assembly code  
Assembler - convert assembly code to object code also called machine code(wc r md up 0 and 1)    
Linker: combine/link libraries and object code to generate executable files    

## Betty Coding Style
https://alx-intranet.hbtn.io/projects/212#task-830  

### Betty style usage
https://github.com/holbertonschool/Betty/wiki/Betty-style-usage  

o check your C source files or C header files coding style, you can run betty-style script as follows:
```
./betty-style.pl file1 [file 2 [file3 [...]]]
```
Examples:
```
./betty-style.pl main.c
./betty-style.pl main.c crack_passwd.c utils.h  
./betty-style.pl src/*.c include/*.h  
```
You can see all available options for betty-style by running the script as follows:
```
./betty-style.pl --help
```

### Betty doc usage
https://github.com/holbertonschool/Betty/wiki/Betty-doc-usage  

To check your C source files or C header files documentation, you can run betty-doc script as follows:
```
./betty-doc.pl file
```
Examples:
```
./betty-doc.pl main.c
./betty-doc.pl main.c crack_passwd.c utils.h
./betty-doc.pl src/*.c include/*.h
```
You can see all available options for betty-doc by running the script as follows:
```
./betty-doc.pl -h
```

## kernel_perspective
https://twitter.com/unix_byte/status/1024147947393495040?s=21

## Linus Torvalds on C vs. C++
http://harmful.cat-v.org/software/c++/linus  

