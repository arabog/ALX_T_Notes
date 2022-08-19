# Emacs
<a href="https://www.gnu.org/software/emacs/tour/" target="_blank">GNU Emacs</a>  

Beyond just being able to edit plain text files, Emacs includes special features to help you write in many different human languages and programming/markup languages as well as tools for compiling, running, and testing programs. Emacs integrates with GDB to provide an IDE (M-x gdb)   
Emacs can compare two files and highlight their differences. (M-x ediff)  
Emacs is a file manager (M-x dired)  
Emacs can read news, mail, and RSS feeds (M-x gnus)  
You can even play tetris in Emacs (M-x tetris)  
You might see now why some people consider Emacs to be not merely a text editor but almost a complete operating system. Some users find that they can do almost all of their work from within Emacs.  

## Why Emacs?
Emacs helps you be productive by providing an integrated environment for many different kinds of tasks:  
All of the basic editing commands (and there are lots of them) are available no matter what you're trying to do: write code, read a manual, use a shell, or compose an email.  
All the tools Emacs provides for opening, saving, searching, and processing text (and more) are available to you no matter what you're doing.  

If Emacs doesn't work the way you'd like, you can use the Emacs Lisp (Elisp) language to customize Emacs, automate common tasks, or add new features. Elisp is very easy to get started with and yet remarkably powerful: you can use it to alter and extend almost any feature of Emacs. You can make Emacs whatever you want it to be by writing Elisp code.  

Emacs is also portable. You can use the same editor (with the same configuration) on many platforms, including GNU/Linux, BSD and other Unix derivatives, and some proprietary operating systems such as Microsoft Windows.  

## Before we get started…
Ths to know:  
Starting and exiting Emacs  
Basic text movement and editing commands  
Opening and saving files  
Emacs concepts: windows, frames, files, and buffers  
Invoking commands with keybindings and with M-x  
To run the tutorial, start Emacs and type `C-h t`, that is, Ctrl-h followed by t.  

