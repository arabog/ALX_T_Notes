# Linux Navigation
<a href="http://linuxcommand.org/lc3_lts0020.php" target="_blank">Linux Navigation</a>  
 
In this lesson, we will introduce our first three commands:   
`pwd` (print working directory),   
`cd` (change directory), and  
`ls` (list files and directories).  

The files on a Linux system are arranged in what is called a hierarchical directory structure. This means that they are organized in a tree-like pattern of directories (called folders in other systems), which may contain files and subdirectories. The first directory in the file system is called the root directory. The root directory contains files and subdirectories, which contain more files and subdirectories and so on and so on.  

## pwd
Think of the file system tree as a maze, and that we are standing in it. At any given moment, we are located in a single directory. Inside that directory, we can see its files and the pathway to its parent directory and the pathways to the subdirectories of the directory in which we are standing.  

The directory we are standing in is called the working directory. To see the name of the working directory, we use the pwd command.  

### ls
To list the files in the working directory, we use the ls command.  

### cd
To change the working directory (where we are standing in the maze) we use the cd command. To do this, we type cd followed by the pathname of the desired working directory. A pathname is the route we take along the branches of the tree to get to the directory we want. Pathnames can be specified two different ways; absolute pathnames or relative pathnames. Let's look with absolute pathnames first.  

![l1](l1.png?raw=true "l1")

An absolute pathname begins with the root directory and follows the tree branch by branch until the path to the desired directory or file is completed. For example, there is a directory on your system in which most programs are installed. The pathname of the directory is /usr/bin. This means from the root directory (represented by the leading slash in the pathname) there is a directory called "usr" which contains a directory called "bin".  

A relative pathname starts from the working directory. To do this, it uses a couple of special notations to represent relative positions in the file system tree. These special notations are "." (dot) and ".." (dot dot).  

The "." notation refers to the working directory itself and the ".." notation refers to the working directory's parent directory.  

We could do that two different ways. First, with an absolute pathname:  
![l2](l2.png?raw=true "l2")

Or, with a relative pathname:  
![l3](l3.png?raw=true "l3")

Absolute means stating the exact path while relative means no path was stated but move a step back.  
In most cases, we can omit the "./". `cd bin`  

If we type cd followed by nothing, cd will change the working directory to our home directory.  

A related shortcut is to type cd ~user_name. In this case, cd will change the working directory to the home directory of the specified user.  

Typing cd - changes the working directory to the previous one.  

![l4](l4.png?raw=true "l4")


## Important facts about file names
File names that begin with a period character are hidden. This only means that `ls` will not list them unless we say `ls -a`. 

![l5](l5.png?raw=true "l5")


File names in Linux, like Unix, are case sensitive. The file names "File1" and "file1" refer to different files.  

Linux has no concept of a "file extension" like Windows systems. You may name files any way you like. However, while Linux itself does not care about file extensions, many application programs do.  

Though Linux supports long file names which may contain embedded spaces and punctuation characters, limit the punctuation characters to period, dash, and underscore. Most importantly, do not embed spaces in file names. If you want to represent spaces between words in a file name, use underscore characters.   

