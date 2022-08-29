# Shell
## Manpage
Most of Unix systems are managed by using Shell. Just as you need to know a minimum number of words to have a discussion in a language, you need to know a minimum number of commands to be able to easily interact with a system. Unix systems all have, sometimes with slight differences, the same set of commands. While it is not too hard to remember commands, it might be hard to remember all of their options and how exactly to use them. The solution to this is the man command. Let’s go through a part of the ssh one, as there are few elements to know to be able to read a man page:  
```
NAME
ssh — OpenSSH SSH client (remote login program)

SYNOPSIS
ssh [-1246AaCfgKkMNnqsTtVvXxYy] [-b bind_address] [-c cipher_spec] [-D [bind_address:]port] [-E log_file] [-e escape_char] [-F configfile] [-I pkcs11] [-i identity_file] [-L [bind_address:]port:host:hostport] [-l login_name] [-m mac_spec] [-O ctl_cmd] [-o option] [-p port]
[-Q cipher | cipher-auth | mac | kex | key] [-R [bind_address:]port:host:hostport] [-S ctl_path] [-W host:port] [-w local_tun[:remote_tun]] [user@]hostname [command]

DESCRIPTION
ssh (SSH client) is a program for logging into a remote machine and for executing commands on a remote machine. It is intended to replace rlogin and rsh, and provide secure encrypted communications between two untrusted hosts over an insecure network. X11 connections and arbitrary TCP ports can also be forwarded over the secure channel.
```
Some tips:  
The NAME will summarize what the command is doing. As it is usually super short, you might want to look at DESCRIPTION (below) if ever it does not gives clear enough information  
The SYNOPSIS will help you to understand the structure of the command:  
A shell command usually have this format: `command options parameters`  
Options inside `[]` are optional  
The `string without []` are mandatory  
`ssh [-1246AaCfgKkMNnqsTtVvXxYy] [-D [bind_address:]port]`  
`ssh `is mandatory  
-1246AaCfgKkMNnqsTtVvXxYy is optional  
`-D [bind_address:]port `is optional (with bind_address: being itself optional within -D [bind_address:]port  

<!-- Type nbsp to add a single space.
Type ensp to add 2 spaces.
Type emsp to add 4 spaces. -->

## Commands
Here is the (non-exhaustive) list of commands & concepts you should master to be verbose with Unix systems:  



awk # emsp pattern scanning and processing language
basename # emsp strip directory and suffix from filenames
bg # emsp resumes suspended jobs without bringing them to the foreground
cat # emsp print files
cd # emsp change the shell working directory.
chmod # emsp change file mode
chown # emsp change file owner and group
crontab # emsp maintain crontab files
curl # emsp transfer a URL
cut # emsp remove sections from each line of files
date # emsp display or set date and time
dig # emsp DNS lookup utility
df # emsp report file system disk space usage
diff # emsp compare files line by line
du # emsp estimate file space usage
echo # emsp display a line of text
find # emsp search for files in a directory hierarchy
fg # emsp resumes suspended jobs and bring them to the foreground
grep # emsp print lines matching a pattern
kill # emsp send a signal to a process
less # emsp read file with pagination
ln # emsp create links
ls # emsp list directory contents
lsb_release # emsp print distribution-specific information
lsof # emsp list open files
mkdir # emsp create
mv # emsp move files
nc # emsp arbitrary TCP and UDP connections and listens
netstat # emsp print network connections, routing tables, interface statistics...
nice # emsp execute a utility with an altered scheduling priority
nproc # emsp print the number of processing units available
passwd # emsp change user password
pgrep # emsp look up processes based on name and other attributes
pkill # emsp send signal to processes based on name and other attributes
printenv # emsp print all or part of environment
pwd # emsp print name of current/working directory
top # emsp display Linux processes
tr # emsp translate or delete characters
ps # emsp report a snapshot of the current processes
rm # emsp remove files or directories
rmdir # emsp remove directories
rsync # emsp remote file copy
scp # emsp secure copy (remote file copy program)
sed # emsp stream editor for filtering and transforming text
sleep # emsp suspend execution for an interval of time
sort # emsp sort lines of text file
ssh # emsp OpenSSH SSH client (remote login program)
ssh-keygen # emsp SSH key generation, management and conversion
su # emsp substitute user identity
sudo # emsp execute a command as another user
tail # emsp output the last part of files
tar # emsp manipulate archives files
tr # emsp translate or delete characters
uname # emsp Print operating system name
uniq # emsp report or omit repeated lines
uptime # emsp show how long system has been running
w # emsp Show who is logged on and what they are doing
whereis # emsp locate the binary, source, and manual page files for a command
which # emsp locate a command
wc # emsp print newline, word, and byte counts for each file
xargs # emsp build and execute command lines from standard input
| # emsp redirect standard output to another command
> # emsp redirect standard output
< # emsp redirect standard input
& # emsp send process to background


## emsp Shortcuts
Some handy shortcuts:
CTRL+A # emsp go to beginning of line
CTRL+B # emsp moves backward one character
CTRL+C # emsp stops the current command
CTRL+D # emsp deletes one character backward or logs out of current session
CTRL+E # emsp go to end of line
CTRL+F # emsp moves forward one character
CTRL+G # emsp aborts the current editing command and ring the terminal bell
CTRL+K # emsp deletes (kill) forward to end of line
CTRL+L # emsp clears screen and redisplay the line
CTRL+N # emsp next line in command history
CTRL+R # emsp searches in your command history
CTRL+T # emsp transposes two characters
CTRL+U # emsp kills backward to the beginning of line
CTRL+W # emsp kills the word behind the cursor
CTRL+Y # emsp retrieves last deleted string
CTRL+Z # emsp stops the current command, resume with fg in the foreground or bg in the background