## Get started
Type `emacs` into the sandbox.  
To install locally, `sudo apt-get install emacs`  
`emacs --version`  
Welcome to GNU Emacs, one component of the GNU/Linux operating system.     
Get help           C-h  (Hold down CTRL and press h)                                           
Emacs manual       C-h r          
Browse manuals     C-h i                                       
Emacs tutorial     C-h t          
Undo changes       C-x u                                       
Buy manuals        C-h RET        
Exit Emacs         C-x C-c                                     
Activate menubar   M-`     
For information about GNU Emacs and the GNU system, type C-h C-a.                                                                      
(‘C-’ means use the CTRL key.  ‘M-’ means use the Meta (or Alt) key.                      
If you have no Meta key, you may instead type ESC followed by the character.)      
<a href="https://www.gnu.org/software/emacs/manual/html_node/emacs/Using-Region.html" target="_blank">Region</a>    
The Emacs manual is an excellent resource for learning about Emacs; you can read it from within Emacs by typing C-h r.  
<a href="https://www.gnu.org/software/emacs/manual/html_node/emacs/Using-Region.html" target="_blank">Manual</a>  Or See emacs pdf  

Emacs has numerous other help features, some of which will be described later. You can view a list of all help features by typing C-h C-h.  

## The power of text manipulation
Emacs gives you a large collection of tools for manipulating text, which turns out to be a Swiss army knife of sorts because Emacs also has ways to present all kinds of information in text. Here's one example:

`M-x dired` invokes Dired, the file manager mode, on a directory of your choice. Then `C-x C-q` (or `M-x wdired-change-to-wdired-mode`) switches to Editable Dired mode. In this mode, changing the filenames in the right-hand job and then typing C-x C-s ("save") renames the indicated files.  

## Basic editing commands
One way that Emacs lets users work quickly and efficiently is by providing high-level commands for moving around in, and manipulating, text.  

### Moving around in buffers
The most basic buffer movement commands move: point (the cursor) by rows (lines) or columns (characters):  
`C-f`	Forward one character  
`C-n`	Next line  
`C-b`	Back one character  
`C-p`	Previous line  

Here are some ways to move around in larger increments:  
`C-a`	Beginning of line  
`M-f`	Forward one word  
`M-a`	Previous sentence  
`M-v`	Previous screen  
`M-<`	Beginning of buffer   
`C-e`	End of line    
`M-b`	Back one word   
`M-e`	Next sentence   
`C-v`	Next screen    
`M->`	End of buffer  

Many of the above commands move to a location relative to your current position in the buffer, so you can use them repeatedly (e.g. `C-p C-p C-p` to move back three lines). You can use the prefix argument to save time: *C-u* followed by a number and a movement command repeats that command the specified number of times. You can also use `M-[digit]` instead of `C-u [digit]`. If you use `C-u` without specifying a digit, the default is *4*. Omitting the digit can save time when you don't know precisely how many units you want to jump anyway.  

`C-u 3 C-p`	Back 3 lines  
`C-u 10 C-f`	Forward 10 characters  
`M-1 M-0 C-f`	Forward 10 characters  
`C-u C-n`	Forward 4 lines  
`C-u C-u C-n`	Forward 16 lines  
`C-u C-u C-u C-n`	Forward 64 lines  

You can jump directly to a particular line number in a buffer:  
`M-g g`	Jump to specified line  

Searching for text is a handy way to move around in a buffer. Think of search as just another facility for movement. When you're looking for something specific, you can use incremental search to take you right there instead of scanning by lines or pages.  
`C-s`	Incremental search forward  
`C-r`	Incremental search backward  


### Mark
One other way of moving around in buffers is by using the mark:
Emacs remembers something called the mark, which is a previous cursor position. You can set mark to indicate a particular place in your buffer so you can return to it easily. C-x C-x at a later time will return point to mark. Actually, that command also moves mark to where point formerly was; therefore, a second C-x C-x returns point to its original position.  
`C-SPC`	Set mark to the current location  
`C-x C-x`	Swap point and mark  

Emacs saves many previous values of the mark for you. You can cycle through the mark ring, which contains the last 16 marks you've set in the current buffer:  
`C-u C-SPC`	Cycle through mark ring  

### Region
Mark serves another purpose: mark and point together delineate the region. Many commands operate only on the text in the region (i.e. between mark and point). You can set the region explicitly by setting mark (C-SPC) and then moving point elsewhere, or by clicking and dragging with the mouse.   
for example:  
`C-x h`	Make region contain the entire buffer ("Select all")  
`M-h`	Make region contain the current paragraph  

Other commands helpfully set the region as part of what they do. `C-y` (yank), inserting a file, and inserting a buffer all set the region to surround the inserted text.  

Narrowing restricts the view (and editing) of a buffer to a certain region. This is handy when you're only working with a small part of a buffer (e.g. a chapter in a book). Then commands like incremental search, or beginning-of-buffer or end-of-buffer don't lead you out of the region of interest, and commands like search and replacement don't affect the entire file.  

`C-x n n`	Narrow buffer to the current region  
`C-x n w`	Restore ("widen") buffer  

### Killing ("cutting") text
As with text movement, Emacs provides commands for deleting text in various amounts.  
`C-k` kills the portion of the current line after point (or deletes the newline following point if point is at the end of line). The prefix argument for `C-k` can be used to kill multiple lines:  
`C-k`	Kill line  
`C-u 10 C-k`	Kill 10 lines  
The following commands operate on the region, and are the closest analogs to "cut" and "copy" in Emacs:
`C-w`	Kill region ("cut")  
`M-w`	Save region to kill ring without deleting ("copy")  

These commands are also handy:  
`M-d`	Kill next word  
`M-k`	Kill to end of sentence  

All of the above commands kill the text being deleted, which means that Emacs removes the text and squirrels it away for later retrieval ("yanking"). Most commands which delete significant amounts of text kill it rather than simply removing it, so that you can use those commands either to "delete" text or to "cut" it for later use.  

### Yanking ("pasting") text
After a piece of text has been killed, it goes to a place called the kill ring which is analagous to the "clipboard": you can yank an item to restore it from the kill ring with `C-y`. Unlike the clipboard, however, the kill ring is capable of holding many different items. If the item you want to yank is not placed when you type `C-y`, type `M-y` (repeatedly, if necessary) to cycle through previously killed items.  
`C-y`	Yanks last killed text  
`M-y`	Replace yanked text with previously killed text  

Recall that most commands which delete a large amount of text in fact kill it (i.e. place it in the kill ring) so you can restore it later. Emacs makes it very difficult to lose a lot of text permanently: in editors with only a single clipboard, one can easily accidentally delete a large chunk of text or clobber the contents of the clipboard (by cutting two items in succession). But in Emacs, in either of those cases, the lost text can easily be retrieved from the kill ring.  

### Undo
After any consecutive sequence of undos, Emacs makes all your previous actions undoable, including the undos. (This will happen whenever a sequence of undos is broken by any other command.)  

If this sounds complicated, just remember that "undo" is always capable of getting you back to any previous state your buffer was in (unless Emacs has run out of memory to store the undo history). The principle here is that Emacs makes it very difficult to accidentally lose your work. 

Undo is available via three different keys:  
`C-/`	Undo  
`C-_`	Undo  
`C-x u`	Undo  

So if you need to get back to a previous buffer state, simply move the cursor (so as to break any existing sequence of undos), and press `C-/` until you find what you want.  

### Incremental search
`C-s`	Incremental search  
Typing C-s followed by some text starts incremental search. Emacs jumps to the next occurrence of whatever you have typed, as you are typing it, and all matches visible on your screen are highlighted.  

Within incremental search, you can type `C-s` again at any time to jump to the next occurrence.
When you've found what you're looking for, you can either type RET (or use almost any movement command) to exit search at the occurrence you've found, or `C-g` ("cancel") to return to where your search started. If you exit search at the found occurrence, you can easily jump back to where you started with `C-x C-x` since incremental search sets mark appropriately.

These commands help you to issue previously issued queries:  
`C-s C-s`	Search for most recently searched item
`C-s M-p`	Previous item in search history
`C-s M-n`	Next item in search history
`C-h k C-s`	Guide to more commands available in incremental search

You can perform a backward incremental search with `C-r`. (All the above commands can be activated similarly from within backward search.) At any time during a forward (or backward) search, you can type `C-r` `(C-s)` to switch to a backward (forward) search.  

`C-r`	Backward incremental search  


### Search and replacement
`M-%`	Query replace  
The query replace command, prompts you for a search string and a replacement. Then, for each match in the buffer, you can choose whether or not to replace the search string. Here are some of the options available at each prompt:  
Type `y` to replace the current match.
Type `n` to skip to the next match without replacing.
Type `q` to exit without doing any more replacements.
Type `.` to replace this match, then exit.
Type `!` to replace all remaining matches with no more questions.

### Regular expression search
Emacs allows you to search for regular expressions:  
`C-M-s`	Regular expression incremental search

Regular expressions are a succinct way of searching for many different strings at once by using a special language to describe the form of what you're looking for. Regular expression syntax is beyond the scope of this tour.  

### Regular expression search and replacement
Regular expressions are even more powerful in search and replace, because Emacs allows the replacement text to depend on the found text. You can control replacement by inserting special escape sequences in the replacement string, and Emacs will substitute them appropriately:  

When you type this
in a replacement string:        Emacs replaces it with:  
`\&`	                        the original found text    
`\1, \2, etc.`	                the 1st, 2nd, etc. parenthesized subgroup in the found text  
`\#`	                        the number of replacements done so far  
`\?`	                        a string obtained by prompting the user on each match  
`\,(lisp-expression …)`	        the result of evaluating an arbitrary function  

