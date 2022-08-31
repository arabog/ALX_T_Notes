# Shebang (Unix)
<a href="https://en.wikipedia.org/wiki/Shebang_%28Unix%29" target="_blank">Shebang</a>    

In computing, a shebang is the character sequence consisting of the characters number sign and exclamation mark (#!) at the beginning of a script. It is also called sharp-exclamation, sha-bang, hashbang, pound-bang, or hash-pling.  

When a text file with a shebang is used as if it is an executable in a Unix-like operating system, the program loader mechanism parses the rest of the file's initial line as an interpreter directive. The loader executes the specified interpreter program, passing to it as an argument using the path that was initially used when attempting to run the script, so that the program may use the file as input data.   For example, if a script is named with the path `path/to/script`, and it starts with the following line, `#!/bin/sh`, then the program loader is instructed to run the program `/bin/sh`, passing `path/to/script` as the first argument. In Linux, this behavior is the result of both kernel and user-space code.  

The shebang line is usually ignored by the interpreter, because the "#" character is a comment marker in many scripting languages; some language interpreters that do not use the hash mark to begin comments still may ignore the shebang line in recognition of its purpose.  

