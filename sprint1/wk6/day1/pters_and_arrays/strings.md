**See 17-main.c**  

That would be one way to store strings, but this is not very efficient. If we wanted to store a very long text, imagine how much time would we spend storing each character of the string in our array!
Fortunately, we can also use text in double quotes ".
```
char a[7] = "School";  
```

You probably noticed that in this example, we used an array of 7 characters to store a string of 6 characters. This is because in C, strings end with the char '\0' (ascii value = 0).  

In the above example, note that this statement will actually copy the string “School” into the variable a. Strings also have values in C: the address of their first character in memory:  

**See 18-main.c**  

Since every string in C ends with a '\0' we do not need to know their size to use them. By knowing the address of the first character of strings (with a pointer to a char), C functions can easily print them using a loop, one character at a time, until they hit the character '\0'.  