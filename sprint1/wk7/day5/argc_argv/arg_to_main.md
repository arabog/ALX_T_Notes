## 10.2. Arguments to main
https://publications.gbdirect.co.uk//c_book/chapter10/arguments_to_main.html  

For those writing programs which will run in a hosted environment, arguments to main provide a useful opportunity to give parameters to programs. Typically, this facility is used to direct the way the program goes about its task. It's particularly common to provide file names to a program through its arguments.

The declaration of main looks like this:
```
int main(int argc, char *argv[]);
```

