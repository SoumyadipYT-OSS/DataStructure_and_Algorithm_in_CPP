# C++ Classes & Objects — Compilation Guide

This folder demonstrates **separate compilation** with header (`.hpp`) and implementation (`.cpp`) files.

---

## File Structure
```
_04_OOPs/
├── Cart.hpp # Class declaration (interface)
├── Cart.cpp # Method definitions (implementation)
├── _01_Classes_Objects.cpp # Main program (entry point)
└── README.md # This file
```

---

## Why Separate Files?

| File | Purpose | Compiled? |
|------|---------|-----------|
| `Cart.hpp` | Declarations only — included by users | No (textually included) |
| `Cart.cpp` | Definitions — compiled once | **Yes** → `Cart.obj` |
| `_01_Classes_Objects.cpp` | `main()` — uses the class | **Yes** → `_01_Classes_Objects.obj` |

The linker combines both `.obj` files into the final executable.

---

## Compile & Run

### Windows (MSVC `cl.exe`)

```bash
# From _04_OOPs/ directory
cl.exe /EHsc _01_Classes_Objects.cpp
Cart.cpp
```
run the command
```bash
_01_Classes_Objects.exe
```

### Linux/macOS (g++ / clang++)
```bash
g++ Cart.cpp _01_Classes_Objects.cpp
```

or,
#### From _04_OOPs/ directory
```bash
g++ Cart.cpp _01_Classes_Objects.cpp -o CartApp
./CartApp
```

### Seperate Compile + Link (How Build Systems Work)
```bash
# Step 1: Compile each .cpp to .obj (no linking)
cl.exe /EHsc /std:c++17 /c Cart.cpp
cl.exe /EHsc /std:c++17 /c _01_Classes_Objects.cpp

# Step 2: Link .obj files into .exe
link.exe Cart.obj _01_Classes_Objects.obj /OUT:CartApp.exe
```
