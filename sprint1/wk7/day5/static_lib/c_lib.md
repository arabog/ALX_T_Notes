https://www.google.com/search?q=C+static+libraries&gws_rd=ssl#q=C+static+libraries
https://www.linkedin.com/pulse/c-static-library-nicolas-ribeiro/

## What is a C Static Library?
In the C programming language, a static library is a compiled object file containing all symbols required by the main program to operate (functions, variables etc.) as opposed to having to pull in separate entities.  

Static libraries aren’t loaded by the compiler at run-time; only the executable file need be loaded. Static library object files instead are loaded near the end of compilation during its linking phase.  

Using a static library means only one object file need be pulled in during the linking phase. This contrasts having the compiler pull in multiple object files (one for each function etc) during linking. The benefit of using a static library is that the functions and other symbols loaded into it are indexed. This means instead of having to look for each entity on separate parts of the disk, the program need only reference a single single archived object (.a) file that has ordered the entities together. As a consequence of having one ordered object file, the program linking this library can load much faster.  

## How to create them?
Static libraries are created using some type of archiving software, such as ar. ar takes one or more object files (that end in .o), zips them up, and generates an archive file (ends in .a) — This is our “static library”.  

Before using ar, we must first have some object files to give to it. Perhaps we’ve written some functions in C that we want to include in our library. We can use the -c option with the GNU compiler (gcc) to stop the compiling process after the assembling stage, translating our files from .c to .o  
```
$ gcc -c pow.c      // produces a pow.o object file
```
Now that we have the object file(s), we can archive them and make a static library using ar.
```
$ ar -rc libcreate.a pow.o

Note: the -rc options create the archive without a warning and replaces any pre-existing object files in the library with the same name.
```
The command above will create a static library called “libcreate.a”. Inside of it will be our pow() function that has been translated to an object file via the gcc command earlier.  

Some archivers automatically organize and index the library, but in case indexing didn’t occur, we can use a command called ranlib to generate and store an index in the archive.

The index lists each symbol defined by a member of an archive that is a relocatable object file. To see a list of the symbols from object files we can use a command called nm.
```
$ nm libcreate.a
// sample output
pow.o:
0000000000000000 T pow
```
So now that we’ve created object files, zipped them up in a library and indexed it, we are ready to use our library.  

## How to use them?
if you want to use a static library in your programs, you need to do this steps.  
Let's say we want to compile our program and the main file contain this code:
```
int main(void)
{
    int x = 5;
    int y = 8;
    int result;

    result = pow(x, y);
    return (0);
}
```
When we try to compile the program we might see an error like this:
```
gcc my_program.c
// Error - Message //
/tmp/ccGLAk66.o: In function `main':
my_program.c:(.text+0x26): undefined reference to `pow'
collect2: error: ld returned 1 exit statu
```
The compiler doesn’t know what pow is. We need to tell it to look in our library:
```
gcc my_program.c -L. -lcreate -o my_program
```
Let’s break that down:

-L says “look in directory for library files”  
. (the dot after ‘L’) represents the current working directory  
-l says “link with this library file”  
create is the name of our library. Note that we omitted the “lib” prefix and “.a” extension. The linker attaches these parts back to the name of the library to create a name of a file to look for.  
-o my_program says “name the executable file my_program”  

If everything worked out, the result will be an executable file called my_program that uses the pow() function that is contained in the libcreate.a static library.  

A library is a file that you create to hold all the necessary functions that you need to use. And, if you create the library, you can use that functions in other projects without create again all the functions.  

## Read more
man gcc  
man ar  
man ranlib  



