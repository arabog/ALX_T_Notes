# C - Pointers, arrays and strings
For this project, we expect you to look at these concepts:  
Pointers and arrays  
Data Structures  

## Learning Objectives
What are pointers and how to use them  
What are arrays and how to use them  
What are the differences between pointers and arrays  
How to use strings and how to manipulate them  
Scope of variables  

## Requirements
All your files will be compiled on Ubuntu 20.04 LTS using gcc, using the options `-Wall -Werror -Wextra -pedantic -std=gnu89`  i.e `gcc -Wall -Wextra -Werror -pedantic -std=gnu89 0-main.c -o sizeof && ./sizeof`

### Question #0
What is the size of a pointer to a char (on a 64-bit architecture)  
8 bytes

### Question #1
What is the size of a pointer to an int (on a 64-bit architecture)  
8 bytes

### Question #2
If we have a variable called var of type int, how can we get its address in memory?  
&var

### Question #3
What is the identifier to print an address with printf?  
%p

### Question #4
The process of getting the value that is stored in the memory location pointed to by a pointer is called:  
Dereferencing  

### Question #5
Is it possible to declare a pointer to a pointer?  
Yes

### Question #6
What happens when one tries to access an illegal memory location?  
Segmentation fault

### Question #7
What is the value of n after the following code is executed?
```
int n = 98;
int *p = &n;

Ans: n = 98
```
### Question #8
What is the value of n after the following code is executed?
```
int n = 98;
int *p = &n;

p = 402;

Ans: n = 98
```

### What is the value of n after the following code is executed?
```
int n = 98;
int *p = &n;

*p = 402;

Ans: n = 402
```

### Question #10
What is the value of n after the following code is executed?
```
int n = 98;
int *p = &n;

*p++;

Ans: n = 98
```

### Question #11
We declare the following variable
```
int arr[5];
```
What is the size in memory of the variable arr?  
Ans: 20 (arr is 4bytes so times 5 elements = 20)


### Question #12
We declare the following variable
```
int arr[5];
```
What is the equivalent of typing arr[2]?  
*(arr + 2)
