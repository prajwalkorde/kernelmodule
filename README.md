# Hello Kernel Module

## Description
This is a simple Linux kernel module written in C that demonstrates basic kernel programming concepts such as `module_init`, `module_exit`, and `printk`.  

When the module is loaded, it prints a message to the kernel log (`dmesg`), and similarly when it is unloaded. The module also supports a parameter to customize the greeting name.

---

## Files

- `hello.c` — The main kernel module source code.  
- `Makefile` — Build instructions for compiling the kernel module.  
- `README.md` — This documentation file.

---

## Requirements

- Linux kernel headers installed (matching your running kernel).  
- GCC compiler.  
- Root privileges to insert/remove kernel modules.

---

## Build Instructions

1. Open a terminal in the project directory (`hello`):

```bash
cd /home/prajwal/kernel-play/hello
