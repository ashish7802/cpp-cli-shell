# C++ CLI Shell

A clean, modular command-line shell implemented in C++ with a beginner-friendly, object-oriented architecture. This project demonstrates a small CLI toolkit with input parsing, command handling, file operations, and utility helpers separated into distinct modules.

## Project Structure

- `main.cpp` - Starts the shell loop, reads user input, and routes commands.
- `parser.h` / `parser.cpp` - Tokenizes user input into command tokens.
- `commands.h` / `commands.cpp` - Implements commands like `hello`, `add`, `read`, `search`, and `exit`.
- `file_ops.h` / `file_ops.cpp` - Provides file reading and text search functionality.
- `utils.h` / `utils.cpp` - Contains general helper utilities such as string trimming.

## Features

- Interactive shell loop with prompt
- Command parsing and tokenization
- `hello` command
- `add <a> <b>` command for integer addition
- `read <filename>` command to display file contents
- `search <filename> <word>` command to search text inside a file
- `exit` command to terminate the shell

## Build Instructions

Use a C++ compiler such as `g++`.

```bash
cd "c:\Personal Use\cpp_cli"
g++ main.cpp parser.cpp commands.cpp file_ops.cpp utils.cpp -o cli_shell
```

## Run

```bash
./cli_shell
```

On Windows PowerShell, run:

```powershell
.\cli_shell.exe
```

## Example Commands

- `hello` - Print a greeting message.
- `add 5 3` - Add two numbers and show the result.
- `read example.txt` - Display the contents of `example.txt`.
- `search example.txt hello` - Search for the word `hello` inside `example.txt`.
- `exit` - Quit the shell.

## Notes

- The code is structured to separate parsing, command handling, file operations, and utility helpers.
- This makes the project easy to extend with new commands and features.
