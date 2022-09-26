https://learngitbranching.js.org/

## Git Branches
Branches in Git are incredibly lightweight as well. They are simply pointers to a specific commit -- nothing more.  
Remember that a branch essentially says "I want to include the work of **this commit and all parent commits**."  

Note: In Git version 2.23, a new command called git switch was introduced to eventually replace git checkout. The switch command is still considered experimental and the syntax may change in the future.   

if you want to create a new branch AND check it out at the same time, you can simply type `git checkout -b [yourbranchname]`.  

## Branches and Merging
Merging in Git creates a special commit that has two unique parents. A commit with two parents essentially means "I want to include all the work from this parent over here and this one over here, and the set of all their parents."   
To complete this level, do the following steps:  
Make a new branch called bugFix  
Checkout the bugFix branch with git checkout bugFix  
Commit once  
Go back to main with git checkout  
Commit another time  
Merge the branch bugFix into main with git merge  
```
git checkout -b bugFix; 
git commit
git checkout main
git commit
git merge bugFix
```
![rb1](rb1.jpg?raw=true "rb1")
## Git Rebase
The second way of combining work between branches is rebasing. Rebasing essentially takes a set of commits, "copies" them, and plops them down somewhere else.  

While this sounds confusing, the advantage of rebasing is that it can be used to make a nice linear sequence of commits. The commit log / history of the repository will be a lot cleaner if only rebasing is allowed.  

To complete this level, do the following  
Checkout a new branch named bugFix  
Commit once  
Go back to main and commit again  
Check out bugFix again and rebase onto main  
ds will merge main(main here is refering to oda branch or master in sm very rear cases) into bugFix  
![rb2](rb2.jpg?raw=true "rb2")

```
git checkout -b bugFix
git commit
git checkout -b main; git commit
git checkout -b bugFix; git rebase main
```

