# GIT

![l1](git.jpg?raw=true "l1")

## Merge
git pull origin master
git add .
git status  [shows d alx file]
git commit -m "d diffence"
git merge update_script
git push

root@c1be20f6cfd2:/alx-zero_day# git merge update_script
error: Merging is not possible because you have unmerged files.
hint: Fix them up in the work tree, and then use 'git add/rm <file>'
hint: as appropriate to mark resolution and make a commit.
fatal: Exiting because of an unresolved conflict.

resolve d conflict, ds is due to updating a particular file by 2 or more people at the same time and trying to merge such a file.

============
git checkout master
git reset --hard test
This brings it back to the 'test' level.

Then do:
git push --force origin master



Resources to learn Git  
https://docs.github.com/en/get-started/quickstart/set-up-git  

About READMEs  
https://docs.github.com/en/repositories/managing-your-repositorys-settings-and-features/customizing-your-repository/about-readmes  

How to write a Git commit message  
https://cbea.ms/git-commit/  

Learning branching  
https://learngitbranching.js.org/  

Effective pull requests and other good practices for teams using GitHub  
https://codeinthehole.com/tips/pull-requests-and-other-good-practices-for-teams-using-github/  


