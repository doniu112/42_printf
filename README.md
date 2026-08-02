*This project was created as part of the 42 curriculum by dswietoc.*

# ft_printf

## Table of Contents

* [Description](#description)
* [Supported Conversions](#supported-conversions)
* [Project Structure](#project-structure)
* [Instructions](#instructions)
* [Usage Example](#usage-example)
* [Functions](#functions)
* [Resources](#resources)
* [AI Usage](#ai-usage)

## Description

`ft_printf` is a custom reimplementation of the standard C library function `printf`.

The goal of the project is to learn how variadic functions work, process format specifiers, convert values to different representations, and create a reusable static library.

## Supported Conversions

| Conversion | Description                                                    |
| ---------- | -------------------------------------------------------------- |
| `%c`       | Prints a single character                                      |
| `%s`       | Prints a string                                                |
| `%p`       | Prints a pointer address in hexadecimal format                 |
| `%d`       | Prints a signed decimal integer                                |
| `%i`       | Prints a signed integer                                        |
| `%u`       | Prints an unsigned decimal integer                             |
| `%x`       | Prints an unsigned hexadecimal integer using lowercase letters |
| `%X`       | Prints an unsigned hexadecimal integer using uppercase letters |
| `%%`       | Prints a percent sign                                          |

## Project Structure

```text
.
├── Makefile
├── ft_printf.h
├── ft_printf.c
├── ft_format.c
├── ft_putchar.c
├── ft_puthex.c
├── ft_putnbr.c
├── ft_putptr.c
├── ft_putstr.c
├── ft_putunint.c
└── README.md
```

## Instructions

### Build the library

Compile the project by running:

```bash
make
```

The Makefile compiles the source files into object files and archives them in the static library:

```text
libftprintf.a
```

### Clean build files

Remove object files:

```bash
make clean
```

Remove object files and the static library:

```bash
make fclean
```

Rebuild the project from scratch:

```bash
make re
```

### Use the library

Include the header file:

```c
#include "ft_printf.h"
```

Compile your program and link it with the library:

```bash
cc -Wall -Wextra -Werror main.c libftprintf.a -I. -o program
```

Run the compiled program:

```bash
./program
```

On Windows:

```bash
./program.exe
```

## Usage Example

```c
#include "ft_printf.h"
#include <limits.h>
#include <stddef.h>

int	main(void)
{
	char	*str;
	int		number;

	str = "Hello 42!";
	number = 42;
	ft_printf(
		"char=%c | str=%s | ptr=%p | dec=%d | int=%i | "
		"uint=%u | hex=%x | HEX=%X | percent=%%\n",
		'A', str, &number, -42, 42, 4294967295U, 255, 255);
	ft_printf(
		"[%s] [%d] [%i] [%u] [%x] [%X] [%c] [%%]\n",
		NULL, INT_MIN, INT_MAX, 0U, 0, 0, '\0');
	return (0);
}
```

## Functions

| Function        | Description                                                  |
| --------------- | ------------------------------------------------------------ |
| `ft_printf`     | Processes the format string and prints formatted output      |
| `ft_conversion` | Selects the correct function for a conversion specifier      |
| `ft_putchar`    | Prints a single character                                    |
| `ft_putstr`     | Prints a string                                              |
| `ft_putnbr`     | Prints a signed decimal integer                              |
| `ft_putunint`   | Prints an unsigned decimal integer                           |
| `ft_puthex`     | Prints a number in lowercase or uppercase hexadecimal format |
| `ft_putptr`     | Prints a pointer address in hexadecimal format               |
| `ft_strlen`     | Calculates the length of a string                            |

## Resources

* 42 `ft_printf` subject
* [C `printf` documentation](https://en.cppreference.com/w/c/io/fprintf)
* [Variadic arguments](https://en.cppreference.com/w/c/variadic)
* [Polish `printf` documentation](https://cpp0x.pl/dokumentacja/standard-C/printf/321)

## AI Usage

ChatGPT was used only as a learning assistant to:

* explain C concepts;
* review implementations;
* suggest test cases;
* help debug errors;
* improve the README.

All function implementations and the final code were written, tested, and verified manually.
