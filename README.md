# 🖥️ cpp-cli-shell

> A modular, object-oriented command-line shell built in C++ — clean architecture, beginner-friendly, and easily extensible.

![Language](https://img.shields.io/badge/Language-C%2B%2B17-blue?style=flat-square&logo=cplusplus)
![Platform](https://img.shields.io/badge/Platform-Windows%20%7C%20Linux%20%7C%20macOS-lightgrey?style=flat-square)
![License](https://img.shields.io/badge/License-MIT-green?style=flat-square)
![Status](https://img.shields.io/badge/Status-Active-brightgreen?style=flat-square)

---

## 📖 Overview

**cpp-cli-shell** is a lightweight interactive shell implemented in C++ using object-oriented principles. It demonstrates clean separation of concerns — parsing, command handling, file operations, and utilities are each isolated into their own modules, making the codebase easy to understand, maintain, and extend.

Built as a learning project to explore C++ OOP, modular design patterns, and CLI application development.

---

## ✨ Features

| Feature | Description |
|---|---|
| 🔁 Interactive Shell Loop | Continuously reads and executes user commands |
| 🔍 Input Tokenizer | Parses raw input into structured command tokens |
| ➕ Arithmetic | `add` command for integer addition |
| 📄 File Reader | `read` command to display file contents |
| 🔎 Text Search | `search` command to find words inside files |
| 🧩 Modular Architecture | Clean OOP design — each concern in its own class |

---

## 🗂️ Project Structure

```
cpp-cli-shell/
├── main.cpp          # Shell entry point — runs the input loop
├── parser.h/.cpp     # Tokenizes raw input into command + args
├── commands.h/.cpp   # Dispatches and handles all commands
├── file_ops.h/.cpp   # File reading and word search logic
└── utils.h/.cpp      # String utilities (trim, helpers)
```

---

## 🚀 Getting Started

### Prerequisites

- A C++ compiler (`g++`, `clang++`, or MSVC)
- C++17 or later

### Build

```bash
# Clone the repository
git clone https://github.com/ashish7802/cpp-cli-shell.git
cd cpp-cli-shell

# Compile
g++ main.cpp parser.cpp commands.cpp file_ops.cpp utils.cpp -o cli_shell
```

### Run

**Linux / macOS:**
```bash
./cli_shell
```

**Windows (PowerShell):**
```powershell
.\cli_shell.exe
```

---

## 💬 Supported Commands

```
hello                      → Prints a greeting message
add <a> <b>                → Adds two integers  (e.g. add 5 3  →  8)
read <filename>            → Displays the contents of a file
search <filename> <word>   → Searches for a word inside a file
exit                       → Exits the shell
```

**Example session:**
```
shell> hello
Hello, World!

shell> add 10 25
Result: 35

shell> read notes.txt
This is the content of notes.txt...

shell> search notes.txt hello
Found: 'hello' in notes.txt

shell> exit
Goodbye!
```

---

## 🏗️ Architecture

The project follows a clean **separation of concerns** pattern:

- **`Parser`** — Responsible only for breaking raw input into tokens
- **`CommandHandler`** — Routes tokens to the correct command handler
- **`FileOps`** — Encapsulates all file I/O logic
- **`Utils`** — Stateless helper functions (string trimming, etc.)
- **`main.cpp`** — Thin orchestration layer that wires everything together

This makes adding new commands as simple as adding a new handler in `commands.cpp` — no other files need to change.

---

## 🔧 Extending the Shell

To add a new command:

1. Add a private handler method in `commands.h`
2. Implement it in `commands.cpp`
3. Register it in the `execute()` dispatch block

```cpp
// commands.cpp — add inside execute()
else if (tokens[0] == "mycommand") {
    handle_mycommand(tokens);
}
```

---

## 📄 License

This project is licensed under the [MIT License](LICENSE).

---

## 👤 Author

**Ashish Yadav**
- GitHub: [@ashish7802](https://github.com/ashish7802)
- Portfolio: [ashyada.netlify.app](https://ashyada.netlify.app)

---

> ⭐ If you found this useful, drop a star — it helps!
