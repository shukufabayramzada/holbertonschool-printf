
![Logo](https://th.bing.com/th/id/R.e6315794f2dc2173ec197613148adf7a?rik=SKLQDysNVXBrog&riu=http%3a%2f%2fwww.automationminds.com%2fwp-content%2fuploads%2f2016%2f03%2fC-SLIDER.jpg&ehk=ZZ6lL7mtsfdZ%2bxUWfEkzGxayTv6UJpydsa7CQmJRxyA%3d&risl=&pid=ImgRaw&r=0)


## 🛠 Skills
C

# _printf Function

## Description

The `_printf` function produces output according to a given format. It is a custom implementation of the `printf` function in C. This function accepts a format string containing zero or more directives and writes output to the standard output stream (`stdout`). The format string may contain conversion specifiers such as `%c`, `%s`, and `%%`, which are replaced by the corresponding arguments passed to the function.

## Prototype

```c
int _printf(const char *format, ...);
```

## Return Value

The function returns the number of characters printed, excluding the null byte used to end output to strings.

## Conversion Specifiers

The `_printf` function handles the following conversion specifiers:

- `%c`: Print a single character.
- `%s`: Print a string.
- `%%`: Print a literal `%` character.
- `%d` and `%i`: Print signed decimal integers.

The function does not handle flag characters, field width, precision, or length modifiers.

Compilation
Your code will be compiled this way:

1. **Compile Command**: Use the given compilation command:
   ```bash
   $ gcc -Wall -Werror -Wextra -pedantic -std=gnu89 -Wno-format *.c
   ```

2. **Header Inclusion**: Ensure that your main files include the main header file `main.h`:
   ```c
   #include "main.h"
   ```

3. **Avoid Main Functions in Root Directory**: Do not include any `main` functions in the root directory of your project. If you need to include `main` functions for testing purposes, place them in a separate folder, such as a `test` folder, and ensure they are not included in the compilation command provided.

Following these guidelines will help ensure that your code compiles successfully and meets the project's requirements.

## Repository Information

- GitHub Repository: [holbertonschool-printf](https://github.com/shukufabayramzada/holbertonschool-printf)

---

# man_3_printf

## Description

The `man_3_printf` manual page provides documentation for the `_printf` function. It includes information about the function's usage, prototype, return value, and supported conversion specifiers.

## Flowchart 

![Flowchart diagram for_printf function](https://github.com/shukufabayramzada/holbertonschool-printf/blob/main/%20printf_%20flowchart%20_diagram.drawio.png)

## File Location

The `man_3_printf` file is located in the GitHub repository [holbertonschool-printf](https://github.com/holbertonschool/printf).

## Usage

To access the manual page for `_printf`, use the `man` command followed by the section number. For example:

```bash
man 3 _printf
```

This README provides an overview of the `_printf` function and the associated `man_3_printf` manual page. For further details, consult the documentation in the specified GitHub repository.
## Authors

- [@shukufabayramzada](https://github.com/shukufabayramzada)
- [@sayka88](https://github.com/sayka88)


