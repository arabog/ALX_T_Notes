# Tasks
## 0. Positive anything is better than negative nothing
This program will assign a random number to the variable n each time it is executed. Complete the source code in order to print whether the number stored in the variable n is positive or negative.

The variable n will store a different value every time you will run this program
You don’t have to understand what `rand`, `srand`, `RAND_MAX` do.  
The output of the program should be:  
The number, followed by  
if the number is greater than 0: is positive  
if the number is 0: is zero  
if the number is less than 0: is negative  
followed by a new line  
```
#include <stdlib.h>
#include <time.h>
/* more headers goes there */
#include <stdio.h>
/* betty style doc for function main goes there */
int main(void){
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	/* your code goes there */
    if (n > 0) {
        printf("%d is positive\n", n);
    }else if (n == 0) {
        printf("%d is zero\n", n);
    }else {
        printf("%d is negative\n", n);
    }
	
    return (0);
}
```
rand, rand_r, srand - pseudo-random number generator.  
The rand() function returns a pseudo-random integer in the  range
0   to   RAND_MAX   inclusive   (i.e.,   the  mathematical  range
[0, RAND_MAX]).  

The srand() function sets its argument as the seed for a new  sequence of pseudo-random integers to be returned by rand().  These sequences are repeatable by calling srand() with  the  same  seed
value.  

If  no  seed  value is provided, the rand() function is automatically seeded with a value of 1.  

printf - format and print data  
Print  ARGUMENT(s)  according  to FORMAT, or execute according to OPTION.  

## 1. The last digit
This program will assign a random number to the variable n each time it is executed. Complete the source code in order to print the last digit of the number stored in the variable n.

The variable n will store a different value every time you run this program  
You don’t have to understand what rand, srand, and RAND_MAX do. Please do not touch this code  
The output of the program should be:  
The string Last digit of, followed by n, followed by the string is, followed by  
if the last digit of n is greater than 5: the string and is greater than 5  
if the last digit of n is 0: the string and is 0  
if the last digit of n is less than 6 and not 0: the string and is less than 6 and not 0
followed by a new line  
```
#include <stdlib.h>
#include <time.h>
/* more headers goes there */
#include <stdio.h>
/* betty style doc for function main goes there */
/**
 * main - Determines if a number is positive, negative or zero.
 *
 * Return: Always 0 (Success)
*/

int main(void) 
    int n, digit;

    srand(time(0));
    n = rand() - RAND_MAX / 2;

    /* your code goes there */
    digit = n % 10;

    if (digit > 5){
        printf("Last digit of %d is %d and is greater than 5\n", n, digit);
    }else if (digit == 0){
        printf("Last digit of %d is %d and is 0\n", n, digit);
    }else if (digit < 6 || digit != 0){
        printf("Last digit of %d is %d and is less than 6 and not 0\n", n, digit);
    }

    return (0);
}
```

## 2. I sometimes suffer from insomnia. And when I can't fall asleep, I play what I call the alphabet game
Write a program that prints the alphabet in lowercase, followed by a new line.  
You can only use the `putchar` function (every other function (printf, puts, etc…) is forbidden)  
All your code should be in the main function  
You can only use putchar twice in your code  
```
#include <stdio.h>

/**
 * main - Prints the alphabet.
 *
 * Return: Always 0 (Success)
 */
int main(void){       
    char xter[26] = "abcdefghijklmnopqrstuvwxyz";
    int i;

    for (i = 0; i < 26; i++){       
        putchar(xter[i]);
    }

    putchar('\n');

    return (0);
}
```
fputc,  fputs,  putc,  putchar,  puts  - output of characters and strings.  
fputc() writes the character c, cast to an unsigned char, to stream.  
fputs()  writes  the  string s to stream, without its terminating null byte ('\0').  
putc() is equivalent to fputc() except that it may be implemented as a macro which evaluates stream more than once.  
putchar(c) is equivalent to putc(c, stdout).  
puts() writes the string s and a trailing newline to stdout.  

