# Two dimensional (2D) arrays in C programming with example
https://beginnersbook.com/2014/01/2d-arrays-in-c-example/

An array of arrays is known as 2D array. The two dimensional (2D) array in C programming is also known as matrix. A matrix can be represented as a table of rows and columns.  

## Simple Two dimensional(2D) Array Example
This program demonstrates how to store the elements entered by user in a 2d array and how to display the elements of a two dimensional array. For now don’t worry about the initialization of two dimensional array shown in this example, we will discuss that part later.  
```
#include <stdio.h>

int main() {
    /* 2D array declaration*/
    int disp[2][3];

    /*Counter variables for the loop*/
    int i, j;

    for(i = 0; i < 2; i++) {
        for( j = 0; j < 3; j++) {
            printf("Enter value of disp[%d][%d]:", i, j);
            scanf("%d", &disp[i][j]);
        }
    }

    //Displaying array elements
    printf("Two Dimensional array elements:\n");

    for(i = 0; i < 2; i++) {
        for(j = 0; j < 3; j++) {
            printf("%d", disp[i][j]);

            if(j == 2) {
                printf("\n");
            }
        }
    }

    return 0;
}
```
Output:  
Enter value for disp[0][0]:1  
Enter value for disp[0][1]:2  
Enter value for disp[0][2]:3  
Enter value for disp[1][0]:4  
Enter value for disp[1][1]:5  
Enter value for disp[1][2]:6    
Two Dimensional array elements:  
1 2 3   
4 5 6   

## Initialization of 2D Array
There are two ways to initialize a two Dimensional arrays during declaration.
```
int disp[2][4] = {
    {10, 11, 12, 13},
    {14, 15, 16, 17}
};
```
OR
```
int disp[2][4] = { 10, 11, 12, 13, 14, 15, 16, 17};
```
Although both the above declarations are valid, I recommend you to use the first method as it is more readable, because you can visualize the rows and columns of 2d array in this method.  

## Things that you must consider while initializing a 2D array
We already know, when we initialize a normal array (or you can say one dimensional array) during declaration, we need not to specify the size of it. However that’s not the case with 2D array, you must always specify the second dimension even if you are specifying elements during the declaration. Let’s understand this with the help of few examples  
/* Valid declaration*/  
int abc[2][2] = {1, 2, 3, 4};  

/* Valid declaration*/  
int abc[][2]= {1, 2, 3, 4};  

/* Invalid declaration – you must specify second dimension*/  
int abc[][] = {1, 2, 3, 4};  

/* Invalid because of the same reason  mentioned above*/    
int abc[2][] = {1, 2, 3, 4};  

## How to store user input data into 2D array
We can calculate how many elements a two dimensional array can have by using this formula: The array arr[n1][n2] can have n1*n2 elements. The array that we have in the example below is having the dimensions 5 and 4. These dimensions are known as subscripts. So this array has first subscript value as 5 and second subscript value as 4.  
So the array abc[5][4] can have 5*4 = 20 elements.  

To store the elements entered by user we are using two for loops, one of them is a nested loop. The outer loop runs from 0 to the (first subscript -1) and the inner for loop runs from 0 to the (second subscript -1). This way the the order in which user enters the elements would be abc[0][0], abc[0][1], abc[0][2]…so on.  

In above example, I have a 2D array abc of integer type. Conceptually you can visualize the above array like this:  

![arr1](arr1.png?raw=true "arr1")  

However the actual representation of this array in memory would be something like this:  

![arr2](arr2.png?raw=true "arr2")  

## Pointers & 2D array
As we know that the one dimensional array name works as a pointer to the base element (first element) of the array. However in the case 2D arrays the logic is slightly different. You can consider a 2D array as collection of several one dimensional arrays.  

So abc[0] would have the address of first element of the first row (if we consider the above diagram number 1).
similarly abc[1] would have the address of the first element of the second row. To understand it better, lets write a C program –  
```
#include <stdio.h>
int main()
{
   int abc[5][4] ={
        {0,1,2,3},
        {4,5,6,7},
        {8,9,10,11},
        {12,13,14,15},
        {16,17,18,19}
    };


    for (int i = 0; i <= 4; i++) {
        /* The correct way of displaying an address would be
        * printf("%p ",abc[i]); but for the demonstration
        * purpose I am displaying the address in int so that
        * you can relate the output with the diagram above that
        * shows how many bytes an int element uses and how they
        * are stored in contiguous memory locations.
        *
        */
    
        printf("%d ", abc[i]);
    }

    return 0;
}


Output:
637959264 637959280 637959296 637959312 637959328
```
The actual address representation should be in hex for which we use %p instead of %d, as mentioned in the comments. This is just to show that the elements are stored in contiguous memory locations. You can relate the output with the diagram above to see that the difference between these addresses is actually number of bytes consumed by the elements of that row.  

The addresses shown in the output belongs to the first element of each row abc[0][0], abc[1][0], abc[2][0], abc[3][0] and abc[4][0].  

## How to calculate the address of an element in 2D array?
There are two techniques to find the address of an element in 2D array:  
1. Row Major Order  
2. Column Major Order  

## 1. Row Major Order
If am array is represented by arr[x][y] where x represents the rows and y represents the columns then the address of a random element arr[i][j] can be calculated as follows:  
```
Address of arr[i][j] = Base Address + (i * y + j) * size  
```
Here Base Address represents the address of element arr[0][0] (the first element of the array).  

**Example:** Given an array, arr[10][25] with base address 100 and the size of each element is 4 Bytes in memory. Find the address of arr[8][6] with the help of row-major order?  
```
Address of arr[8][6] = Base Address + (8 * 25 + 6) * 4
                     = 100  + (200 + 6) * 4;
                     = 100 + 824    = 924
```

## 2. Column Major Order
If an array is represented by arr[x][y] where x represents the rows and y represents the columns then the address of a random element arr[i][j] using column major method, can be calculated as follows:
```
Address of arr[i][j] = Base Address + (j * x + i) * size
```
**Example:** Given an array, arr[20][20] with base address value 100 and the size of each element is 4 Bytes in memory. Find the address of arr[5][16] with the help of column-major order?  
```
Address of arr[5][16] = Base Address + (j * x + i) * size
                      = 100 + (16 * 20 + 5) * 4
                      = 100 + 325 * 4
                      = 100 + 1300  = 1400
```




