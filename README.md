*This project has been created as part of the 42 curriculum by haincel.*

# ft_printf

## Description

`ft_printf` is a of the 42 core curriculum. The goal of this project is to recode the famous `printf()` function from the standard C library. It teaches you about variable arguments (`va_list`) and formatting output in C.

## Algorithm and Data Structure

The `ft_printf` implementation relies on a sequential parsing algorithm to process the format string:
1. **Format Specifier Detection:** When a percent sign (`%`) is encountered, the algorithm inspects the subsequent character to identify the conversion specifier (`c`, `s`, `p`, `d`, `i`, `u`, `x`, `X`, `%`).
2. **Variadic Argument Retrieval:** Using standard `<stdarg.h>` macros (`va_start`, `va_arg`, `va_end`), arguments are dynamically extracted matching their respective types.

### Data Structure / Memory Management
- **No Complex Data Structures:** The project does not require heavy data structures like trees or linked lists. Instead, it utilizes standard primitive types, a **stack-allocated `va_list`** pointer context to manage variable arguments sequentially.
- **Recursion for Number Conversions:** Number and hexadecimal formatting functions use lightweight stack-based recursion to handle base conversions from most significant to least significant digits without allocating heap memory, ensuring zero memory leaks.

## Instructions

Compile the library from the project root:

```sh
make
```

This builds `libftprintf.a` using `cc` with the `-Wall -Wextra -Werror` flags.

Other available Makefile rules:

```sh
make clean   # remove object files
make fclean  # remove object files and libftprintf.a
make re      # fclean + all
```

To use the library in your projects, include the header, write your main and link against the archive:

```c
#include "ft_printf.h"
```

```sh
cc -Wall -Wextra -Werror main.c libftprintf.a -o main
```

## Supported Conversions

- `%c`: Prints a single character.
- `%s`: Prints a string (as defined by the common C convention).
- `%p`: The `void *` pointer argument is printed in hexadecimal format.
- `%d`: Prints a decimal (base 10) number.
- `%i`: Prints an integer in base 10.
- `%u`: Prints an unsigned decimal (base 10) number.
- `%x`: Prints a number in hexadecimal (base 16) lowercase format.
- `%X`: Prints a number in hexadecimal (base 16) uppercase format.
- `%%`: Prints a percent sign.

## Resources

- **System V Application Binary Interface**: AMD64 Architecture Processor Supplement (With LP64 and ILP32 Programming Models), Version 1.0, Edited by H.J. Lu, Michael Matz, Milind Girkar, Jan Hubička, Andreas Jaeger, and Mark Mitchell, December 22, 2018.
- The official 42 project subject and the 42 Norm document.

## AI usage

AI was used to review the project against the 42 Norm pdf after the implementation was written. AI also was used to fill in the gaps in the subject PDF where it lacked details. It was not used to write the function implementations themselves.
