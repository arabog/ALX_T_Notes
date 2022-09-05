## Input Output Redirection
<a href="http://linuxcommand.org/lc3_lts0070.php" target="_blank">Input Output Redirection</a>  
Here will explore a powerful feature used by command line programs called input/output redirection. As we have seen, many commands such as `ls` print their output on the display. This does not have to be the case, however. By using some special notations we can redirect the output of many commands to files, devices, and even to the input of other commands.  

`ls -l */`: displays only the directories and there sub-directories in a working directory  

### Standard Output
![l1](l1.png?raw=true "l1")  

Most command line programs that display their results do so by sending their results to a facility called standard output. By default, standard output directs its contents to the display. To redirect standard output to a file, the ">", redirection character is used like this:
```
[me@linuxbox me]$ ls > file_list.txt
```
In this example, the `ls` command is executed and the results are written in a file named file_list.txt. Since the output of `ls` was redirected to the file, no results appear on the display.  

Each time the command above is repeated, file_list.txt is overwritten from the beginning with the output of the command ls. To have the new results appended to the file instead, we use ">>" like this:  
```
[me@linuxbox me]$ls >> file_list.txt
```
When the results are appended, the new results are added to the end of the file, thus making the file longer each time the command is repeated. If the file does not exist when we attempt to append the redirected output, the file will be created.  

### Standard Input
![l2](l2.png?raw=true "l2")   
Many commands can accept input from a facility called standard input. By default, standard input gets its contents from the keyboard, but like standard output, it can be redirected. To redirect standard input from a file instead of the keyboard, the "<" character is used like this:
```
[me@linuxbox me]$ sort < file_list.txt
```
In the example above, we used the sort command to process the contents of file_list.txt. The results are output on the display since the standard output was not redirected. We could redirect standard output to another file like this:
```
[me@linuxbox me]$ sort < file_list.txt > sorted_file_list.txt
```
As we can see, a command can have both its input and output redirected. Be aware that the order of the redirection does not matter. The only requirement is that the redirection operators (the "<" and ">") must appear after the other options and arguments in the command.  

### Pipelines
The most useful and powerful thing we can do with I/O redirection is to connect multiple commands together to form what are called pipelines. With pipelines, the standard output of one command is fed into the standard input of another. Here is a very useful example:
```
[me@linuxbox me]$ ls -l | less
```
![l3](l3.png?raw=true "l3")  

In this example, the output of the ls command is fed into less. By using this "| less" trick, we can make any command have scrolling output.  

By connecting commands together, we can accomplish amazing feats. Here are some examples to try:  
```
Command	                        What it does
ls -lt | head	                Displays the 10 newest files in the current directory.
du | sort -nr	                Displays a list of directories and how much space they consume, sorted from the largest to the smallest.
find . -type f -print | wc -l	Displays the total number of files in the current working directory and all of its subdirectories.
```
### Filters
One kind of program frequently used in pipelines is called a filter. Filters take standard input and perform an operation upon it and send the results to standard output. In this way, they can be combined to process information in powerful ways. Here are some of the common programs that can act as filters:
```
Program	            What it does
sort	            Sorts standard input then outputs the sorted result on standard output.
uniq	            Given a sorted stream of data from standard input, it removes duplicate lines of data (i.e., it makes sure that every line is unique).
grep	            Examines each line of data it receives from standard input and outputs every line that contains a specified pattern of characters.
fmt	                Reads text from standard input, then outputs formatted text on standard output.
pr	                Takes text input from standard input and splits the data into pages with page breaks, headers and footers in preparation for printing.
head	            Outputs the first few lines of its input. Useful for getting the header of a file.
tail	            Outputs the last few lines of its input. Useful for things like getting the most recent entries from a log file.
tr	                Translates characters. Can be used to perform tasks such as upper/lowercase conversions or changing line termination characters from one type to another (for example, converting DOS text files into Unix style text files).
sed	                Stream editor. Can perform more sophisticated text translations than tr.
awk	                An entire programming language designed for constructing filters. Extremely powerful.
```
### Performing tasks with pipelines
1. **Printing from the command line.** Linux provides a program called lpr that accepts standard input and sends it to the printer. It is often used with pipes and filters. Here are a couple of examples:  
```
cat poorly_formatted_report.txt | fmt | pr | lpr

cat unsorted_list_with_dupes.txt | sort | uniq | pr | lpr
```
In the first example, we use cat to read the file and output it to standard output, which is piped into the standard input of fmt. fmt formats the text into neat paragraphs and outputs it to standard output, which is piped into the standard input of pr. pr splits the text neatly into pages and outputs it to standard output, which is piped into the standard input of lpr. lpr takes its standard input and sends it to the printer.  