## 3. alphABET
Write a program that prints the alphabet in lowercase, and then in uppercase, followed by a new line.  
You can only use the `putchar` function (every other function (printf, puts, etc…) is forbidden)  
All your code should be in the main function  
You can only use putchar three times in your code   
```
#include <stdio.h>

/**
 * main - Prints the alphabet.
 *
 * Return: Always 0 (Success)
 */
int main(void){
    char xter[52] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
    int i;

    for (i = 0; i < 52; i++){
        putchar(xter[i]);
    }

    putchar('\n');
    
    return (0);
}
```

## 4. When I was having that alphabet soup, I never thought that it would pay off
Write a program that prints the alphabet in lowercase, followed by a new line.  
Print all the letters except q and e  
You can only use the `putchar` function (every other function (printf, puts, etc…) is forbidden)  
All your code should be in the main function  
You can only use putchar twice in your code  
```
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * main - Prints the alphabet.
 *
 * Return: Always 0 (Success)
 */
int main(void){
    int i;

    for (i = 97; i < 123; i++){
        if (i != 101 && i != 113){
            putchar(i);
        }
    }

    putchar('\n');

    return (0);
}
```

## 5. Numbers
Write a program that prints all single digit numbers of base 10 starting from 0, followed by a new line.  
All your code should be in the main function.  
```
#include <stdio.h>

/**
 * main - Prints the alphabet.
 *
 * Return: Always 0 (Success)
 */
int main(void){
    int i;

    for (i = 0; i < 10; i++){
        printf("%d", i);
    }

    putchar('\n');
    
    return (0);
}
```

## 6. Numberz
Write a program that prints all single digit numbers of base 10 starting from 0, followed by a new line.  
You are not allowed to use any variable of type char  
You can only use the putchar function (every other function (printf, puts, etc…) is forbidden)  
You can only use putchar twice in your code  
All your code should be in the main function  
```
#include <stdio.h>

/**
 * main - Prints the numbers.
 *
 * Return: Always 0 (Success)
 */
int main(void){
    int i;

    for (i = 48; i < 58; i++){
        putchar(i);
    }

    putchar('\n');
    
    return (0);
}
```

## 7. Smile in the mirror
Write a program that prints the lowercase alphabet in reverse, followed by a new line.   
You can only use the putchar function (every other function (printf, puts, etc…) is forbidden)   
All your code should be in the main function  
You can only use `putchar` twice in your code  
```
#include <stdio.h>

/**
* main - Prints reversed alphabet
* 
* Return: Always 0 (Success)
*/

int main(void){
    int i;

    for (i = 122; i > 96; i--){
        putchar(i);
    }

    putchar('\n');
    
    return (0);
}
```

## 8. Hexadecimal
Write a program that prints all the numbers of base 16 in lowercase, followed by a new line.  
You can only use the `putchar` function (every other function (printf, puts, etc…) is forbidden)  
All your code should be in the main function  
You can only use `putchar` three times in your code  
```
#include <stdio.h>

/**
 * main - Prints numbers between 0 to 9 and letters between a to f.
 *
 * Return: Always 0 (Success)
 */
int main(void){
    int i;

    for (i = 48; i < 58; i++){
        putchar(i);
    }

    for (i = 97; i < 103; i++){
        putchar(i);
    }

    putchar('\n');
    
    return (0);
}
```

## 9. Patience, persistence and perspiration make an unbeatable combination for success
Write a program that prints all possible combinations of single-digit numbers.  
Numbers must be separated by,',' followed by a space  
Numbers should be printed in ascending order  
You can only use the `putchar` function (every other function (printf, puts, etc…) is forbidden)  
All your code should be in the main function  
You can only use `putchar` four times maximum in your code  
You are not allowed to use any variable of type char  
```
#include <stdio.h>

/**
 * main - Prints numbers between 0 to 9 with commas and spaces.
 *
 * Return: Always 0 (Success)
 */
int main(void){
    int i;

    for (i = 48; i < 58; i++){
        putchar(i);

        <!-- As long as i is not 9 (i.e 57) add , and ' ' -->
        if (i != 57){
            putchar(',);

            putchar(' ');
        }
    }

    putchar('\n);
    
    return (0);
}
```

