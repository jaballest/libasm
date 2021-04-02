![Passed 100/100](https://img.shields.io/badge/PASSED-100%2F100-green?style=for-the-badge&logo=42)
# libasm
The aim of this project is to get familiar with assembly language.

## Content
The project consists of 6 .s functions, a header file, a simple main to check all these functions and a Makefile to compil
e them.

## How to test it?
You can start by cloning this repository:
```bash
git clone https://github.com/xpartano/libasm.git libasm && cd libasm
```
To compile this project you first have to make sure you have all dependencies installed:
```bash
apt update && apt install make nasm binutils clang
```
After this we can just compile:
```bash
make all
```
This will compile our functions and create a binary which we can execute to compare this libasm with system's functions. To execute this binary just type:
```bash
./test
```
