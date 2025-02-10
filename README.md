# CPP Module 00

This project is part of the C++ modules from 42 school, designed to introduce Object-Oriented Programming concepts using C++98.

## Table of Contents

- [Overview](#overview)
- [Projects Structure](#projects-structure)
- [Requirements](#requirements)
- [Installation](#installation)
- [Usage](#usage)
- [Exercise Details](#exercise-details)

## Overview

CPP Module 00 focuses on the basics of C++, including:
- Namespaces
- Classes
- Member functions
- stdio streams
- Initialization lists
- Static
- Const
- Other basic stuff

## Projects Structure

The module consists of three exercises:

```
cpp_module_00/
├── ex00/
│   ├── Makefile
│   └── megaphone.cpp
├── ex01/
│   ├── Makefile
│   ├── main.cpp
│   ├── Contact.cpp
│   ├── Contact.hpp
│   ├── PhoneBook.cpp
│   └── PhoneBook.hpp
└── ex02/
    ├── Makefile
    ├── Account.cpp
    ├── Account.hpp
    └── tests.cpp
```

## Requirements

- C++ compiler (supporting C++98)
- Make
- Operating System: Unix-based (Linux/Mac)

Compilation flags:
```bash
-Wall -Wextra -Werror -std=c++98
```

## Installation

Clone the repository:
```bash
git clone https://github.com/NzolaKiampava/cpp_module00.git
cd cpp_module00
```

## Usage

### Exercise 00: Megaphone
```bash
cd ex00
make
./megaphone "your text here"
```

Example:
```bash
./megaphone "shhhhh... I think the students are asleep..."
SHHHHH... I THINK THE STUDENTS ARE ASLEEP...
```

### Exercise 01: PhoneBook
```bash
cd ex01
make
./phonebook
```

Available commands:
- ADD: Save a new contact
- SEARCH: Display specific contact
- EXIT: Quit program

### Exercise 02: Account
```bash
cd ex02
make
./account
```

## Exercise Details

### Exercise 00: Megaphone
A program that converts input strings to uppercase.
- If no arguments are provided, it outputs: "* LOUD AND UNBEARABLE FEEDBACK NOISE *"
- Otherwise, it converts the input arguments to uppercase

### Exercise 01: My Awesome PhoneBook
A simple phonebook program that can:
- Store up to 8 contacts
- Add new contacts (ADD)
- Search and display contacts (SEARCH)
- Exit the program (EXIT)

Contact fields include:
- First name
- Last name
- Nickname
- Phone number
- Darkest secret

### Exercise 02: The Job Of Your Dreams
A program that recreates account functionality based on the provided Account.hpp and tests.cpp files.

## 42 School Project Information

This project is part of the 42 school curriculum, focusing on:
- Introduction to C++
- Object-Oriented Programming basics
- Class implementation
- Basic C++ syntax and features
- Standard input/output operations
- String manipulation

## License

This project is part of the 42 school curriculum. Please refer to 42's policies regarding code sharing and usage.
