#include <stdio.h> 
 
// int data1 = 0; //Stored in uninitialized area
 
// int main(void) 
// { 
//     static int data2 = 0; //Stored in uninitialized area
   
//     return 0; 
// }


int main(void)
{
    int arr[5];

    printf("size of 'arr': %lu\n", sizeof(arr));
    return (0);
}