## What is the purpose of a function prototype?
https://www.geeksforgeeks.org/what-is-the-purpose-of-a-function-prototype/

The Function prototype serves the following purposes – 
1) It tells the return data type the function will return.  
2) It tells the number of arguments passed to the function.  
3) It tells the data types of each of the passed arguments.  
4) Also it tells the order in which the arguments are passed to the function.  

Therefore essentially, the function prototype specifies the input/output interface to the function i.e. what to give to the function and what to expect from the function.
The prototype of a function is also called the signature of the function.  

### What if one doesn’t specify the function prototype? 
The output of the below kinds of programs is generally asked at many places. 
```
int main() {
    foo();
    getchar();
    return 0;
}

void foo() {
    printf("foo called");
}
```
A function prototype is simply the declaration of a function that specifies function's name, parameters and return type. It doesn't contain function body. A function prototype gives information to the compiler that the function may later be used in the program.
```
#include <stdio.h>
int addNumbers(int a, int b);         // function prototype

int main()
{
    int n1,n2,sum;

    printf("Enters two numbers: ");
    scanf("%d %d",&n1,&n2);

    sum = addNumbers(n1, n2);        // function call
    printf("sum = %d",sum);

    return 0;
}

int addNumbers(int a, int b)         // function definition   
{
    int result;
    result = a+b;
    return result;                  // return statement
}
```
