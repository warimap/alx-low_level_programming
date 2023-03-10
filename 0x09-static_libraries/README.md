# C - Static libraries

Project done during **Full Stack Software Engineering studies** at **Alx**. It aims to learn about static libraries in **C language**.

## Technologies
* Scripts written in Bash 4.3.11(1)
* C files are compiled using `gcc 4.8.4`
* C files are written according to the C90 standard
* Tested on Ubuntu 14.04 LTS

## Files
All of the following files are scripts and programs written in C:

| Filename | Description |
| -------- | ----------- |
| `libmy.a` | Static library that contains a lot of functions |
| `create_static_lib.sh` | Script that creates a static library called `liball.a` from all the `.c` files that are in the current directory |
| `main.h` | Header file that contains all the prototypes of the used functions |

In this project, I learned what static libraries are and practiced creating and
using them with `ar`, `ranlib`, and `nm`.

## Tasks :page_with_curl:

* **0. A library is not a luxury but one of the necessities of life**
  * [libmy.a](./libmy.a): C Static library containing all the functions
  listed below:
    * `int _putchar(char c);`
    * `int _islower(int c);`
    * `int _isalpha(int c);`
    * `int _abs(int n);`
    * `int _isupper(int c);`
    * `int _isdigit(int c);`
    * `int _strlen(char *s);`
    * `void _puts(char *s);`
    * `char *_strcpy(char *dest, char *src);`
    * `int _atoi(char *s);`
    * `char *_strcat(char *dest, char *src);`
    * `char *_strncat(char *dest, char *src, int n);`
    * `char *_strncpy(char *dest, char *src, int n);`
    * `int _strcmp(char *s1, char *s2);`
    * `char *_memset(char *s, char b, unsigned int n);`
    * `char *_memcpy(char *dest, char *src, unsigned int n);`
    * `char *_strchr(char *s, char c);`
    * `unsigned int _strspn(char *s, char *accept);`
    * `char *_strpbrk(char *s, char *accept);`
    * `char *_strstr(char *haystack, char *needle);`

  * [main.h](./main.h): Header file containing the prototypes of all functions
  included in `libmy.a`.

* **1. Without libraries what have we? We have no past and no future**
  * [create_static_lib.sh](./create_static_lib.sh): Bash script that creates a static
  library called `liball.a` from all the `.c` files in the current directory.

