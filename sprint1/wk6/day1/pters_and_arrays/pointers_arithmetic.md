# Pointers Arithmetic
Another way to access different elements of an array, is to use this other notation: '*(var + x)', where var is the name of an array, and x is the (x+1)th element (starting counting elements at 0 of course) of this array. For instance if we declare:  

**See 15-main.c**  

Value of a[0]: 98
Value of a[1]: 198
Value of a[2]: 298
Value of a[3]: 398
Value of a[4]: 498
----------------
Value of 'a' (also address of a[0]): 0x7ffee40e6550
Address of 'a[1]': 0x7ffee40e6554
Address of 'a[1]': 0x7ffee40e6554

But wait a second, if the value of a is 0x7ffee40e6550, how come a + 1 == 0x7ffee40e6554 and not 0x7ffee40e6551?
This is the pointers arithmetic. The computer knows that a points to an integer. The computer also knows that the size of an integer in memory is sizeof(int) bytes - in this case 4 bytes - and concludes that the next element of this type will be stored 4 bytes later in memory.  

Try to understand and draw the memory state at each step of the following program. Once you feel you understand everything, add some printfs, compile and run it to verify your hypothesis.
```
/**
* main - Solve me
*
* Return: Always 0.
*/

int main(void)
{
   int a[5];
   int *p;
   int *p2;

   *a = 98;
   *(a + 1) = 198;
   *(a + 2) = 298;
   a[3] = 398;
   *(a + 4) = 498;
   p = a + 1;
   *p = 98;  
   p2 = a + 3;
   *p2 = *p + 1337;
   return (0);
}
```

