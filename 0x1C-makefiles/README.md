# 0x1C. C - Makefiles

## Project Overview

This project focuses on using Makefiles to automate the build process for C programs. Makefiles simplify the compilation process by defining rules and dependencies, ensuring efficient and correct builds. You will learn to create a Makefile that compiles a program named school, and understand how to manage different build targets and clean-up operations.

## Learning Objectives

Understand the purpose of Makefiles in project builds.
Learn to define and use variables in Makefiles.
Create rules to compile and link source files into an executable.
Implement clean-up rules to manage build artifacts and temporary files.
Ensure that only updated source files are recompiled, optimizing the build process.

## Requirements

- Executable Name: school
    Rules: all, clean, oclean, fclean, re
    all: Builds the executable.
    clean: Deletes the executable and all Emacs and Vim temporary files.
    oclean: Deletes the object files.
    fclean: Deletes the executable, object files, and all Emacs and Vim temporary files.
    re: Forces recompilation of all source files.
- Variables: CC, SRC, OBJ, NAME, RM, CFLAGS
    CC: Compiler to be used.
    SRC: Source files.
    OBJ: Object files derived from source files.
    NAME: Name of the executable.
    RM: Program to delete files.
    CFLAGS: Compiler flags (-Wall -Werror -Wextra -pedantic).

## Usage

Build the executable: Run make or make all.
Clean temporary files and the executable: Run make clean.
Clean object files: Run make oclean.
Fully clean the project: Run make fclean.
Recompile all source files: Run make re.
