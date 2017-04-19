# Simple UNIX command interpreter
![alt text](https://upload.wikimedia.org/wikipedia/commons/thumb/8/87/Neptunea_angulata.jpg/220px-Neptunea_angulata.jpg)
## Description
The shell project is part of Holberton school curriculum and this custom shell suppose to replicate some of the functionalities of `sh`.
## Compilation
The shell should be compiled on Ubuntu 14.04 LTS  this way:
<return>
`gcc -Wall -Werror -Wextra -pedantic *.c -o hsh`
## Synopsis
This program must have the exact same output as sh as long as  the exact same error output.

### __Clone repository:__ https://github.com/cnov20/simple_shell.git
### __Run the shell__: ./hsh
### __Exit the shell__: `exit`or ctrl + D
### Exit status
Exits with code 0 on "end of file" condition. `CTRL + D`. Otherwise the shell will return the exit status of the last command executed, or if the exit builtin is used with  a numeric argument, it will return the argument.
## List of functions and system calls used

|Custom functions  | Functionality                    |
| ---------------- | -------------------------------- |
|   * `_putchar`   | output of chars & strings        |
|   * `_strcmp`    | compares two strings             |
|   * `_putstring` | outputs strings                  |
|   * `_print_env` | print environment                |
|   * `_getline`   | delimited string input           |
|   * `_strncat`   | concatenates two strings         |
|   * `_strlen`    | calculate the length of a string |

## Header file
 `shell.h`
__Contains all function prototypes and function structures used for the program:__
  * `char *_getenv_PATH(const char *name);`
*printing the enviroment of variable PATH*
  * `int execve(const char *filename, char *const argv[], char *const envp[]);`
*executes functions in child process*
  * `void _putstring(char *str);`
*prints a string to standard output*
  * `unsigned int _strlen(char *str);`
*finds the length of a string, excluding the null character*
  * `int _putchar(char c);`
*writes a character to standard output*
  * `int _strcmp(char *s1, char *s2);`
*compares two strings*
  * `char *_memcpy(char *dest, char *src, unsigned int n);`
*function that copies memory area*
  * `char *_strdup(char *src);`
*function that allocates space for and creates copy of given string*
  * `void shell_exit(int status);`
*exit the shell when user types __exit__ in prompt*
  * `char **tokenizer(char *line);`
*tokenizes the environment by chosen delimeters*
  * `int execute_cmd(char **argv);`
*function forks child process, if command is executable*
  * `char *_strncat(char *dest, char *src, int n);`
*concatenates two strings*
  * `void _print_env(void);`
*prints the environment*
### Examples
   * print the content of the current directory
![alt text](https://cdn-images-1.medium.com/max/2000/1*HMhr8aYRll4ahPWO18k6Cg.png)
## Authors

Christopher Novelli: [github account](https://github.com/cnov20), [twitter](https://twitter.com/c_nov20)

Ekaterina Kalache: [github account](https://github.com/KatyaKalache), [twitter](https://twitter.com/KatyaKalache)

## License
Public, no copyright protectiones