The second example starts with an unsorted list of data with duplicate entries. First, cat sends the list into sort which sorts it and feeds it into uniq which removes any duplicates. Next pr and lpr are used to paginate and print the list.  

2. **Viewing the contents of tar files** Often you will see software distributed as a gzipped tar file. This is a traditional Unix style file (created with tar) that has been compressed with gzip. You can recognize these files by their traditional file extensions, ".tar.gz" or ".tgz". You can use the following command to view the directory of such a file on a Linux system:
```
tar tzvf name_of_file.tar.gz | less
```

# Redirection (Textbook)
The “I/O” stands for input/output and with this facility we
can redirect the input and output of commands to and from files, as well as connect multiple commands together into powerful command pipelines. To show off this facility, we will introduce the following commands:  
● cat – Concatenate files  
● sort – Sort lines of text  
● uniq – Report or omit repeated lines  
● grep – Print lines matching a pattern  
● wc – Print newline, word, and byte counts for each file  
● head – Output the first part of a file  
● tail – Output the last part of a file  
● tee – Read from standard input and write to standard output and files  

## Standard Input, Output, and Error
Many of the programs that we have used so far produce output of some kind. This output often consists of two types:  
• The program's results, that is, the data the program is designed to produce  
• Status and error messages that tell us how the program is getting along  
If we look at a command like ls, we can see that it displays its results and its error messages on the screen.  
Keeping with the Unix theme of “everything is a file,” programs such as ls actually send their results to a special file called standard output (often expressed as stdout) and their status messages to another file called standard error (stderr). By default, both standard output and standard error are linked to the screen and not saved into a disk file.  

In addition, many programs take input from a facility called standard input (stdin), which is, by default, attached to the keyboard.    
**I/O redirection allows us to change where output goes and where input comes from.** Normally, output goes to the screen and input comes from the keyboard, but with I/O redirection, we can change that.  

## Redirecting Standard Output
I/O redirection allows us to redefine where standard output goes. To redirect standard output to another file instead of the screen, we use the > redirection operator followed by the name of the file. Why would we want to do this? It's often useful to store the output of a command in a file. For example, we could tell the shell to send the output of the ls command to the file ls-output.txt instead of the screen:
```
[me@linuxbox ~]$ ls -l /usr/bin > ls-output.txt
```
Here, we created a long listing of the /usr/bin directory and sent the results to the file ls-output.txt. Let's examine the redirected output of the command, shown here:
```
[me@linuxbox ~]$ ls -l ls-output.txt
-rw-rw-r-- 1 me me 167878 2018-02-01 15:07 ls-output.txt
```
Good — a nice, large, text file. If we look at the file with less, we will see that the file ls-output.txt does indeed contain the results from our ls command.
```
[me@linuxbox ~]$ less ls-output.txt
```
Now, let's repeat our redirection test, but this time with a twist. We'll change the name of the directory to one that does not exist:
```
[me@linuxbox ~]$ ls -l /bin/usr > ls-output.txt
ls: cannot access /bin/usr: No such file or directory
```
We received an error message. This makes sense since we specified the nonexistent directory /bin/usr, but why was the error message displayed on the screen rather than being redirected to the file ls-output.txt? The answer is that the ls program does not send its error messages to standard output. Instead, like most well-written Unix programs, it sends its error messages to standard error. Since we only redirected standard output and not standard error, the error message was still sent to the screen. We'll see how to redirect standard error in just a minute, but first let's look at what happened to our output file:
```
[me@linuxbox ~]$ ls -l ls-output.txt
-rw-rw-r-- 1 me me 0 2018-02-01 15:08 ls-output.txt
```
The file now has zero length! This is because when we redirect output with the “>” redirection operator, the destination file is always rewritten from the beginning. Since our ls command generated no results and only an error message, the redirection operation started to rewrite the file and then stopped because of the error, resulting in its truncation.  
In fact, if we ever need to actually truncate a file (or create a new, empty file), we can use a trick like this:
```
[me@linuxbox ~]$ > ls-output.txt
```

