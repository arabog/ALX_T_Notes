# Permissions
The Unix-like operating systems, such as Linux differ from other computing systems in that they are not only multitasking but also multi-user.  

What exactly does this mean? It means that more than one user can be operating the computer at the same time. While a desktop or laptop computer only has one keyboard and monitor, it can still be used by more than one user. For example, if the computer is attached to a network, or the Internet, remote users can log in via ssh (secure shell) and operate the computer. In fact, remote users can execute graphical applications and have the output displayed on a remote computer.    

This lesson will cover the following commands:  
**id** – Display user identity  
**chmod** - modify file access rights  
**umask** – Set the default file permissions  
**su** - temporarily become the superuser  
**sudo** - temporarily become the superuser  
**chown** - change file ownership  
**chgrp** - change a file's group ownership  
**passwd** – Change a user's password  

## File Permissions
On a Linux system, each file and directory is assigned access rights for the owner of the file, the members of a group of related users, and everybody else. Rights can be assigned to read a file, to write a file, and to execute a file (i.e., run the file as a program).  

To see the permission settings for a file, we can use the ls command. As an example, we will look at the bash program which is located in the /bin directory:  
![p1](p1.png?raw=true "p1")  

Here we can see:  
The file "/bin/bash" is owned by user "root"  
The superuser has the right to read, write, and execute this file  
The file is owned by the group "root"  
Members of the group "root" can also read and execute this file  
Everybody else can read and execute this file?  

In the diagram below, we see how the first portion of the listing is interpreted. It consists of a character indicating the file type, followed by three sets of three characters that convey the reading, writing and execution permission for the owner, group, and everybody else.  

![p2](p2.png?raw=true "p2")  

## chmod
The chmod command is used to change the mode (permissions) of a file or directory. To use it, we specify the desired permission settings and the file or files that we wish to modify. There are two ways to specify the permissions. In this lesson we will focus on one of these, called the octal notation method.  

### What the Heck is Octal?
Octal (base 8), and its cousin, hexadecimal (base 16) are number systems often used to express numbers on computers. We humans, owing to the fact that we (or at least most of us) were born with 10 fingers, count using a base 10 number system. Computers, on the other hand, were born with only one finger and thus do all their counting in binary (base 2). Their number system has only two numerals, 0 and 1. So, in binary, counting looks like this:
```
0, 1, 10, 11, 100, 101, 110, 111, 1000, 1001, 1010, 1011...
```
In octal, counting is done with the numerals zero through seven, like so:
```
0, 1, 2, 3, 4, 5, 6, 7, 10, 11, 12, 13, 14, 15, 16, 17, 20, 21...
```
Hexadecimal counting uses the numerals zero through nine plus the letters “A” through “F”:
```
0, 1, 2, 3, 4, 5, 6, 7, 8, 9, A, B, C, D, E, F, 10, 11, 12, 13...
```
With octal notation, we use octal numbers to set the pattern of desired permissions. Since each digit in an octal number represents three binary digits, this maps nicely to the scheme used to store the file mode.  

File Modes in Binary and Octal
```
Octal       Binary          File Mode
0           000             ---
1           001             --x
2           010             -w-
3           011             -wx
4           100             r--
5           101             r-x
6           110             rw-
7           111             rwx
```
By using three octal digits, we can set the file mode for the owner, group owner, and world.  

It is easy to think of the permission settings as a series of bits (which is how the computer thinks about them). Here's how it works:  

![p3](p3.png?raw=true "p3")  

Now, if we represent each of the three sets of permissions (owner, group, and other) as a single digit, we have a pretty convenient way of expressing the possible permissions settings. For example, if we wanted to set some_file to have read and write permission for the owner, but wanted to keep the file private from others, we would:  
```
chmod 600 some_file
```
Here is a table of numbers that covers all the common settings. The ones beginning with "7" are used with programs (since they enable execution) and the rest are for other kinds of files.  