Here's an example. Suppose we have a buffer containing names like this:  
George Washington   
John Adams   
Thomas Jefferson   
James Madison   
James Monroe   
If we run M-x replace-regexp and replace the regexp \(\w+\) \(\w+\) with \,(upcase \2), \1, our buffer now looks like this:  
WASHINGTON, George   
ADAMS, John   
JEFFERSON, Thomas   
MADISON, James   
MONROE, James  

Roughly, the search expression searches for two words; the replacement string inserts an uppercased version of the second word, followed by a comma, followed by the first word.  

### Keyboard Macros
Keyboard macros are a way to remember a fixed sequence of keys for later repetition. They're handy for automating some boring editing tasks.  
`F3`	Start recording macro  
`F4`	Stop recording macro  
`F4`	Play back macro once  
`M-5 F4`	Play back macro 5 times  
`M-0 F4`	Play back macro over and over until it fails  

For example, this sequence of keys does the exact same transformation that we did with regular expression replacement earlier, that is, it transforms a line containing George Washington to WASHINGTON, George:  

`M-d C-d M-u, [SPC] C-y C-n C-a`  

After we record that key sequence as a macro, we can type M-0 F4 to transform the buffer pictured earlier; in this case, Emacs runs the macro repeatedly until it has reached the end of the buffer.  

## Help with commands



![l12](l12.png?raw=true "l12") 