Simply using the redirection operator with no command preceding it will truncate an existing file or create a new, empty file. So, how can we append redirected output to a file instead of overwriting the file from the beginning? For that, we use the >> redirection operator, like so:
```
[me@linuxbox ~]$ ls -l /usr/bin >> ls-output.txt
```
Using the >> operator will result in the output being appended to the file. If the file does not already exist, it is created just as though the > operator had been used. Let's put it to the test:
```
[me@linuxbox ~]$ ls -l /usr/bin >> ls-output.txt
[me@linuxbox ~]$ ls -l /usr/bin >> ls-output.txt
[me@linuxbox ~]$ ls -l /usr/bin >> ls-output.txt
[me@linuxbox ~]$ ls -l ls-output.txt
-rw-rw-r-- 1 me me 503634 2018-02-01 15:45 ls-output.txt
```
We repeated the command three times resulting in an output file three times as large.

## Redirecting Standard Error
Redirecting standard error lacks the ease of a dedicated redirection operator. To redirect standard error we must refer to its file descriptor. A program can produce output on any of several numbered file streams. **While we have referred to the first three of these file streams as standard input, output and error, the shell references them internally as file descriptors 0, 1, and 2, respectively.** The shell provides a notation for redirecting files using the file descriptor number. Since standard error is the same as file descriptor number 2, we can redirect standard error with this notation:
```
[me@linuxbox ~]$ ls -l /bin/usr 2> ls-error.txt
```
**The file descriptor “2” is placed immediately before the redirection operator** to perform the redirection of standard error to the file ls-error.txt.  
![l4](l4.png?raw=true "l4")  

## Redirecting Standard Output and Standard Error to One File
There are cases in which we may want to capture all of the output of a command to a single file. To do this, we must redirect both standard output and standard error at the same time. There are two ways to do this. Shown here is the traditional way, which works with old versions of the shell:
```
[me@linuxbox ~]$ ls -l /bin/usr > ls-output.txt 2>&1
that is:
[me@linuxbox ~]$ [ls -l /bin/usr > ls-output.txt]         [2>&1]
```
Using this method, we perform two redirections. First we redirect standard output to the file ls-output.txt and then we redirect file descriptor 2 (standard error) to file descriptor 1 (standard output) using the notation 2>&1  

**Notice that the order of the redirections is significant.** The redirection of standard error must always occur after redirecting standard output or it doesn't work. The following example redirects standard error to the file ls-output.txt:
```
>ls-output.txt 2>&1
```
However, if the order is changed to the following, standard error is directed to
the screen.
```
2>&1 >ls-output.txt
```
Recent versions of bash provide a second, more streamlined method for performing this combined redirection shown here:
```
[me@linuxbox ~]$ ls -l /bin/usr &> ls-output.txt
```
In this example, we use the single notation &> to redirect both standard output and standard error to the file ls-output.txt. We can also append the standard output and standard error streams to a single file like so:
```
[me@linuxbox ~]$ ls -l /bin/usr &>> ls-output.txt
```
![l5](l5.png?raw=true "l5")  

## Disposing of Unwanted Output: /dev/null
Sometimes “silence is golden,” and we don't want output from a command, we just want to throw it away. This applies particularly to error and status messages. The system provides a way to do this by redirecting output to a special file called “/dev/null”. This file is a system device often referred to as a bit bucket, which accepts input and does nothing with it. To suppress error messages from a command, we do this:
```
[me@linuxbox ~]$ ls -l /bin/usr 2> /dev/null
```
When someone says he/she is sending your comments to /dev/null, now you know what it means.

