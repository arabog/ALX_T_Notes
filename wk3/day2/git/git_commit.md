https://git-scm.com/book/en/v2/Customizing-Git-Git-Configuration  

# commit message template file
create a template file  
touch  ~/.gitmessage.txt

run:  
$ git config --global commit.template ~/.gitmessage.txt  
$ git commit  

sample text for template file
Subject line (try to keep under 50 characters)  

Multi-line description of commit,
feel free to be detailed.  

[Ticket: X]  

# Please enter the commit message for your changes. Lines starting  
# with '#' will be ignored, and an empty message aborts the commit.  
# On branch master  
# Changes to be committed:  
#   (use "git reset HEAD <file>..." to unstage)  
#  
# modified:   lib/test.rb  
#  
~  
~  
".git/COMMIT_EDITMSG" 14L, 297C    



