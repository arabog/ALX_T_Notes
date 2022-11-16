# Question #0
You should write documentation for all the structures you create  
True  
As soon as I write my structure.  

# Question #1
The general syntax for a struct declaration in C is:
```
struct tag_name {
   type member1;
   type member2;
   /* declare as many members as desired, but the entire structure size must be known to the compiler. */
};
```
True

# Question #2
Those two codes do the same thing:
```
typedef struct point point;
struct point {
   int    x;
   int    y;
};
point p = {1, 2};


typedef struct point point;
struct point {
   int    x;
   int    y;
};
point p = { .y = 2, .x = 1 };
```
True

# Question #3
Given this code:
```
struct point {
   int x;
   int y;
};
struct point my_point = { 3, 7 };
struct point *p = &my_point;
```
To set the member y of my variable my_point to 98, I can do (select all valid answers):   
my_point.y = 98;  
(*p).y = 98;  
p->y = 98;  