## Redirecting Standard Input
### cat – Concatenate Files
The cat command reads one or more files and copies them to standard output like so:
```
cat [file...]
```
In most cases, we can think of cat as being analogous to the TYPE command in DOS.
We can use it to display files without paging. For example, the following will display the contents of the file ls-output.txt:
```
[me@linuxbox ~]$ cat ls-output.txt
```
cat is often used to display short text files. Since cat can accept more than one file as an argument, it can also be used to join files together. Say we have downloaded a large file that has been split into multiple parts (multimedia files are often split this way on Usenet), and we want to join them back together. If the files were named: movie.mpeg.001 movie.mpeg.002 ... movie.mpeg.099
we could join them back together with this command as follows:
```
cat movie.mpeg.0* > movie.mpeg
```
Since wildcards always expand in sorted order, the arguments will be arranged in the correct order.
This is all well and good, but what does this have to do with standard input? Nothing yet, but let's try something else. What happens if we enter cat with no arguments?
```
[me@linuxbox ~]$ cat
```
Nothing happens, it just sits there like it's hung. It might seem that way, but it's really doing exactly what it's supposed to do.
If cat is not given any arguments, it reads from standard input and since standard input is, by default, attached to the keyboard, it's waiting for us to type something! Try adding the following text and pressing Enter:
```
[me@linuxbox ~]$ cat

The quick brown fox jumped over the lazy dog.
```
Next, type a Ctrl-d (i.e., hold down the Ctrl key and press “d”) to tell cat that it has reached end of file (EOF) on standard input:
```
[me@linuxbox ~]$ cat
The quick brown fox jumped over the lazy dog.
The quick brown fox jumped over the lazy dog.
```
In the absence of filename arguments, cat copies standard input to standard output, so we see our line of text repeated. We can use this behavior to create short text files. Let's say we wanted to create a file called lazy_dog.txt containing the text in our example. We would do this:
```
[me@linuxbox ~]$ cat > lazy_dog.txt
The quick brown fox jumped over the lazy dog.
```
![l6](l6.png?raw=true "l6")  

Type the command followed by the text we want to place in the file. Remember to type Ctrl-d at the end. Using the command line, we have implemented the world's dumbest word processor! To see our results, we can use cat to copy the file to stdout again.
```
[me@linuxbox ~]$ cat lazy_dog.txt
The quick brown fox jumped over the lazy dog.
```
Now that we know how cat accepts standard input, in addition to filename arguments, let's try **redirecting standard input**.
```
[me@linuxbox ~]$ cat < lazy_dog.txt
The quick brown fox jumped over the lazy dog.
```
Using the < redirection operator, we change the source of standard input from the keyboard to the file lazy_dog.txt. We see that the result is the same as passing a single filename argument. This is not particularly useful compared to passing a filename argument, but it serves to demonstrate using a file as a source of standard input. Other commands make better use of standard input, as we will soon see. Before we move on, check out the man page for cat, because it has several interesting options.  

## Pipelines
The capability of commands to read data from standard input and send to standard output is utilized by a shell feature called pipelines. **Using the pipe operator | (vertical bar), the standard output of one command can be piped into the standard input of another.**
```
command1 | command2
```
Remember how we said there was one we already knew that accepts standard input? It's **less**. We can use less to display, page by page, the output of any command that sends its results to standard output:
```
[me@linuxbox ~]$ ls -l /usr/bin | less
```
This is extremely handy! Using this technique, we can conveniently examine the output of any command that produces standard output.

## The Difference Between > and |
At first glance, it may be hard to understand the redirection performed by the
pipeline operator | versus the redirection operator >. Simply put, **the redirection operator connects a command with a file**, while **the pipeline operator connects the output of one command with the input of a second command**.
```
command1 > file1
command1 | command2
```
A lot of people will try the following when they are learning about pipelines, “just to see what happens”:
```
command1 > command2
Answer: sometimes something really bad.
```
Here is an actual example submitted by a reader who was administering a Linux-
based server appliance. As the superuser, he did this:
```
# cd /usr/bin
# ls > less
```
The first command put him in the directory where most programs are stored and
the second command told the shell to overwrite the file less with the output of
the ls command. Since the /usr/bin directory already contained a file named
less (the less program), the second command overwrote the less program
file with the text from ls, thus destroying the less program on his system.
The lesson here is that the redirection operator silently creates or overwrites files, so you need to treat it with a lot of respect.  

You can also create or copy/append into a new file using:
```
cat file1 > file2
cat file1 >> file2
```
file1 content will be copy/append into file2. If file2 doesn't exit it will be created.

## Filters
Pipelines are often used to perform complex operations on data. It is possible to put several commands together into a pipeline. Frequently, the commands used this way are referred to as filters. **Filters take input, change it somehow, and then output it.** The first one we will try is sort. Imagine we wanted to make a combined list of all the executable programs in /bin and /usr/bin, put them in sorted order and view the resulting list:
```
[me@linuxbox ~]$ ls /bin /usr/bin | sort | less
```
Since we specified two directories (/bin and /usr/bin), the output of ls would have consisted of two sorted lists, one for each directory. By including sort in our pipeline, we changed the data to produce a single, sorted list.  

