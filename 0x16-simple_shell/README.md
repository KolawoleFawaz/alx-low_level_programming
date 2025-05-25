# 0x16 - Simple Shell

This is a custom UNIX command-line shell written in C, developed as part of the ALX Software Engineering program. The shell supports executing user commands, built-in functions, command chaining, environment management, and more — mimicking basic features of `/bin/sh`.

---

## Features

- Interactive shell with custom prompt
- Execute system commands and custom built-ins
- Handle command chaining with `;`
- Environment variable management
- Command history support
- Input parsing and tokenization
- Variable replacement (e.g., `$?`, `$$`)
- Graceful error handling
- Custom reimplementation of standard library functions
- Supports both interactive and non-interactive modes

---

## File Structure

| File | Description |
|------|-------------|
| `main.c` | Program entry point |
| `shell_loop.c` | Main loop handling input and execution |
| `parser.c` | Parses input into executable form |
| `tokenizer.c` | Splits strings into tokens |
| `builtin.c` / `builtin1.c` | Built-in command functions (`cd`, `exit`, `env`, etc.) |
| `exits.c` | Exit-related logic |
| `environ.c`, `getenv.c` | Environment management |
| `vars.c` | Handles variable replacement |
| `getLine.c` | Custom line-reading function |
| `errors.c`, `errors1.c` | Error messages and printing |
| `string.c`, `string1.c`, `_atoi.c` | Custom string functions |
| `memory.c`, `realloc.c` | Memory allocation utilities |
| `lists.c`, `lists1.c` | Custom linked list implementations |
| `getinfo.c` | Initializes shell info struct |
| `history.c` | Handles command history logic |
| `shell.h` | Header file with all function declarations and structs |

---

## Compilation

```bash
gcc -Wall -Werror -Wextra -pedantic *.c -o hsh
---

## Usage

```bash
./hsh
```

### Example

```shell
$ ./hsh
$ echo "hello"
hello
$ env
PATH=/usr/bin:/bin
HOME=/home/user
...
$ exit
```

---