# Linux - looking around
`ls` (list files and directories)
`less` (view text files)
`file` (classify a file's contents)

ls  
The ls command is used to list the contents of a directory. It is probably the most commonly used Linux command. It can be used in a number of different ways. Here are some examples:  

Command	                    Result
`ls`	                    List the files in the working directory  
`ls /bin`	                List the files in the /bin directory (or any other directory we care to specify)  
`ls -l`	                    List the files in the working directory in long format  
`ls -l /etc /bin`           List the files in the /bin directory and the /etc directory in long format  
`ls -la ..`	                List all files (even ones with names beginning with a period character, which are normally hidden) in the parent of the working directory in long format  

![l6](l6.png?raw=true "l6")
![l10](l10.png?raw=true "l10")
![l7](l7.png?raw=true "l7")

Most commands operate like this: `command -options arguments` where command is the name of the command, -options is one or more adjustments to the command's behavior, and arguments is one or more "things" upon which the command operates.  

In the case of ls, we see that ls is the name of the command, and that it can have one or more options, such as -a and -l, and it can operate on one or more files or directories.  

## A Closer Look at Long Format
If we use the -l option with ls, you will get a file listing that contains a wealth of information about the files being listed.  
![l9](l9.png?raw=true "l9")

![l8](l8.png?raw=true "l8")

*File Name* The name of the file or directory.  
*Modification Time* The last time the file was modified. If the last modification occurred more than six months in the past, the date and year are displayed. Otherwise, the time of day is shown.  
*Size* The size of the file in bytes.  
*Group*  The name of the group that has file permissions in addition to the file's owner.  
*Owner* The name of the user who owns the file.  
*File Permissions* A representation of the file's access permissions. The first character is the type of file. A "-" indicates a regular (ordinary) file. A "d" indicates a directory. The second set of three characters represent the read, write, and execution rights of the file's owner. The next three represent the rights of the file's group, and the final three represent the rights granted to everybody else.  

### less
less is a program that lets us view text files. This is very handy since many of the files used to control and configure Linux are human readable. 
![l11](l11.png?raw=true "l11") 

### What is "text"?
There are many ways to represent information on a computer. All methods involve defining a relationship between the information and some numbers that will be used to represent it. Computers, after all, only understand numbers and all data is converted to numeric representation.  

Some of these representation systems are very complex (such as compressed multimedia files), while others are rather simple. One of the earliest and simplest is called ASCII text. ASCII (pronounced "As-Key") is short for American Standard Code for Information Interchange. This is a simple encoding scheme that was first used on Teletype machines to map keyboard characters to numbers. Text is a simple one-to-one mapping of characters to numbers. It is very compact. Fifty characters of text translates to fifty bytes of data.  

The less program is invoked by simply typing: `less text_file` This will display the file.  

**Controlling less**  
Once started, less will display the text file one page at a time. We can use the `Page Up` and `Page Down` keys to move through the text file. To exit less, we type `q`.  

Command	                Action  
Page Up or `b`	        Scroll back one page  
Page Down or `space`	Scroll forward one page     
`G`	                    Go to the end of the text file  
`1G`	                Go to the beginning of the text file  
`/characters`	        Search forward in the text file for an occurrence of the specified characters  
`n`	                    Repeat the previous search  
`h`	                    Display a complete list less commands and options  
`q`	                    Quit  

**file**  
As we wander around our Linux system, it is helpful to determine what kind of data a file contains before we try to view it. This is where the file command comes in. file will examine a file and tell us what kind of file it is. To use the file program, we just type: `file name_of_file`  


# Linux - manipulating files
This lesson will introduce the following commands:  
`cp` - copy files and directories  
`mv` - move or rename files and directories  
`rm` - remove files and directories  
`rmdir` - remove directories  
`mkdir` - create directories  


These five commands are among the most frequently used Linux commands. They are the basic commands for manipulating both files and directories.  

## Wildcards
Before we begin with our commands, we'll first look at a shell feature that makes these commands so powerful. Since the shell uses filenames so much, it provides special characters to help you rapidly specify groups of filenames. These special characters are called `wildcards`. *Wildcards allow you to select filenames based on patterns of characters.*  

Wildcard	                Meaning  
`*`	                        Matches any characters  
`?`	                        Matches any single character  
`[characters]`	            Matches any character that is a member of the set characters. The set of characters may also be expressed as a POSIX character class such as one of the following:  
                            [:alnum:]	        Alphanumeric characters  
                            [:alpha:]	        Alphabetic characters  
                            [:digit:]	        Numerals  
                            [:upper:]	        Uppercase alphabetic characters  
                            [:lower:]	        Lowercase alphabetic characters  

`[!characters]`	            Matches any character that is not a member of the set characters  

Using wildcards, it is possible to construct very sophisticated selection criteria for filenames. Here are some examples of patterns and what they match:  

Pattern	                    Matches  
`*`	                        All filenames  
`g*`	                    All filenames that begin with the character "g"  
`b*.txt`	                All filenames that begin with the character "b" and end with the characters ".txt"  
`Data???`	                Any filename that begins with the characters "Data" followed by exactly 3 more characters  
`[abc]*`	                Any filename that begins with "a" or "b" or "c" followed by any other characters  
`[[:upper:]]*`	            Any filename that begins with an uppercase letter. This is an example of a character class.   
`BACKUP.[[:digit:]][[:digit:]]`	Another example of character classes. This pattern matches any filename that begins with the characters "BACKUP." followed by exactly two numerals.  
`*[![:lower:]]`	            Any filename that does not end with a lowercase letter.  

## cp
The cp program copies files and directories.   
`cp file1 file2`  

It can also be used to copy multiple files (and/or directories) to a different directory:  
`cp file... directory`  

A note on notation: `...` signifies that an item can be repeated one or more times. e.g `cp file1 file2 file3 directory`   
if u r copying a directory too, `cp -r file1 dir1 file2 file3 directory`

![l12](l12.png?raw=true "l12") 

Other useful examples of cp and its options include:  
Command	                Results  
`cp file1 file2`	    Copies the contents of file1 into file2. If file2 does not exist, it is created; otherwise, file2 is silently overwritten with the contents of file1.  
`cp -i file1 file2`	    Like above however, since the "-i" (interactive) option is specified, if file2 exists, the user is prompted before it is overwritten with the contents of file1.  
`cp file1 dir1`	        Copy the contents of file1 (into a file named file1) inside of directory dir1.  
`cp -R dir1 dir2`	    Copy the contents of the directory dir1. If directory dir2 does not exist, it is created. Otherwise, it creates a directory named dir1 within directory dir2.  

## mv
The mv command *moves or renames* files and directories depending on how it is used. It will either move one or more files to a different directory, or it will rename a file or directory. To rename a file, it is used like this:  
`mv filename1 filename2`  

To move files (and/or directories) to a different directory:  
`mv file... directory`  

Command	                        Results  
`mv file1 file2`	            If file2 does not exist, then file1 is renamed file2. If file2 exists, its contents are silently replaced with the contents of file1.  
`mv -i file1 file2`	            Like above however, since the "-i" (interactive) option is specified, if file2 exists, the user is prompted before it is overwritten with the contents of file1.  
`mv file1 file2 dir1`	            The files file1 and file2 are moved to directory dir1. If dir1 does not exist, mv will exit with an error.  
`mv dir1 dir2`	                If dir2 does not exist, then dir1 is renamed dir2. If dir2 exists, the directory dir1 is moved within directory dir2.  

## rm
The rm command removes (deletes) files and directories.  
`rm file...`  

Using the recursive option (-r), rm can also be used to delete directories:  
`rm -r directory...`  

Command	                Results   
`rm file1 file2`	    Delete file1 and file2.  
`rm -i file1 file2`	    Like above however, since the "-i" (interactive) option is specified, the user is prompted before each file is deleted.  
`rm -r dir1 dir2`	    Directories dir1 and dir2 are deleted along with all of their contents.  

# Be careful with rm!
Linux does not have an undelete command. Once you delete something with rm, it's gone. You can inflict terrific damage on your system with rm if you are not careful, particularly with wildcards.  

Before you use `rm` with wildcards, try this helpful trick: construct your command using `ls` instead. By doing this, you can see the effect of your wildcards before you delete files.  

## mkdir
The `mkdir` command is used to create directories.   
`mkdir directory...`

Using Commands with Wildcards  
Since the commands we have covered here accept multiple file and directories names as arguments, you can use wildcards to specify them. Here are a few examples:  

Command	                    Results  
`cp *.txt text_files`	    Copy all files in the current working directory with names ending with the characters ".txt" to an existing directory named text_files.  
`mv dir1 ../*.bak dir2`	    Move the subdirectory dir1 and all the files ending in ".bak" in the current working directory's parent directory to an existing directory named dir2.  
`rm *~`	                    Delete all files in the current working directory that end with the character "~". Some applications create backup files using this naming scheme. Using this command will clean them out of a directory.  

http://linuxcommand.org/tlcl.php or Linux Command textbook  

# Linux - /tmp
`/tmp`  
This directory contains mostly files that are required temporarily. Many programs use this to create lock files and for temporary storage of data. Do not remove files from this directory unless you know exactly what you are doing! Many of these files are important for currently running programs and deleting them may result in a system crash. Usually it won't contain more than a few KB anyway. On most systems, this directory is cleared out at boot or at shutdown by the local system.  


*Linux Filesystem Hierarchy*  
https://tldp.org/LDP/Linux-Filesystem-Hierarchy/html/tmp.html


Explore:  
*man pwd*  
*man ls*  
*man cd*  
*man less*  
*man touch*  
*man cp*  
*man mv*  
*man rm*  
*man mkdir*  
*man rmdir*  

Q: Which command should you use to delete a directory?  
`rmdir`  

Q: Then, remove the directory empty_directory 
`rmdir empty_directory`  