# Hello, World

Project done during **Full Stack Software Engineering studies** at **Holberton School**. It aims to learn about what is entry point, basics commands (puts, printf, putchar), compilation process with gcc in **C language**.

## Technologies
* Scripts written in Bash 4.3.11(1)
* C files are compiled using `gcc 4.8.4`
* Tested on Ubuntu 14.04 LTS

## Files
All of the following files are scripts and programs written in C:

| Filename | Description |
| -------- | ----------- |
| `0-preprocessor` | Runs a C file through the preprocessor and saves the result into another file|
| `1-compiler` | Compiles a C file but does not link |
| `2-assembler` | Generates the assembly code of a C code and saves it in an output file |
| `3-name` | Compiles a C file and creates an executable named `cisfun` |
| `4-puts.c` | Prints exactly `"Programming is like building a multilingual puzzle"` |
| `5-printf.c` | Prints exactly `with proper grammar, but the outcome is a piece of art` |
| `6-size.c` | Prints the size of various types on the computer it is compiled |
| `100-intel` | Generates the assembly code (Intel syntax) of a C code and save it in an output file |
| `101-quote.c` | Prints exactly `and that piece of art is useful" - Dora Korpar, 2015-10-19` |


## ANSWERS
All of the following are answers given for each task and  are explained in depth.

| Task | Answer | Description |
| ---- | ------ | ----------- |
|  0   | `gcc -E $CFILE > c` | The command gcc -E $CFILE > c is used to preprocess a C source code file.

Here's what each part of the command does:

* `gcc`: This is the name of the GNU Compiler Collection, a popular compiler used for compiling C code (among other languages).
* '-E`: This flag tells the compiler to perform only the preprocessing stage of compilation, which means it will expand any macros in the code, handle any #include directives, and perform other similar text-processing tasks.
* `$CFILE`: This is a shell variable that should be set to the name of the C source code file you want to preprocess. For example, if the file is named example.c, you would set $CFILE to example.c before running the command.
* `>`: This is the output redirection operator in a Unix shell, which means that the output of the command (in this case, the preprocessed code) will be written to a file instead of printed to the screen.
* `c`: This is the name of the file that the preprocessed code will be written to. You can choose any filename you like here, but it's common to use a lowercase c to indicate that it's the preprocessed version of a C source code file.

So when you run the full command gcc -E $CFILE > c, it will preprocess the C source code file named in the $CFILE variable and write the resulting preprocessed code to a file named c. This can be useful for inspecting the expanded code, debugging macro definitions, or analyzing the output of the preprocessor.  |
