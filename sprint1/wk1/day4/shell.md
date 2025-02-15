# LEARNING THE SHELL
<a href="http://linuxcommand.org/lc3_learning_the_shell.php" target="_blank">Shell</a>  

## Why Bother?
Why do you need to learn the command line anyway? Well, let me tell you a story. Many years ago we had a problem where I worked. There was a shared drive on one of our file servers that kept getting full and it stopped people from working. One of our software engineers spent a couple of hours writing a C++ program that would look through all the user's directories and add up the space they were using and make a listing of the results. Since I was forced to use the legacy OS while I was on the job, I installed a Linux-like command line environment for it. When I heard about the problem, I realized I could perform this task with this single line:
```
du -s * | sort -nr > $HOME/user_space_report.txt
```
Graphical user interfaces (GUIs) are helpful for many tasks, but they are not good for all tasks. I have long felt that most computers today are not powered by electricity. They instead seem to be powered by the "pumping" motion of the mouse. Computers were supposed to free us from manual labor, but how many times have you performed some task you felt sure the computer should be able to do but you ended up doing the work yourself by tediously working the mouse? Pointing and clicking, pointing and clicking.  

## What is "the Shell"?
Shell is a **program that takes commands** from the keyboard and gives them to the operating system to perform. In the old days, it was the only user interface available on a Unix-like system such as Linux. Nowadays, we have graphical user interfaces (GUIs) in addition to command line interfaces (CLIs) such as the shell.

On most Linux systems a program called **bash** (which stands for Bourne Again SHell, an enhanced version of the original Unix shell program, **sh**, written by Steve Bourne) acts as the shell program. Besides bash, there are other shell programs available for Linux systems. These include: **ksh**, **tcsh** and **zsh**.  

### What's a "Terminal?"
It's a program called a terminal emulator. This is a program that opens a window and lets you interact with the shell. There are a bunch of different terminal emulators we can use. Some Linux distributions install several. These might include **gnome-terminal**, **konsole**, **xterm**, **rxvt**, **kvt**, **nxterm**, and **eterm**.   

### Starting a Terminal
```
Mac OS X	ctrl-cmd-t
Windows	    ctrl-alt-t
Linux	    ctrl-alt-t

To Paste:
Ctrl + Shift + V

To Copy:
Ctrl + Shift + C
```
### Testing the Keyboard
OK, let's try some typing. Bring up a terminal window. The first thing we should see is a shell prompt that contains our user name and the name of the machine followed by a dollar sign. Something like this:
```
[me@linuxbox me]$
```
Excellent! Now type some nonsense characters and press the enter key.
```
[me@linuxbox me]$ kdkjflajfks
```
If all went well, we should have gotten an error message complaining that it cannot understand the command:  
```
[me@linuxbox me]$ kdkjflajfks
bash: kdkjflajfks: command not found
```
Wonderful! Now press the up-arrow key. Watch how our previous command `"kdkjflajfks"` returns. Yes, we have command history. Press the down-arrow and we get the blank line again.  

Recall the `"kdkjflajfks"` command using the up-arrow key if needed. Now, try the left and right-arrow keys. We can position the text cursor anywhere in the command line. This allows us to easily correct mistakes.   

**You're not operating as root, are you?**
```
If the last character of your shell prompt is # rather than $,   
you are operating as the superuser. This means that you have  
administrative privileges. This can be dangerous, since you   
are able to delete or overwrite any file on the system. Unless   
you absolutely need administrative privileges, do not operate  
as the superuser.
```
### Using the Mouse
Even though the shell is a command line interface, the mouse is still handy.  
Besides using the mouse to scroll the contents of the terminal window, we can can use it to copy text.  


## Linux Navigation
In this lesson, we will introduce our first three commands:   
`pwd` (print working directory),   
`cd` (change directory), and  
`ls` (list files and directories).  

The files on a Linux system are arranged in what is called a **hierarchical directory structure**. This means that they are organized in a tree-like pattern of directories (called folders in other systems), which may contain files and subdirectories. **The first directory in the file system is called the root directory**. The root directory contains files and subdirectories, which contain more files and subdirectories and so on and so on.  

