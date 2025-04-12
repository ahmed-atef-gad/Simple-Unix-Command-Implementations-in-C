# Unix Command Implementations in C

This repository contains basic C implementations of common Unix commands:

- `mycp`: Copy a file
- `mymv`: Move (rename) a file
- `mypwd`: Print current working directory
- `myecho`: Echo arguments to the terminal

---

## 🔧 Compilation

To compile the programs, use `gcc` as follows:

````bash
gcc mycp.c -o mycp
gcc mymv.c -o mymv
gcc mypwd.c -o mypwd
gcc myecho.c -o myecho

## 🧪 Usage & Examples

### 📁 mycp
Copies the contents of one file to another.

```bash
$ ./mycp input.txt output.txt
````

### 🚚 mymv

Moves a file (copies then deletes the source).

```bash
$ ./mymv temp.txt archive/temp_backup.txt
```

### 📍 mypwd

Displays the current working directory.

```bash
$ ./mypwd
/home/user/projects/myunix
```

### 🗣️ myecho

Prints all arguments to the terminal (like the echo command).

```bash
$ ./myecho Hello from C!
Hello from C!
```
