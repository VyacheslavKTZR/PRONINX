# PRONINX Kernel

> PRONINX is a kernel, the foundation for your operating system—or, more precisely, for creating a PRONINX distribution.
> It is based on Xv6 and is currently intended...
> For the time being, it has been developed as a bit of a lark by a single person—Vyacheslav Pronin (hence the name).
> Good luck creating distributions with it.

---

## Technical Deployment Guide

This document provides formal instructions for configuring the build environment and executing the PRONINX kernel within a RISC-V emulated environment.

### 1. Prerequisites

The build process requires a RISC-V cross-compiler toolchain and the QEMU emulator. Use the following commands to install dependencies for your specific Linux distribution:

#### **Debian / Ubuntu**
```bash
sudo apt-get update
sudo apt-get install git build-essential gdb-multiarch qemu-system-misc \
gcc-riscv64-unknown-elf binutils-riscv64-unknown-elf make
```
#### ARCH
```bash 
sudo pacman -S git base-devel qemu-emulators-full \
riscv64-unknown-elf-gcc riscv64-unknown-elf-binutils make
```
#### openSUSE (Leap/Tumbleweed)
```bash

sudo zypper install git make qemu-arm-riscv \
gnu-riscv64-gcc-bootstrap cross-riscv64-binutils
```
Upon a successful build, the system will generate the kernel binary and the fs.img disk image.
### 2. Launch
```bash
make qemu
```