## pwd
Think of the file system tree as a maze, and that we are standing in it. At any given moment, we are located in a single directory. Inside that directory, we can see its files and the pathway to its parent directory and the pathways to the subdirectories of the directory in which we are standing. The directory we are standing in is called the **working directory**. To see the name of the working directory, we use the **pwd** command.  

### ls
To list the files in the working directory, we use the `ls` command.  

### cd
To change the working directory (where we are standing in the maze) we use the `cd` command. To do this, we type cd followed by the pathname of the desired working directory. A **pathname** is the route we take along the branches of the tree to get to the directory we want. Pathnames can be specified two different ways; absolute pathnames or relative pathnames. Let's look at absolute pathnames first.  

![l1](l1.png?raw=true "l1")

An absolute pathname begins with the root directory and follows the tree branch by branch until the path to the desired directory or file is completed. For example, there is a directory on your system in which most programs are installed. The pathname of the directory is **/usr/bin**. This means from the root directory (represented by the leading slash, **/**, in the pathname) there is a directory called "usr" which contains a directory called "bin".  

A relative pathname starts from the working directory. To do this, it uses a couple of special notations to represent relative positions in the file system tree. These special notations are **.** (dot) and **..** (dot dot). The "." notation refers to the working directory itself and the ".." notation refers to the working directory's parent directory.  
We could do that two different ways. First, with an absolute pathname:  
![l2](l2.png?raw=true "l2")

Or, with a relative pathname:  
![l3](l3.png?raw=true "l3")

Absolute means stating the exact path while relative means no path was stated but move a step back. In most cases, we can omit the "./". `cd bin` If we type cd followed by nothing, cd will change the working directory to our home directory. A related shortcut is to type **cd ~user_name**. In this case, cd will change the working directory to the home directory of the specified user. Typing **cd -** changes the working directory to the previous one.  

![l4](l4.png?raw=true "l4")

## Important facts about file names
File names that begin with a **.**, period character are hidden. This only means that `ls` will not list them unless we say `ls -a`. 

![l5](l5.png?raw=true "l5")


File names in Linux, like Unix, are case sensitive. The file names "File1" and "file1" refer to different files.  
Linux has no concept of a "file extension" like Windows systems. You may name files any way you like. However, while Linux itself does not care about file extensions, many application programs do.  
Though Linux supports long file names which may contain embedded spaces and punctuation characters, limit the punctuation characters to period, dash, and underscore. Most importantly, do not embed spaces in file names. If you want to represent spaces between words in a file name, use underscore characters.   

# Linux - looking around
`ls` (list files and directories)  
`less` (view text files) content, and quit suing q  
`file` (classify a file's contents)  

## ls  
The **ls** command is used to list the contents of a directory. It is probably the most commonly used Linux command. It can be used in a number of different ways. Here are some examples:  
```
Command	                    Result
ls	                        List the files in the working directory  
ls /bin	                    List the files in the /bin directory (or any other directory we care to specify)  
ls -l	                    List the files in the working directory in long format  
ls -l /etc /bin             List the files in the /bin directory and the /etc directory in long format  
ls -la ..	                List all files (even ones with names beginning with a period character,  
which are normally hidden) in the parent of the working directory in long format  
ls -l | grep ^d or ls -d */ List only the directories
```
![l6](l6.png?raw=true "l6")
![l10](l10.png?raw=true "l10")
![l7](l7.png?raw=true "l7")

Most commands operate like this: `command -options arguments` where command is the name of the command, -options is one or more adjustments to the command's behavior, and arguments is one or more "things" upon which the command operates.  

In the case of `ls`, we see that `ls` is the name of the command, and that it can have one or more options, such as -a and -l, and it can operate on one or more files or directories.  

## A Closer Look at Long Format
If we use the `-l` option with `ls`, you will get a file listing that contains a wealth of information about the files being listed.  
![l9](l9.png?raw=true "l9")

![l8](l8.png?raw=true "l8")

**File Name** &emsp; The name of the file or directory.  
**Modification Time** &emsp; The last time the file was modified. If the last modification occurred more than six months in the past, the date and year are displayed. Otherwise, the time of day is shown.  
**Size** &emsp; The size of the file in bytes.  
**Group** &emsp;  The name of the group that has file permissions in addition to the file's owner.  
**Owner** &emsp; The name of the user who owns the file.  
**File Permissions** &emsp; A representation of the file's access permissions. The first character is the type of file. A **"-"** indicates a regular (ordinary) file. A **"d"** indicates a directory. The second set of three characters represent the **rwx, read, write, and execution** rights of the file's owner. The next three represent the rights of the file's group, and the final three represent the rights granted to everybody else.  

### less
**less** is a program that lets us view text files(contents). This is very handy since many of the files used to control and configure Linux are human readable.  

![l11](l11.png?raw=true "l11") 

### What is "text"?
There are many ways to represent information on a computer. All methods involve defining a relationship between the information and some numbers that will be used to represent it. **Computers**, after all, **only understand numbers** and all data is converted to numeric representation.  

Some of these representation systems are very complex (such as compressed multimedia files), while others are rather simple. One of the earliest and simplest is called ASCII text. ASCII (pronounced "As-Key") is short for **American Standard Code for Information Interchange**. This is a simple encoding scheme that was first used on Teletype machines to map keyboard characters to numbers. Text is a simple one-to-one mapping of characters to numbers. It is very compact. **Fifty characters of text translates to fifty bytes of data**.  

The less program is invoked by simply typing: `less text_file` This will display the file.  

**Controlling less**  
Once started, less will display the text file one page at a time. We can use the `Page Up` and `Page Down` keys to move through the text file. To exit less, we type `q`.  

Command	    &emsp;&emsp; Action  
Page Up or `b`	 &emsp;&emsp;       Scroll back one page  
Page Down or `space` &emsp;&emsp;	Scroll forward one page     
`G`	  &emsp;&emsp;      Go to the end of the text file  
`1G` &emsp;&emsp;       Go to the beginning of the text file  
`/characters`  &emsp;&emsp; Search forward in the text file for an occurrence of the specified characters  
`n`	 &emsp;&emsp;       Repeat the previous search  
`h`	 &emsp;&emsp;       Display a complete list less commands and options  
`q`	 &emsp;&emsp;       Quit  

**file**  
As we wander around our Linux system, it is helpful to determine what kind of data a file contains before we try to view it. This is where the **file** command comes in. `file` will examine a file and tell us what kind of file it is.  
To use the file program, we just type: `file name_of_file`  
While it may seem that most files cannot be viewed as text, a surprising number can be. This is especially true of the important configuration files. During our adventure we will see that many features of the operating system are controlled by text configuration files and shell scripts. In Linux, there are no secrets!

# A Guided Tour
The contents below show some interesting places to explore. This is by no means a complete list, but it should prove to be an interesting adventure. For each of the directories listed below, do the following:  
`cd` into each directory.  
`ls` to list the contents of the directory.  
If there is an interesting file, use the `file` command to determine its contents.  
For text files, use `less` to view them.  

**Directory: /**  
**Description**  
The root directory where the file system begins(the first directory of the sysmtem). The root directory will probably contain only subdirectories.  

**Directory: /boot**  
**Description**  
This is where the Linux kernel and boot loader files are kept. The kernel is a file called vmlinuz.    

**Directory: /etc**  
**Description**  
The **/etc** directory contains the configuration files for the system. All of the files in /etc should be text files. Some points of interest are:  
`/etc/passwd` The `passwd` file contains the essential information for each user. This is where user accounts are defined.  
`/etc/fstab` The `fstab` file contains a table of devices that get mounted when the system boots. This file defines the system's disk drives.  
`/etc/hosts` This file lists the `network host names and IP addresses` that are intrinsically known to the system.  
`/etc/init.d` This directory contains the scripts that start various system services at boot time.  

**Directory: /bin, /usr/bin**  
**Description**  
These two directories contain most of the programs for the system. The **/bin** directory has the **essential programs that the system requires to operate**, while **/usr/bin** contains **applications** for the system's users.  

**Directory: /sbin, /usr/sbin**  
**Description**  
The sbin directories contain programs for system administration, mostly for use by the superuser.  

**Directory: /usr**  
**Description**  
The **/usr** directory contains a variety of things that support user applications.  
Some highlights:  
`/usr/share/X11` Support files for the X Window system
`/usr/share/dict` Dictionaries for the spelling checker. Yes, Linux comes with a spelling checker.  
`/usr/share/doc` Various documentation files in a variety of formats.  
`/usr/share/man` The man pages are kept here.  

**Directory: /usr/local**  
**Description**  
`/usr/local` and its subdirectories are used for the installation of software and other files for use on the local machine. What this really means is that software that is not part of the official distribution (which usually goes in /usr/bin) goes here.    
When you find interesting programs to install on your system, they should be installed in one of the /usr/local directories. Most often, the directory of choice is `/usr/local/bin`.  

**Directory: /var**  
**Description**  
The` /var` directory contains files that change as the system is running. This includes:  
`/var/log`  are directory that contains log files. These are updated as the system runs. It's a good idea to view the files in this directory from time to time, to monitor the health of your system.  
`/var/spool` This directory is used to hold files that are queued for some process, such as mail messages and print jobs. When a user's mail first arrives on the local system (assuming it has local mail, a rare occurrence on modern machines that are not mail servers), the messages are first stored in /var/spool/mail  

**Directory: /lib**  
**Description**  
The shared libraries (similar to DLLs in that other operating system) are kept here.  

**Directory: /home**  
**Description**  
`/home` is where users keep their personal work. In general, this is the only place users are allowed to write files. This keeps things nice and clean :-)

**Directory: /root**  
**Description**  
This is the superuser's home directory.

**Directory: /tmp**  
**Description**  
`/tmp` is a directory in which programs can write their temporary files.

**Directory: /dev**  
**Description**  
The `/dev` directory is a special directory, since it does not really contain files in the usual sense. Rather, **it contains devices** that are available to the system. **In Linux (like Unix), devices are treated like files**. You can read and write devices as though they were files. For example `/dev/fd0` is the first floppy disk drive, `/dev/sda` is the first hard drive. All the devices that the kernel understands are represented here.  

**Directory: /proc**  
**Description**  
The `/proc` directory is also special. This directory does not contain files. In fact, this directory does not really exist at all. It is entirely virtual. The `/proc` directory contains little peep holes into the kernel itself. There are a group of numbered entries in this directory that correspond to all the processes running on the system. In addition, there are a number of named entries that permit access to the current configuration of the system. Many of these entries can be viewed. Try viewing `/proc/cpuinfo`. This entry will tell you what the kernel thinks of the system's CPU.  

**Directory: /media**  
**Description**  
`/media` is a normal directory which is used in a special way. The `/media` directory is used for mount points. Different physical storage devices (like hard disk drives) are attached to the file system tree in various places. This process of attaching a device to the tree is called **mounting**. For a device to be available, it must first be mounted.  

When your system boots, it reads a list of mounting instructions in the `/etc/fstab` file, which describes which device is mounted at which mount point in the directory tree. This takes care of the hard drives, but we may also have devices that are considered temporary, such as optical disks and USB storage devices. Since these are removable, they do not stay mounted all the time. The `/media` directory is used by the automatic device mounting mechanisms found in modern desktop oriented Linux distributions. To see what devices and mount points are used, type `mount`.    

# Linux - manipulating files
This lesson will introduce the following commands:  
`cp` - copy files and directories  
`mv` - move or rename files and directories  
`rm` - remove files and directories, `rmdir or rm -r dir` - remove directories  
`mkdir` - create directories  

These five commands are among the most frequently used Linux commands. They are the basic commands for manipulating both files and directories.  

## Wildcards
Before we begin with our commands, we'll first look at a shell feature that makes these commands so powerful. Since the shell uses filenames so much, it provides special characters to help you rapidly specify groups of filenames. These special characters are called `wildcards`. *Wildcards allow you to select filenames based on patterns of characters.*  

Wildcard  &emsp;&emsp;&emsp;  Meaning  
`*`	   &emsp;               Matches any characters  
`?`	   &emsp;               Matches any single character  
`[characters]`	&emsp;      Matches any character that is a member of the set characters.  
The set of characters may also be expressed as a POSIX character class such as one of the following:  
&emsp;&emsp;&emsp;          [:alnum:]	 &emsp;&emsp;    Alphanumeric characters  
&emsp;&emsp;&emsp;          [:alpha:]	 &emsp;&emsp;    Alphabetic characters  
&emsp;&emsp;&emsp;          [:digit:]	 &emsp;&emsp;    Numerals  
&emsp;&emsp;&emsp;          [:upper:]	 &emsp;&emsp;    Uppercase alphabetic characters  
&emsp;&emsp;&emsp;          [:lower:]	 &emsp;&emsp;    Lowercase alphabetic characters  

`[!characters]`	 &emsp;     Matches any character that is not a member of the set characters  

Using wildcards, it is possible to construct very sophisticated selection criteria for filenames.  
Here are some examples of patterns and what they match:  

Pattern	    &emsp;&emsp;&emsp;  Matches  
`*`	&emsp;&emsp;&emsp;      All filenames  
`g*` &emsp;&emsp;&emsp;     All filenames that begin with the character **"g"**  
`b*.txt` &emsp;&emsp;&emsp; All filenames that begin with the character **"b"** and end with the characters **".txt"**  
`Data???`&emsp;&emsp;&emsp; Any filename that begins with the characters "Data" followed by exactly 3 more characters  
`[abc]*` &emsp;&emsp;&emsp; Any filename that begins with "a" or "b" or "c" followed by any other characters  
`[[:upper:]]*` &emsp;&emsp;&emsp; Any filename that begins with an uppercase letter. This is an example of a character class.   
`BACKUP.[[:digit:]][[:digit:]]`	&emsp;&emsp;&emsp; Another example of character classes. This pattern matches any filename that begins with the characters "BACKUP." followed by exactly two numerals.  
`*[![:lower:]]`	 &emsp;&emsp;&emsp; Any filename that does not end with a lowercase letter.  

## cp
The cp program copies files and directories. **cp file1 file2**    
It can also be used to copy multiple files (and/or directories) to a different directory: **cp file... directory**    

A note on notation: `...` signifies that an item can be repeated one or more times. e.g **cp file1 file2 file3 directory**     
if u r copying a directory too, **cp -r [file1 dir1 file2 file3] directory**  

![l12](l12.png?raw=true "l12") 

Other useful examples of cp and its options include:  
Command	 &emsp;&emsp;&emsp;    Results  
`cp file1 file2`	&emsp;&emsp;&emsp;    Copies the contents of file1 into file2.  
**If file2 does not exist, it is created**; otherwise, file2 is silently overwritten with the contents of file1.  
`cp -i file1 file2`	 &emsp;&emsp;&emsp;   Like above however, since the "-i" (interactive) option is specified, if file2 exists, the user is prompted before it is overwritten with the contents of file1.  
`cp file1 dir1`	  &emsp;&emsp;&emsp;      Copy the contents of file1 **(into a file named file1) inside of directory dir1**.  
`cp -R dir1 dir2`	&emsp;&emsp;&emsp;    Copy the contents of the directory dir1 into dir1(newly created) inside dir2. If directory dir2 does not exist, it is created. Otherwise, it creates a directory named dir1 within directory dir2.  

## mv
The `mv` command **moves or renames** files and directories depending on how it is used. It will either move one or more files to a different directory, or it will rename a file or directory. To rename a file, it is used like this:  
`mv filename1 filename2`  
i.e filename2 doesn't exit initially.  
To move files (and/or directories) to a different directory:  
`mv file... directory`  
in this case, directory already exist.  

Command	    &emsp;&emsp;&emsp;     Results  
`mv file1 file2`	&emsp;&emsp;&emsp;      If file2 does not exist, then file1 is renamed file2. If file2 exists, its contents are silently replaced with the contents of file1.  
`mv -i file1 file2`	 &emsp;&emsp;&emsp;   Like above however, since the "-i" (interactive) option is specified, if file2 exists, the user is prompted before it is overwritten with the contents of file1.  
`mv file1 file2 dir1`	&emsp;&emsp;&emsp;   The files file1 and file2 are moved to directory dir1. **If dir1 does not exist, mv will exit with an error**. Since, the alternative is to rename, and u can't rename files into directory.    
`mv dir1 dir2`	&emsp;&emsp;&emsp;      If dir2 does not exist, then dir1 is renamed dir2. If dir2 exists, the directory dir1 is moved within directory dir2.  

## rm
The `rm` command removes (deletes) files and directories. `rm file...`  

Using the recursive option (**-r**), `rm` can also be used to delete directories(including those with contents): `rm -r directory...`  

Command	 &emsp;&emsp;&emsp;  Results   
`rm file1 file2` &emsp;&emsp;&emsp;	    Delete file1 and file2.  
`rm -i file1 file2` &emsp;&emsp;&emsp;	    Like above however, since the "-i" (interactive) option is specified, the user is prompted before each file is deleted.  
`rm -r dir1 dir2` &emsp;&emsp;&emsp;	    Directories dir1 and dir2 are deleted **along with all of their contents**.  

# Be careful with rm!
Linux does not have an undelete command. Once you delete something with `rm`, it's gone. You can inflict terrific damage on your system with `rm` if you are not careful, particularly with wildcards.  
Before you use `rm` with wildcards, try this helpful trick: construct your command using `ls` instead. By doing this, you can see the effect of your wildcards before you delete files.  

## mkdir
The `mkdir` command is used to create directories: `mkdir directory...`

Using Commands with Wildcards  
Since the commands we have covered here accept multiple file and directories names as arguments, you can use wildcards to specify them. Here are a few examples:  
Command	 &emsp;&emsp;&emsp; &emsp;&emsp;&emsp; Results  
`cp *.txt text_files` &emsp;&emsp;&emsp; Copy **all files** in the current working directory with names ending with the characters **".txt"** to an **existing directory** named text_files.  
`mv dir1 ../*.bak dir2`	&emsp;&emsp;&emsp;   Move **the subdirectory dir1** and all the files ending in ".bak" in the **current working directory's parent directory** to an existing directory named dir2.  
`rm *~`	 &emsp;&emsp;&emsp;    Delete all files in the current working directory that end with the character "~".  
Some applications create backup files using this naming scheme. Using this command will clean them out of a directory.  

http://linuxcommand.org/tlcl.php or Linux Command textbook in ds directory  

# Linux - /tmp
`/tmp`  
This directory contains mostly files that are required temporarily. Many programs use this to create **lock files and for temporary storage of data. Do not remove files from this directory unless you know exactly what you are doing!** Many of these files are important for currently running programs and deleting them may result in a system crash. Usually it won't contain more than a few KB anyway. On most systems, this directory is cleared out at boot or at shutdown by the local system.  


**Linux Filesystem Hierarchy**  
<a href="https://tldp.org/LDP/Linux-Filesystem-Hierarchy/html/tmp.html" target="_blank">Linux Filesystem Hierarchy</a>  

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
`rm dir or rmdir dir` if there is no content in d dir. `rm -r dir` if there is any content.    

Q: Then, remove the directory empty_directory 
`rmdir empty_directory`  

# Working with Commands
Here, we will introduce the following commands.  
`type` - Display information about command type  
`which` - Locate a command  
`help` - Display reference page for shell builtin  
`man` - Display an on-line command reference  

## What are "Commands?"
Commands can be one of 4 different kinds:  
**An executable program** like all those files we saw in `/usr/bin`. Within this category, programs can compiled binaries such as programs written in C and C++, or programs written in scripting languages such as the shell, Perl, Python, Ruby, etc.  
**A command built into the shell itself.** bash provides a number of commands internally called `shell builtins`. The `cd` command, for example, is a shell builtin.    
**A shell function.** These are miniature shell scripts incorporated into the environment.    
**An alias.** Commands that we can define ourselves, built from other commands.    


### Identifying Commands
It is often useful to know exactly which of the four kinds of commands is being used and Linux provides a couple of ways to find out.  

### type
The type command is a shell builtin that displays the kind of command the shell will execute, given a particular command name. It works like this:  
```
type command
```
where “command” is the name of the command we want to examine. Here are some examples: 

![l13](l13.png?raw=true "l13")  
Here we see the results for three different commands. Notice that the one for ls and how the ls command is actually an alias for the ls command with the “-- color=auto” option added. Now we know why the output from ls is displayed in color!  

### which
Sometimes there is more than one version of an executable program installed on a system. While this is not very common on desktop systems, it's not unusual on large servers. To determine the exact location of a given executable, the which command is used:
![l14](l14.png?raw=true "l14")  

`which` only works for executable programs, not builtins nor aliases that are substitutes for actual executable programs.

### Getting Command Documentation
With this knowledge of what a command is, we can now search for the documentation available for each kind of command.

### help
`bash` has a built-in help facility available for each of the shell builtins. To use it, type “help” followed by the name of the shell builtin. Optionally, we can add the -m option to change the format of the output. For example:
![l15](l15.png?raw=true "l15")  

**A note on notation:** When square brackets appear in the description of a command's syntax, they indicate optional items. A vertical bar character indicates mutually exclusive items. In the case of the cd command above: 
```
cd [-L|-P] [dir]
```
This notation says that the command cd may be followed optionally by either a “-L” or a “-P” and further, optionally followed by the argument “dir”.  

### --help
Many executable programs support a “--help” option that displays a description of the command's supported syntax and options. For example:
![l16](l16.png?raw=true "l16")  
Some programs don't support the “--help” option, but try it anyway. Often it results in an error message that will reveal similar usage information.  

### man
Most executable programs intended for command line use provide a formal piece of documentation called a manual or man page. A special paging program called man is used to view them. It is used like this:  
```
man program
```
where “program” is the name of the command to view. Man pages vary somewhat in format but generally contain a title, a synopsis of the command's syntax, a description of the command's purpose, and a listing and description of each of the command's options. Man pages, however, do not usually include examples, and are intended as a reference, not a tutorial. Let's try viewing the man page for the ls command:  
```
man ls
```
![l17](l17.png?raw=true "l17")  
On most Linux systems, man uses less to display the manual page, so all of the familiar less commands work while displaying the page.  

### README and Other Documentation Files
Many software packages installed on your system have documentation files residing in the `/usr/share/doc` directory. Most of these are stored in plain text format and can be viewed with less. Some of the files are in HTML format and can be viewed with a web browser. We may encounter some files ending with a **“.gz”** extension. This indicates that they have been compressed with the **gzip** compression program. The gzip package includes a special version of `less` called **zless** that will display the contents of gzip-compressed text files.  

<a href="http://linuxcommand.org/lc3_man_pages/man1.html" target="_blank">man command</a>  

## Creating Symlink To a File 
```
ln -s source_file symbolic_link
```
Replace source_file with the name of the existing file for which you want to create the symbolic link and symbolic_link with the name of the symbolic link.  

The symbolic_link parameter is optional. If you do not specify the symbolic link, the ln command will create a new link in your current directory.  

ln -s /bin/ls __ls__


19. File type: School
save this in school.mgc
0 string SCHOOL School data
!:mime School

Then run this in the terminal
file -C -m school.mgc