Example: Convert 4 in binary.  
Solution:   
4 in binary is (100)2.  
Here, 4 is represented in the decimal number system, where we can represent the number using the digits from 0-9. However, in a binary number system, we use only two digits, such as 0 and 1.  
Now, let’s discuss how to convert 4 in binary number system. The following steps help to convert 4 in binary.  
Step 1: First, divide the number 4 by 2. Use the integer quotient obtained in this step as the dividend for the next step. Continue this step, until the quotient becomes 0.  
```
Dividend                    Remainder
4/2 = 2                     0
2/2 = 1                     0
1/2 = 0                     1


Value	        Meaning
777	            (rwxrwxrwx) No restrictions on permissions. Anybody may do anything. Generally not a desirable setting.
755	            (rwxr-xr-x) The file's owner may read, write, and execute the file. All others may read and execute the file. This setting is common for programs that are used by all users.
700	            (rwx------) The file's owner may read, write, and execute the file. Nobody else has any rights. This setting is useful for programs that only the owner may use and must be kept private from others.
666	            (rw-rw-rw-) All users may read and write the file.
644	            (rw-r--r--) The owner may read and write a file, while all others may only read the file. A common setting for data files that everybody may read, but only the owner may change.
600	            (rw-------) The owner may read and write a file. All others have no rights. A common setting for data files that the owner wants to keep private.
```
**chmod u+x filename means change mode(chmod) for user(u) by adding execution(x) right** 

Though remembering the octal to binary mapping may seem inconvenient, we will usually have only to use a few common ones: 7 (rwx), 6 (rw-), 5 (r-x), 4 (r--), and 0 (---).   

chmod also supports a symbolic notation for specifying file modes. Symbolic notation is divided into three parts.  
• Who the change will affect  
• Which operation will be performed  
• What permission will be set.  
To specify who is affected, a combination of the characters “u”, “g”, “o”, and “a” is used.  
```
Symbol              Meaning
u                   Short for “user” but means the file or directory owner.
g                   Group owner.
o                   Short for “others” but means world.
a                   Short for “all.” This is the combination of “u”, “g”, and “o”.
```
If no character is specified, “all” will be assumed. The operation may be a “+” indicating that a permission is to be added, a “-” indicating that a permission is to be taken away, or a “=” indicating that only the specified permissions are to be applied and that all others
are to be removed.  
Permissions are specified with the “r”, “w”, and “x” characters.    
Examples of symbolic notation:  
```
Notation        Meaning
u+x             Add execute permission for the owner.
u-x             Remove execute permission from the owner.
+x              Add execute permission for the owner, group, and world. This is equivalent to a+x.
o-rw            Remove the read and write permissions from anyone besides the owner and group owner.
go=rw           Set the group owner and anyone besides the owner to have read and write permission. If either the group owner or the world previously had execute permission, it is removed.
u+x,go=rx       Add execute permission for the owner and set the permissions for the group and others to read and execute. Multiple specifications may be separated by commas.
```
Some people prefer to use octal notation, and some folks really like the symbolic. Symbolic notation does offer the advantage of allowing us to set a single attribute without disturbing any of the others.  
Take a look at the chmod man page for more details and a list of options. A word of caution regarding the “--recursive” option: it acts on both files and directories, so it's not as useful as we would hope since we rarely want files and directories to have the same permissions.  

## Setting File Mode with the GUI
Now that we have seen how the permissions on files and directories are set, we can better understand the permission dialogs in the GUI. In both Files (GNOME) and Dolphin (KDE), right-clicking a file or directory icon will expose a properties dialog. Here is an example from GNOME:  

![p9](p9.png?raw=true "p9")  

## umask – Set Default Permissions
The umask command controls the default permissions given to a file when it is created.  
It uses octal notation to express a mask of bits to be removed from a file's mode attributes.  

![p10](p10.png?raw=true "p10")  

We can see that both the owner and group get read and write permission, while everyone else only gets read permission. The reason that world does not have write permission is because of the value of the mask. Let's repeat our example, this time setting the mask ourselves.  

![p11](p11.png?raw=true "p11")  

When we set the mask to 0000 (effectively turning it off), we see that the file is now world writable. To understand how this works, we have to look at octal numbers again. If we take the mask, expand it into binary, and then compare it to the attributes we can see what happens.  
```
Original file mode      ---   rw-   rw-   rw-
Mask                    000   000   000   010
Result                  ---   rw-   rw-   r--
```
Ignore for the moment the leading zeros and observe that where the 1 appears in our mask, an attribute was removed — in this case, the world write permission. That's what the mask does. Everywhere a 1 appears in the binary value of the mask, an attribute is unset. If we look at a mask value of 0022, we can see what it does.  

