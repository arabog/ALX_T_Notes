https://www.cs.cmu.edu/~pattis/15-1XX/common/handouts/ascii.html

## 0. _putchar
Write a program that prints _putchar, followed by a new line.
The program should return 0  

The putchar(int char) method in C is used to write a character, of unsigned char type, to stdout. This character is passed as the parameter to this method.  

## 1. Write a function that prints the alphabet, in lowercase, followed by a new line.
Prototype: void print_alphabet(void);
You can only use _putchar twice in your code
Required: 1-main.c

## 2. 10 x alphabet
Write a function that prints 10 times the alphabet, in lowercase, followed by a new line.
Prototype: void print_alphabet_x10(void);
You can only use _putchar twice in your code
Required: 2-main.c

## 3. Write a function that checks for lowercase character.
Prototype: int _islower(int c);
Returns 1 if c is lowercase
Returns 0 otherwise
FYI: The standard library provides a similar function: islower. Run man islower to learn more.
Required: 3-main.c

## 4. isalpha
Write a function that checks for alphabetic character.
Prototype: int _isalpha(int c);
Returns 1 if c is a letter, lowercase or uppercase
Returns 0 otherwise
FYI: The standard library provides a similar function: isalpha. Run man isalpha to learn more.

## 5. Sign
Write a function that prints the sign of a number.
Prototype: int print_sign(int n);
Returns 1 and prints + if n is greater than zero
Returns 0 and prints 0 if n is zero
Returns -1 and prints - if n is less than zero

## 6. There is no such thing as absolute value in this world. You can only estimate what a thing is worth to you
Write a function that computes the absolute value of an integer.
Prototype: int _abs(int);
FYI: The standard library provides a similar function: abs. Run man abs to learn more.

## 7. There are only 3 colors, 10 digits, and 7 notes; it's what we do with them that's important
Write a function that prints the last digit of a number.
Prototype: int print_last_digit(int);
Returns the value of the last digit


## 8. I'm federal agent Jack Bauer, and today is the longest day of my life
Write a function that prints every minute of the day of Jack Bauer, starting from 00:00 to 23:59.
Prototype: void jack_bauer(void);
You can listen to this soundtrack while coding :)

## 9. Learn your times table
Write a function that prints the 9 times table, starting with 0.
Prototype: void times_table(void);
Format: see example

## 10. a + b
Write a function that adds two integers and returns the result.
Prototype: int add(int, int);

## 11. 98 Battery Street, the OG
Write a function that prints all natural numbers from n to 98, followed by a new line.
Prototype: void print_to_98(int n);
Numbers must be separated by a comma, followed by a space
Numbers should be printed in order
The first printed number should be the number passed to your function
The last printed number should be 98
You are allowed to use the standard library

## 12. The World looks like a multiplication-table, or a mathematical equation, which, turn it how you will, balances itself
Write a function that prints the n times table, starting with 0.
Prototype: void print_times_table(int n);
If n is greater than 15 or less than 0 the function should not print anything
Format: see example

## 13. Nature made the natural numbers; All else is the work of women
If we list all the natural numbers below 10 that are multiples of 3 or 5, we get 3, 5, 6 and 9. The sum of these multiples is 23. Write a program that computes and prints the sum of all the multiples of 3 or 5 below 1024 (excluded), followed by a new line.
You are allowed to use the standard library
Repo:

## 14. In computer class, the first assignment was to write a program to print the first 100 Fibonacci numbers. Instead, I wrote a program that would steal passwords of students. My teacher gave me an A
Write a program that prints the first 50 Fibonacci numbers, starting with 1 and 2, followed by a new line.
The numbers must be separated by comma, followed by a space , 
You are allowed to use the standard library

## 15. Even Liber Abbaci
Each new term in the Fibonacci sequence is generated by adding the previous two terms. By starting with 1 and 2, the first 10 terms will be: 1, 2, 3, 5, 8, 13, 21, 34, 55, 89. By considering the terms in the Fibonacci sequence whose values do not exceed 4,000,000, write a program that finds and prints the sum of the even-valued terms, followed by a new line.
You are allowed to use the standard library  

## 16. In computer class, the first assignment was to write a program to print the first 100 Fibonacci numbers. Instead, I wrote a program that would steal passwords of students. My teacher gave me an A+
Write a program that finds and prints the first 98 Fibonacci numbers, starting with 1 and 2, followed by a new line.
The numbers should be separated by comma, followed by a space ,
You are allowed to use the standard library
You are not allowed to use any other library (You can’t use GMP etc…)
You are not allowed to use long long, malloc, pointers, arrays/tables, or structures
You are not allowed to hard code any Fibonacci number (except for 1 and 2)  


