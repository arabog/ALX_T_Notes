# The Best Keyboard Shortcuts for Bash 
<a href="https://www.howtogeek.com/howto/ubuntu/keyboard-shortcuts-for-bash-command-shell-for-ubuntu-debian-suse-redhat-linux-etc/" target="_blank">Bash Shortcuts</a>    
![b1](b1.png?raw=true "b1")  

In order to test your scripts, you will need to use this command: **chmod u+x file**. We will see later what does chmod mean and do, but you can have a look at man chmod if you are curious.  

Bash is the default command-line shell on most Linux distributions, from Ubuntu and Debian to Red Hat and Fedora. Bash is also the default shell included with macOS, and you can install a Linux-based bash environment on Windows 10.  
The bash shell features a wide variety of keyboard shortcuts you can use. These will work in bash on any operating system. Some of them may not work if you’re accessing bash remotely through an SSH or telnet session, depending on how you have your keys mapped.  

## Working With Processes
Use the following shortcuts to manage running processes.  
**Ctrl+C:** Interrupt (kill) the current foreground process running in in the terminal. This sends the SIGINT signal to the process, which is technically just a request—most processes will honor it, but some may ignore it.
**Ctrl+Z:** Suspend the current foreground process running in bash. This sends the SIGTSTP signal to the process. To return the process to the foreground later, use the fg process_name command.
**Ctrl+D:** Close the bash shell. This sends an EOF (End-of-file) marker to bash, and bash exits when it receives this marker. This is similar to running the exit command.

## Controlling the Screen
The following shortcuts allow you to control what appears on the screen.  
**Ctrl+L:** Clear the screen. This is similar to running the **“clear”** command.  
**Ctrl+S:** Stop all output to the screen. This is particularly useful when running commands with a lot of long, verbose output, but you don’t want to stop the command itself with **Ctrl+C**.  
**Ctrl+Q:** Resume output to the screen after stopping it with **Ctrl+S**.  

## Moving the Cursor
Use the following shortcuts to quickly move the cursor around the current line while typing a command.  
**Ctrl+A or Home:** Go to the beginning of the line.    
**Ctrl+E or End:** Go to the end of the line.      
**Alt+B:** Go left (back) one word.  
**Ctrl+B:** Go left (back) one character.    
**Alt+F:** Go right (forward) one word.
**Ctrl+F:** Go right (forward) one character.  
**Ctrl+XX:** Move between the beginning of the line and the current   position of the cursor. This allows you to press **Ctrl+XX** to return to the start of the line, change something, and then press **Ctrl+XX** to go back to your original cursor position. To use this shortcut, hold the **Ctrl key** and tap the X key twice.  

## Deleting Text
Use the following shortcuts to quickly delete characters:  
**Ctrl+D or Delete:** Delete the character under the cursor.  
**Alt+D:** Delete all characters after the cursor on the current line.  
**Ctrl+H or Backspace:** Delete the character before the cursor.  

## Fixing Typos
These shortcuts allow you to fix typos and undo your key presses.  
**Alt+T:** Swap the current word with the previous word.  
**Ctrl+T:** Swap the last two characters before the cursor with each other. You can use this to quickly fix typos when you type two characters in the wrong order.  
**Ctrl+_:** Undo your last key press. You can repeat this to undo multiple times.  

## Cutting and Pasting
Bash includes some basic cut-and-paste features.  
**Ctrl+W:** Cut the word before the cursor, adding it to the clipboard.  
**Ctrl+K:** Cut the part of the line after the cursor, adding it to the clipboard.  
**Ctrl+U:** Cut the part of the line before the cursor, adding it to the clipboard.  
**Ctrl+Y:** Paste the last thing you cut from the clipboard. The y here stands for “yank”.  

## Capitalizing Characters
The bash shell can quickly convert characters to upper or lower case:  
**Alt+U:** Capitalize every character from the cursor to the end of the current word, converting the characters to upper case.  
**Alt+L:** Uncapitalize every character from the cursor to the end of the current word, converting the characters to lower case.  
**Alt+C:** Capitalize the character under the cursor. Your cursor will move to the end of the current word.  

## Tab Completion
Tab completion is a very useful bash feature. While typing a file, directory, or command name, press Tab and bash will automatically complete what you’re typing, if possible. If not, bash will show you various possible matches and you can continue typing and pressing Tab to finish typing.  
**Tab:** Automatically complete the file, directory, or command you’re typing.  

## Working With Your Command History
You can quickly scroll through your recent commands, which are stored in your user account’s bash history file:   
**Ctrl+P or Up Arrow:** Go to the previous command in the command history. Press the shortcut multiple times to walk back through the history.  
**Ctrl+N or Down Arrow:** Go to the next command in the command history. Press the shortcut multiple times to walk forward through the history.  
**Alt+R:** Revert any changes to a command you’ve pulled from your history if you’ve edited it.  
Bash also has a special “recall” mode you can use to search for commands you’ve previously run:  
**Ctrl+R:** Recall the last command matching the characters you provide. Press this shortcut and start typing to search your bash history for a command.  
**Ctrl+O:** Run a command you found with Ctrl+R.  
**Ctrl+G:** Leave history searching mode without running a command.  

## emacs vs. vi Keyboard Shortcuts
The above instructions assume you’re using the default keyboard shortcut configuration in bash. By default, bash uses **emacs-style** keys. If you’re more used to the vi text editor, you can switch to vi-style keyboard shortcuts.  
The following command will put bash into vi mode:
```
set -o vi
```
The following command will put bash back into the default emacs mode:
```
set -o emacs
```
With a few of these in your toolbelt, you’ll be a Terminal master in no time.
## Linux Commands
### Files	
```
tar · pv · cat · tac · chmod · grep ·  diff · sed · ar · man · pushd · popd · fsck · testdisk · seq · fd · pandoc · cd · $PATH · awk · join · jq · fold · uniq · journalctl · tail · stat · ls · fstab · echo · less · chgrp · chown · rev · look · strings · type · rename · zip · unzip · mount · umount · install · fdisk · mkfs · rm · rmdir · rsync · df · gpg · vi · nano · mkdir · du · ln · patch · convert · rclone · shred · srm
```

### Processes	
```
alias · screen · top · nice · renice · progress · strace · systemd · tmux · chsh · history · at · batch · free · which · dmesg · chfn · usermod · ps · chroot · xargs · tty · pinky · lsof · vmstat · timeout · wall · yes · kill · sleep · sudo · su · time · groupadd · usermod · groups · lshw · shutdown · reboot · halt · poweroff · passwd · lscpu · crontab · date · bg · fg
```

### Networking	
```
netstat · ping · traceroute · ip · ss · whois · fail2ban · bmon · dig · finger · nmap · ftp · curl · wget · who · whoami · w · iptables · ssh-keygen · ufw	
```