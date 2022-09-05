# Special characters
Some characters are evaluated by Bash to have a non-literal meaning. Instead, these characters carry out a special instruction, or have an alternate meaning; they are called "special characters", or "meta-characters".  

Here are some of the more common special characters uses:  
**Char.**  
" "  

**Description**  
**Whitespace** — this is a tab, newline, vertical tab, form feed, carriage return, or space. Bash uses whitespace to determine where words begin and end. The first word is the command name and additional words become arguments to that command.  

**Char.**  
"$" 

**Description**  
**Expansion** — introduces various types of expansion: parameter expansion (e.g. $var or ${var}), command substitution (e.g. $(command)), or arithmetic expansion (e.g. $((expression))).  

**Char.**  
''  

**Description**  
**Single quotes** — protect the text inside them so that it has a literal meaning. With them, generally any kind of interpretation by Bash is ignored: special characters are passed over and multiple words are prevented from being split.  

**Char.**  
""  

**Description**  
**Double quotes** — protect the text inside them from being split into multiple words or arguments, yet allow substitutions to occur; the meaning of most other special characters is usually prevented.  

**Char.**  
\  

**Description**  
**Escape** — (backslash) prevents the next character from being interpreted as a special character. This works outside of quoting, inside double quotes, and generally ignored in single quotes.  

**Char.**  
#  

**Description**  
**Comment** — the # character begins a commentary that extends to the end of the line. Comments are notes of explanation and are not processed by the shell.  

**Char.**  
=  

**Description**  
**Assignment** -- assign a value to a variable (e.g. logdir=/var/log/myprog). Whitespace is not allowed on either side of the = character.  

**Char.**  
[[ ]]  

**Description**  
**Test** — an evaluation of a conditional expression to determine whether it is "true" or "false". Tests are used in Bash to compare strings, check the existence of a file, etc.  

**Char.**  
!  

**Description**  
**Negate** — used to negate or reverse a test or exit status. For example: ! grep text file; exit $?.  

**Char.**  
>, >>, <  

**Description**  
**Redirection** — redirect a command's output or input to a file.  

**Char.**  
|  

**Description**  
**Pipe** — send the output from one command to the input of another command. This is a method of chaining commands together. Example: echo "Hello beautiful." | grep -o beautiful.  

**Char.**  
;  

**Description**  
**Command separator** — used to separate multiple commands that are on the same line.  

**Char.**  
{ }  

**Description**  
**Inline group** — commands inside the curly braces are treated as if they were one command. It is convenient to use these when Bash syntax requires only one command and a function doesn't feel warranted.  

**Char.**  
( )  

**Description**  
**Subshell group** — similar to the above but where commands within are executed in a subshell (a new process). Used much like a sandbox, if a command causes side effects (like changing variables), it will have no effect on the current shell.  

**Char.**  
(( ))  

**Description**  
**Arithmetic expression** — with an arithmetic expression, characters such as +, -, *, and / are mathematical operators used for calculations. They can be used for variable assignments like (( a = 1 + 4 )) as well as tests like if (( a < b )).   

**Char.**  
$(( ))    

**Description**  
**Arithmetic expansion** — Comparable to the above, but the expression is replaced with the result of its arithmetic evaluation. Example: echo "The average is $(( (a+b)/2 ))".  

**Char.**  
*, ?    

**Description**  
**Globs** -- "wildcard" characters which match parts of filenames (e.g. ls *.txt).  

**Char.**  
~  

**Description**  
**Home directory** — the tilde is a representation of a home directory. When alone or followed by a /, it means the current user's home directory; otherwise, a username must be specified (e.g. ls ~/Documents; cp ~john/.bashrc .  

**Char.**  
&  

**Description**  
**Background** -- when used at the end of a command, run the command in the background (do not wait for it to complete).  

Examples:
```
$ echo "I am $LOGNAME"
I am lhunath

$ echo 'I am $LOGNAME'
I am $LOGNAME

$ # boo

$ echo An open\ \ \ space
An open   space

echo "My computer is $(hostname)"
My computer is Lyndir

$ echo boo > file

$ echo $(( 5 + 5 ))
10


$ (( 5 > 0 )) && echo "Five is greater than zero."
Five is greater than zero.
```

## Deprecated special characters (recognized, but not recommended)
This group of characters will also be evaluated by Bash to have a non-literal meaning, but are generally included for backwards compatibility only. These are not recommended for use, but often appear in older or poorly written scripts.  

```
Char.   Description

` `     Command substitution - use $( ) instead.

[ ]     Test - an alias for the old test command. Commonly used in POSIX shell scripts. Lacks many features of [[ ]].

$[ ]    Arithmetic expression - use $(( )) instead.
```

## Command Substitution
Command substitution is a very powerful concept of the UNIX shell. It is used to insert the output of one command into a second command. E.g. with an assignment:
```
    $ today=$(date)        # starts the "date" command, captures its output
    $ echo "$today"
    Mon Jul 26 13:16:02 MEST 2004
```
This can also be used with other commands besides assignments:
```
    $ echo "Today is $(date +%A), it's $(date +%H:%M)"
    Today is Monday, it's 13:21
```
This calls the date command two times, the first time to print the week-day, the second time for the current time.

Of course, this could just be done with:
```
    date "+Today is %A, it's %H:%M"
```

As with all substitutions, the results of a command substitution will undergo WordSplitting, unless the whole thing is inside double quotes.

Command substitutions may be nested within each other:
```
    IPs=($(awk /"$(</etc/myname)"/'{print $1}' /etc/hosts))
```
Notably, once inside a command substitution, the shell begins an entirely new quoting context. That is, double quotes inside the substitution do not match up with double quotes outside the substitution. So, things like this may be done:
```
    echo "The IPs are $(awk /"$(</etc/myname)"/'{print $1}' /etc/hosts | tr '\n' ' ')"
```
The outermost quotes delimit a single argument that will be passed to echo. The inner double quotes prevent word splitting or glob expansion on the results of the inner command substitution. The two sets of double quotes are independent of each other.  


