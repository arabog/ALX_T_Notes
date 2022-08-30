# How to Write a Git Commit Message
## Introduction: Why good commit messages matter
If you browse the log of any random Git repository, you will probably find its commit messages are more or less a mess.  

### A commit message shows whether a developer is a good collaborator.

If you haven’t given much thought to what makes a great Git commit message, it may be the case that you haven’t spent much time using git log and related tools.   

But a well-cared for log is a beautiful and useful thing. `git blame`, `revert`, `rebase`, `log`, `shortlog` and other subcommands come to life. Reviewing others’ commits and pull requests becomes something worth doing, and suddenly can be done independently. Understanding why something happened months or years ago becomes not only possible but efficient.  

A project’s long-term success rests (among other things) on its maintainability, and a maintainer has few tools more powerful than his project’s log. It’s worth taking the time to learn how to care for one properly.  

In order to create a useful revision history, teams should first agree on a commit message convention that defines at least the following three things:  
Style. Markup syntax, wrap margins, grammar, capitalization, punctuation. Spell these things out, remove the guesswork, and make it all as simple as possible. The end result will be a remarkably consistent log that’s not only a pleasure to read but that actually does get read on a regular basis.  

Content. What kind of information should the body of the commit message (if any) contain? What should it not contain?  

Metadata. How should issue tracking IDs, pull request numbers, etc. be referenced?  

Follow the seven rules below and you’re on your way to committing like a pro.  
## The seven rules of a great Git commit message
Keep in mind: This has all been said before.  
1. Separate subject from body with a blank line  
2. Limit the subject line to 50 characters  
3. Capitalize the subject line  
4. Do not end the subject line with a period  
5. Use the imperative mood in the subject line  
6. Wrap the body at 72 characters  
7. Use the body to explain what and why vs. how  

### 1. Separate subject from body with a blank line
Though not required, it’s a good idea to begin the commit message with a single short (less than 50 character) line summarizing the change, followed by a blank line and then a more thorough description. The text up to the first blank line in a commit message is treated as the commit title, and that title is used throughout Git.   
Firstly, not every commit requires both a subject and a body. Sometimes a single line is fine, especially when the change is so simple that no further context is necessary. For example:
```
Fix typo in introduction to user guide
```
Nothing more need be said; if the reader wonders what the typo was, she can simply take a look at the change itself, i.e. use `git show` or `git diff` or `git log -p`.  

If you’re committing something like this at the command line, it’s easy to use the `-m` option to `git commit`:
```
$ git commit -m "Fix typo in introduction to user guide"
```
However, when a commit merits a bit of explanation and context, you need to write a body. For example:  
```
Derezz the master control program

MCP turned out to be evil and had become intent on world domination.
This commit throws Tron's disc into MCP (causing its deresolution)
and turns it back into a chess game.
```

