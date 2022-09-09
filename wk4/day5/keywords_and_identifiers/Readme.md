# Keywords and Identifiers
The most obvious of the language elements are keywords and identifiers; their forms are identical (although their meanings are different).

https://publications.gbdirect.co.uk//c_book/chapter2/keywords_and_identifiers.html

## Keywords
C keeps a small set of keywords for its own use. These keywords cannot be used as identifiers in the program — a common restriction with modern languages. Where users of Old C may be surprised is in the introduction of some new keywords; if those names were used as identifiers in previous programs, then the programs will have to be changed. It will be easy to spot, because it will provoke your compiler into telling you about invalid names for things. Here is the list of keywords used in Standard C; you will notice that none of them use upper-case letters.  
```
auto	    double	        int	        struct
break	    else	        long	    switch
case	    enum	        register	typedef
char	    extern	        return	    union
const	    float	        short	    unsigned
continue	for	            signed	    void
default	    goto	        sizeof	    volatile
do	        if	            static	    while
```
## Identifiers
Identifier is the fancy term used to mean ‘name’. In C, identifiers are used to refer to a number of things: we've already seen them used to name variables and functions. They are also used to give names to some things we haven't seen yet, amongst which are labels and the ‘tags’ of structures, unions, and enums.  

The rules for the construction of identifiers are simple: you may use the 52 upper and lower case alphabetic characters, the 10 digits and finally the underscore ‘_’, which is considered to be an alphabetic character for this purpose. The only restriction is the usual one; identifiers **must** start with an alphabetic character.  

Although there is no restriction on the length of identifiers in the Standard, this is a point that needs a bit of explanation. So, practically speaking, the new limit is 31 characters—although identifiers may be longer, they must differ in the first 31 characters if you want to be sure that your programs are portable.  

One of the most controversial parts of the Standard is the length of external identifiers. External identifiers are the ones that have to be visible outside the current source code file. Typical examples of these would be library routines or functions which have to be called from several different source files.  