## 10. Inventing is a combination of brains and materials. The more brains you use, the less material you need
Write a program that prints all possible different combinations of two digits.  
Numbers must be separated by ,',' followed by a space  
The two digits must be different  
01 and 10 are considered the same combination of the two digits 0 and 1  
Print only the smallest combination of two digits  
Numbers should be printed in ascending order, with two digits  
You can only use the `putchar` function (every other function (printf, puts, etc…) is forbidden)  
You can only use `putchar` five times maximum in your code  
You are not allowed to use any variable of type char  
All your code should be in the main function  
```
#include <stdio.h>
/**
 * main - Prints numbers between 00 to 89.
 *
 * Return: Always 0 (Success)
 */
int main(void){
    int e, i;
    e = 48;     //48 => 0
    i = 48;

    while (e < 58){
        i = 48;

        while (i < 58){     //58 => Shift (i.e d value after 9(57))
            if (e != i && e < i){
                putchar(i);
                putchar(e);

                if (i == 57 && e == 56){    //57 => 9, 56 => 8
                    break;
                }

                putchar(',');
                putchar(' ');
            }

            i++;
        }

        e++;
    }

    putchar('\n');
    
    return (0);
}
```
## 11. The success combination in business is: Do what you do better... and: do more of what you do...
Write a program that prints all possible different combinations of three digits.  
Numbers must be separated by ,, followed by a space  
The three digits must be different   
012, 120, 102, 021, 201, 210 are considered the same combination of the three digits 0, 1 and 2  
Print only the smallest combination of three digits  
Numbers should be printed in ascending order, with three digits    
You can only use the `putchar` function (every other function (printf, puts, etc…) is forbidden)  
You can only use `putchar` six times maximum in your code  
You are not allowed to use any variable of type char  
All your code should be in the main function  
```
#include <stdio.h>

/**
 * main - Prints numbers between 012 to 789.
 *
 * Return: Always 0 (Success)
 */
int main(void){
    int i, e, g;

    i = 48;
    e = 48;
    g = 48;

    while (e < 58){
        i = 48;
        while (i < 58){
            g = 48;
            while (g < 58){
                if (e != i && e != g && i != g && e < i && i < g){
                    putchar(e);
                    putchar(i);
                    putchar(g);

                    if (g == 57 && i == 56 && e == 55){
                        break;
                    }

                    putchar(',');
                    putchar(' ');
                }
                g++;
            }
            i++;
        }
        e++;
    }
    putchar('\n');
    return (0);
}
```
## 12. Software is eating the World
Write a program that prints all possible combinations of two two-digit numbers.  
The numbers should range from 0 to 99  
The two numbers should be separated by a space  
All numbers should be printed with two digits. 1 should be printed as 01  
The combination of numbers must be separated by comma, followed by a space  
The combinations of numbers should be printed in ascending order  
00 01 and 01 00 are considered as the same combination of the numbers 0 and 1  
You can only use the `putchar` function (every other function (printf, puts, etc…) is forbidden)  
You can only use `putchar` eight times maximum in your code  
You are not allowed to use any variable of type char  
All your code should be in the main function  
```
#include <stdio.h>

/**
 * main - Prints numbers between 00 to 99.
 *
 * Return: Always 0 (Success)
 */
int main(void){
    int i, e, g, h, op1, op2;

    i = e = g = h = 48;
    while (h < 58){
        g = 48;
        while (g < 58){
            e = 48;
            while (e < 58){
                i = 48;
                while (i < 58){
                    op1 = (h * 10) + g;
                    op2 = (e * 10) + i;
                    if (op1 < op2){
                        putchar(h);
                        putchar(g);

                        putchar(' ');
                    
                        putchar(e);
                        putchar(i);
                    
                        if (h == 57 && g == 56 && e == 57 && i == 57)
                            break;

                        putchar(',');
                        putchar(' ');
                    }
                    i++;
                }
                e++;
            }
            g++;
        }
        h++;
    }
    putchar('\n');
    return (0);
}
```