Most of the time we won't have to change the mask; the default provided by the distribution will be fine. In some high-security situations, however, we will want to control it.  

## Some Special Permissions
Though we usually see an octal permission mask expressed as a three-digit number, it is more technically correct to express it in four digits. Why? Because, in addition to read, write, and execute permission, there are some other, less used, permission settings.  

The first of these is the setuid bit (octal 4000). When applied to an executable file, it sets the effective user ID from that of the real user (the user actually running the program) to that of the program's owner. Most often this is given to a few programs owned by the superuser. When an ordinary user runs a program that is “setuid root” , the program runs with the effective privileges of the superuser. This allows the program to access files and directories that an ordinary user would normally be prohibited from accessing. Clearly, because this raises security concerns, the number of setuid programs must be held to an absolute minimum.  

The second less-used setting is the setgid bit (octal 2000), which, like the setuid bit, changes the effective group ID from the real group ID of the real user to that of the file owner. If the setgid bit is set on a directory, newly created files in the directory will be given the group ownership of the directory rather the group ownership of the file's creator. This is useful in a shared directory when members of a common group need access to all the files in the directory, regardless of the file owner's primary group.  

The third is called the sticky bit (octal 1000). This is a holdover from ancient Unix, where it was possible to mark an executable file as “not swappable.” On 

files, Linux ignores the sticky bit, but if applied to a directory, it prevents users from deleting or renaming files unless the user is either the owner of the directory, the owner of the file, or the superuser. This is often used to control access to a shared directory, such as /tmp.  

Here are some examples of using chmod with symbolic notation to set these special permissions. Here’s an example of assigning setuid to a program:
```
chmod u+s program
```
Next, here’s and example of assigning setgid to a directory:
```
chmod g+s dir
```

Finally, here’s an example of assigning the sticky bit to a directory:
```
chmod +t dir
```
When viewing the output from ls, you can determine the special permissions. Here are some examples. First, an example of a program that is setuid: 
```
-rwsr-xr-x
```
Here’s an example of a directory that has the setgid attribute:
```
drwxrwsr-x
```
Here’s an example of a directory with the sticky bit set:
```
drwxrwxrwt
```

## Changing Identities
At various times, we may find it necessary to take on the identity of another user. Often we want to gain superuser privileges to carry out some administrative task, but it is also possible to “become” another regular user for such things as testing an account. There are three ways to take on an alternate identity.  
1. Log out and log back in as the alternate user.  
2. Use the su command.  
3. Use the sudo command.  

We will skip the first technique. From within our own shell session, the **su** command allows us to assume the identity of another user and either start a new shell session with that user's ID, or to issue a single command as that user. The **sudo** command allows an administrator to set up a configuration file called **/etc/sudoers** and define specific commands that particular users are permitted to execute under an assumed identity. The choice of which command to use is largely determined by which Linux distribution you use. Your distribution probably includes both commands, but its configuration will favor either one or the other. We'll start with su.  

su – Run a Shell with Substitute User and Group IDs
The su command is used to start a shell as another user. The command syntax looks like this:
```
su [-[l]] [user]
```
If the “-l” option is included, the resulting shell session is a login shell for the specified user. This means the user's environment is loaded and the working directory is changed to the user's home directory. This is usually what we want. If the user is not specified, the superuser is assumed. Notice that (strangely) the -l may be abbreviated as -, which is how it is most often used. To start a shell for the superuser, we would do this:

![p12](p12.png?raw=true "p12")  

After entering the command, we are prompted for the superuser's password. If it is successfully entered, a new shell prompt appears indicating that this shell has superuser privileges (the trailing # rather than a $), and the current working directory is now the home
directory for the superuser (normally /root). Once in the new shell, we can carry out commands as the superuser. When finished, enter exit to return to the previous shell.  