## uniq - Report or Omit Repeated Lines
The uniq command is often used in conjunction with sort. uniq accepts a sorted list of data from either standard input or a single filename argument (see the uniq man page for details) and, by default, removes any duplicates from the list. So, to make sure our list has no duplicates (that is, any programs of the same name that appear in both the /bin and /usr/bin directories), we will add uniq to our pipeline.
```
[me@linuxbox ~]$ ls /bin /usr/bin | sort | uniq | less
```

In this example, we use uniq to remove any duplicates from the output of the sort
command. If we want to see the list of duplicates instead, we add the “-d” option to uniq like so:
```
[me@linuxbox ~]$ ls /bin /usr/bin | sort | uniq -d | less
```
## wc – Print Line, Word, and Byte Counts
The wc (word count) command is used to display the number of lines, words, and bytes contained in files. Here's an example:
```
[me@linuxbox ~]$ wc ls-output.txt
7902 64566 503634 ls-output.txt
```
In this case, it prints out three numbers: lines, words, and bytes contained in ls-output.txt. Like our previous commands, if executed without command line arguments, wc accepts standard input. The “-l” option limits its output to only report lines. Adding it to a pipeline is a handy way to count things. To see the number of items we have in our sorted list, we can do this:
```
[me@linuxbox ~]$ ls /bin /usr/bin | sort | uniq | wc -l
2728
```
![l7](l7.png?raw=true "l7")  

## grep – Print Lines Matching a Pattern
grep is a powerful program used to **find text patterns within files**. It's used like this:
```
grep pattern [file...]
```
When grep encounters a “pattern” in the file, it prints out the lines containing it. The patterns that grep can match can be very complex, but for now we will concentrate on simple text matches. We'll cover the advanced patterns, called regular expressions in Chapter 19.
Let's say we wanted to find all the files in our list of programs that had the word zip embedded in the name. Such a search might give us an idea of some of the programs on our system that had something to do with file compression. We would do this:
```
[me@linuxbox ~]$ ls /bin /usr/bin | sort | uniq | grep zip
bunzip2
bzip2
gunzip
gzip
unzip
zip
zipcloak
zipgrep
zipinfo
zipnote
zipsplit
```
![l8](l8.png?raw=true "l8")  

![l13](l13.png?raw=true "l13")  

There are a couple of handy options for grep:  
• -i, which causes grep to ignore case when performing the search (normally
searches are case sensitive)  
• -v, which tells grep to print only those lines that do not match the pattern.  

![l14](l14.png?raw=true "l14")   

## head / tail – Print First / Last Part of Files
Sometimes we don't want all the output from a command. We may only want the first few lines or the last few lines. The head command prints the first ten lines of a file, and the tail command prints the last ten lines. By default, both commands print ten lines of text, but this can be adjusted with the -n option.
```
[me@linuxbox ~]$ head -n 5 ls-output.txt
or
[me@linuxbox ~]$ tail -n5 ls-output.txt
[me@linuxbox ~]$ tail -n 5 ls-output.txt
```
![l9](l9.png?raw=true "l9")  

These can be used in pipelines as well:
```
[me@linuxbox ~]$ ls /usr/bin | tail -n 5
```
![l10](l10.png?raw=true "l10") 

tail has an option which allows us to view files in real time. This is useful for watching the progress of log files as they are being written. In the following example, we will look at the messages file in /var/log (or the /var/log/syslog file if messages is missing). Superuser privileges are required to do this on some Linux distributions, because the /var/log/messages file may contain security information:
```
[me@linuxbox ~]$ tail -f /var/log/messages
```
![l11](l11.png?raw=true "l11") 

![l15](l15.png?raw=true "l15") 

Using the “-f” option, tail continues to monitor the file, and when new lines are appended, they immediately appear on the display. This continues until we press Ctrl-c.  

## tee – Read from Stdin and Output to Stdout and Files
In keeping with our plumbing metaphor, Linux provides a command called tee which creates a “tee” fitting on our pipe. The tee program reads standard input and copies it to both standard output (allowing the data to continue down the pipeline) and to one or more files. This is useful for capturing a pipeline's contents at an intermediate stage of processing. Here we repeat one of our earlier examples, this time including tee to capture the entire directory listing to the file ls.txt before grep filters the pipeline's contents: 
```
[me@linuxbox ~]$ ls /usr/bin | tee ls.txt | grep zip
```
![l12](l12.png?raw=true "l12") 


## Summing Up
As always, check out the documentation of each of the commands we have covered in
this chapter. We have seen only their most basic usage. They all have a number of interesting options.  