It is also possible to execute a single command rather than starting a new interactive command by using su this way.
```
su -c 'command'
```
Using this form, a single command line is passed to the new shell for execution. It is important to enclose the command in quotes, as we do not want expansion to occur in our shell, but rather in the new shell.
```
[me@linuxbox ~]$ su -c 'ls -l /root/*'
Password:
-rw------- 1 root root
754 2007-08-11 03:19 /root/anaconda-ks.cfg
/root/Mail:
total 0
[me@linuxbox ~]$
```
## sudo – Execute a Command as Another User
The sudo command is like su in many ways but has some important additional capabilities. The administrator can configure sudo to allow an ordinary user to execute commands as a different user (usually the superuser) in a controlled way. In particular, a user may be restricted to one or more specific commands and no others. Another important difference is that the use of sudo does not require access to the superuser's password. To authenticating using sudo, requires the user’s own password. Let's say, for example, that sudo has been configured to allow us to run a fictitious backup program called
“backup_script”, which requires superuser privileges. With sudo it would be done like this:
```
[me@linuxbox ~]$ sudo backup_script
Password:
System Backup Starting...
```
After entering the command, we are prompted for our password (not the superuser's) and once the authentication is complete, the specified command is carried out. One important difference between su and sudo is that sudo does not start a new shell, nor does it load another user's environment. This means that commands do not need to be quoted any differently than they would be without using sudo. Note that this behavior can be overridden by specifying various options. Note, too, that sudo can be used to start an interactive superuser session (much like su -) by using the -i option. See the sudo man page for
details.

To see what privileges are granted by sudo, use the -l option to list them:
```
[me@linuxbox ~]$ sudo -l
```
![p13](p13.png?raw=true "p13")  

## Ubuntu and sudo
One of the recurrent problems for regular users is how to perform certain tasks that require superuser privileges. These tasks include installing and updating software, editing system configuration files, and accessing devices. In the Windows world, this is often done by giving users administrative privileges. This allows users to perform these tasks. However, it also enables programs executed by the
user to have the same abilities. This is desirable in most cases, but it also permits malware (malicious software) such as viruses to have free rein of the computer.  
In the Unix world, there has always been a larger division between regular users and administrators, owing to the multiuser heritage of Unix. The approach taken in Unix is to grant superuser privileges only when needed. To do this, the su and sudo commands are commonly used.  

Up until a few of years ago, most Linux distributions relied on su for this purpose. su didn't require the configuration that sudo required, and having a root account is traditional in Unix. This introduced a problem. Users were tempted to operate as root unnecessarily. In fact, some users operated their systems as the root user exclusively, since it does away with all those annoying “permission denied” messages. This is how you reduce the security of a Linux system to that of a
Windows system. Not a good idea.    
When Ubuntu was introduced, its creators took a different tack. By default, Ubuntu disables logins to the root account (by failing to set a password for the account) and instead uses sudo to grant superuser privileges. The initial user account is granted full access to superuser privileges via sudo and may grant similar powers to subsequent user accounts.  

## Directory Permissions
The chmod command can also be used to control the access permissions for directories. Again, we can use the octal notation to set permissions, but the meaning of the r, w, and x attributes is different:  
**r** - Allows the contents of the directory to be listed **if the x attribute** is also set.  
**w** - Allows files within the directory to be created, deleted, or renamed **if the x attribute** is also set.  
**x** - Allows a directory to be entered (i.e. cd dir).  

Here are some useful settings for directories:
```
Value	        Meaning
777	            (rwxrwxrwx) No restrictions on permissions. Anybody may list files, create new files in the directory and delete files in the directory. Generally not a good setting.  
755	            (rwxr-xr-x) The directory owner has full access. All others may list the directory, but cannot create files nor delete them. This setting is common for directories that you wish to share with other users.  
700	            (rwx------) The directory owner has full access. Nobody else has any rights. This setting is useful for directories that only the owner may use and must be kept private from others.  
```
## Becoming the Superuser for a Short While
It is often necessary to become the superuser to perform important system administration tasks, but as we know, we should not stay logged in as the superuser. In most distributions, there is a program that can give you temporary access to the superuser's privileges. This program is called su (short for substitute user) and can be used in those cases when you need to be the superuser for a small number of tasks. To become the superuser, simply type the su command. You will be prompted for the superuser's password:  

![p4](p4.png?raw=true "p4")  

After executing the su command, we have a new shell session as the superuser. To exit the superuser session, type exit and we will return to your previous session.  

In most modern distributions, an alternate method is used. Rather than using su, these systems employ the sudo command instead. With sudo, one or more users are granted superuser privileges on an as needed basis. To execute a command as the superuser, the desired command is simply preceded with the sudo command. After the command is entered, the user is prompted for the their own password rather than the superuser's:  

![p5](p5.png?raw=true "p5")  

In fact, modern distributions don't even set the root account password thus making it impossible to log in as the root user. A root shell is still possible with sudo by using the "-i" option:  

![p6](p6.png?raw=true "p6")  

## chown – Change File Owner and Group
The chown command is used to change the owner and group owner of a file or directory. The syntax of chown looks like this:   
**chown [owner][:[group]] file...**  
Here's an example: Suppose we wanted to change the owner of some_file from "me" to "you". We could:
```
[me@linuxbox me]$ sudo chown you some_file
```
Notice that in order to change the owner of a file, we must have superuser privileges. To do this, our example employed the sudo command to execute chown. chown works the same way on directories as it does on files.  

chown can change the file owner and/or the file group owner depending on the first argument of the command.  

Some examples:
```
Argument                Results
bob                     Changes the ownership of the file from its current owner to user bob.  
bob:users               Changes the ownership of the file from its current owner to user bob and changes the file group owner to group users.  
:admins                 Changes the group owner to the group admins. The file owner is unchanged.  
bob:                    Changes the file owner from the current owner to user bob and changes the group owner to the login group of user bob.
```
Let's say we have two users; janet, who has access to superuser privileges and tony, who does not. User janet wants to copy a file from her home directory to the home directory of user tony. Since user janet wants tony to be able to edit the file, janet changes the ownership of the copied file from janet to tony.  
```
[janet@linuxbox ~]$ sudo cp myfile.txt ~tony
Password:
[janet@linuxbox ~]$ sudo ls -l ~tony/myfile.txt
-rw-r--r-- 1 root root root 2018-03-20 14:30 /home/tony/myfile.txt
[janet@linuxbox ~]$ sudo chown tony: ~tony/myfile.txt
[janet@linuxbox ~]$ sudo ls -l ~tony/myfile.txt
-rw-r--r-- 1 tony tony tony 2018-03-20 14:30 /home/tony/myfile.txt
```
Here we see user janet copy the file from her directory to the home directory of user tony. Next, janet changes the ownership of the file from root (a result of using sudo) to tony. Using the trailing colon in the first argument, janet also changed the group ownership of the file to the login group of tony, which happens to be group
tony.  
Notice that after the first use of sudo, janet was not prompted for her password. This is because sudo, in most configurations, “trusts” us for several minutes until its timer runs out.

## Changing Group Ownership
In older versions of Unix, the chown command only changed file ownership, not group ownership. For that purpose, a separate command, chgrp was used. It works much the same way as chown, except for being more limited. The group ownership of a file or directory may be changed with chgrp. This command is used like this:
```
[me@linuxbox me]$ chgrp new_group some_file
```
In the example above, we changed the group ownership of some_file from its previous group to "new_group". We must be the owner of the file or directory to perform a chgrp.  

r = 4. w = 2. x = 1. - = 0. 

<!-- ====================================== -->

## Owners, Group Members, and Everybody Else
We may have encountered a problem when trying to examine a file such as /etc/shadow:  

![p7](p7.png?raw=true "p7")  
The reason for this error message is that, as regular users, we do not have permission to read this file.  
In the Unix security model, a user may own files and directories. When a user owns a file or directory, the user has control over its access. Users can, in turn, belong to a group
consisting of one or more users who are given access to files and directories by their owners. In addition to granting access to a group, an owner may also grant some set of access rights to everybody. To find out information about your identity, use the id command.  

![p8](p8.png?raw=true "p8")  

Let's look at the output. When user accounts are created, users are assigned a number called a user ID (uid) which is then, for the sake of the humans, mapped to a username.  
The user is assigned a primary group ID (gid) and may belong to additional groups.  

So where does this information come from? Like so many things in Linux, it comes from a couple of text files. User accounts are defined in the /etc/passwd file and groups are defined in the /etc/group file. When user accounts and groups are created, these files are modified along with /etc/shadow which holds information about the user's password. For each user account, the /etc/passwd file defines the user (login) name, uid, gid, account's real name, home directory, and login shell. If we examine the contents of /etc/passwd and /etc/group, we notice that besides the regular user accounts, there are accounts for the superuser (uid 0) and various other system users.  

The first 10 characters of the listing are the file attributes. The first of these characters is the file type. Table 9-1 describes the file types we are most likely to see:
```
Attribute                   File Type
-                           A regular file
d                           A directory.
l                           A symbolic link. Notice that with   symbolic links, the remaining file attributes are always “rwxrwxrwx” and are dummy values. The real file attributes are those of the file the symbolic link points to.  
c                           A character special file. This file type refers to a device that handles data as a stream of bytes, such as a terminal or /dev/null.
b                           A block special file. This file type refers to a device that handles data in blocks, such as a hard drive or DVD drive.
```
The remaining nine characters of the file attributes, called the file mode, represent the read, write, and execute permissions for the file's owner, the file's group owner, and
everybody else.  
```
        Owner           Group               World
        rwx             rwx                 rwx
```
the effect the r, w, and x mode attributes have on files and directories:

**Attribute:** r        
**Files:** Allows a file to be opened and read.      
**Directories:** Allows a directory's contents to be listed if the execute attribute is also set.  

**Attribute:** w                
**Files:** Allows a file to be written to or truncated, however this attribute does not allow files to be renamed or deleted. The ability to delete or rename files is determined by directory attributes.
**Directories:** Allows files within a directory to be created, deleted, and renamed if the execute attribute is also set.  

**Attribute:** x                    
**Files:** Allows a file to be treated as a program and executed. Program files written in scripting languages must also be set as
readable to be executed.                     
**Directories:** Allows a directory to be entered, e.g., cd directory.  

Some examples of file attribute settings:  

File Attributes                 Meaning
-rwx------                      A regular file that is readable, writable, and executable by the file's owner. No one else has any access.  

-rwxr-xr-x                      A regular file that is readable, writable, and executable by the file's owner. The file may be read and executed by everybody else.  

lrwxrwxrwx                      A symbolic link. All symbolic links have “dummy” permissions. The real permissions are kept with the actual file pointed to by the symbolic link  

drwxrwx---                      A directory. The owner and the members of the owner group may enter the directory and create, rename and remove files within the directory  

drwxr-x---                      A directory. The owner may enter the directory and create, rename, and delete files within the directory. Members of the owner group may enter the directory but cannot create, delete, or rename files.  

## Changing Your Password
Setting passwords for yourself (and for other users if you have access to superuser privileges). To set or change a password, the passwd command is used. The command syntax looks like this:  
`passwd [user]`  
To change your password, just enter the passwd command. You will be prompted for your old password and your new password.
```
[me@linuxbox ~]$ passwd
(current) UNIX password:
New UNIX password:
```
The passwd command will try to enforce use of “strong” passwords. This means it will refuse to accept passwords that are too short, are too similar to previous passwords, are dictionary words, or are too easily guessed.
```
[me@linuxbox ~]$ passwd
(current) UNIX password:
New UNIX password:
BAD PASSWORD: is too similar to the old one
New UNIX password:
BAD PASSWORD: it is WAY too short
New UNIX password:
BAD PASSWORD: it is based on a dictionary word
```
If you have superuser privileges, you can specify a username as an argument to the passwd command to set the password for another user. Other options are available to the superuser to allow account locking, password expiration, and so on. See the passwd man page for details.  

## adduser
**NAME:** 
adduser, addgroup - add a user or group to the system  

DESCRIPTION
adduser and addgroup add users and groups to the system according
to command line options and configuration information in /etc/ad‐
duser.conf.   They  are  friendlier  front  ends to the low level
tools like useradd, groupadd and  usermod  programs,  by  default
choosing  Debian policy conformant UID and GID values, creating a
home directory with  skeletal  configuration,  running  a  custom
script,  and  other features.  adduser and addgroup can be run in
one of five modes:



## useradd


## groupadd




<!-- id
groups
whoami
adduser
useradd
addgroup -->

<!-- What do the commands chmod, sudo, su, chown, chgrp do
Linux file permissions
How to represent each of the three sets of permissions (owner, group, and other) as a single digit
How to change permissions, owner and group of a file
Why can’t a normal user chown a file
How to run a command with root privileges
How to change user ID or become superuser
=======
How to create a user
How to create a group
How to print real and effective user and group IDs
How to print the groups a user is in
How to print the effective userid -->