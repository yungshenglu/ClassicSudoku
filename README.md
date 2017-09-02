# Simple Sudoku

[![License: IEEE](https://img.shields.io/badge/License-CC%20BY--NC--SA%204.0-lightgrey.svg)](http://creativecommons.org/licenses/by-nc-sa/4.0/)

This game is a simple implementation of classic *Sudoku*. 

## Introduction

This repository is a simple implementation of classic game *Sudoku*. Different with the normal Sudoku, I also implement the *solver* of Sudoku which can let the computer to solve the Sudoku by input a Sudoku question.

## Description

* `Makefile`: For compilation.	
* `Sudoku.h`:
	- Include all header files needed.
	- Define the class of Sudoku.
* `Sudoku.cpp`:
	- Define the constructor.
	- Define all the method of the class `Sudoku`.
	- For `GiveQuestion()`:
		1. Set the initial Sudoku map.
		2. Use the initial map to random a new map. (By using swap the rows and cells.)
		3. Output the the Sudoku map.
	- For `ReadIn()` and `Solve()`:
		1. Collect the statistics of all possible number in blank.
		2. Solve the blank which has only one possible number.
		3. Brute force: Guess all other blanks.
		4. Output the result of Sudoku.
			* Unsolvable
			* Exactly one solution
			* More than one solution
	- `give_question.cpp`: Test the function `GiveQuestion()`.
	- `soleve.cpp`: Test the functions `ReadIn()` and `Solve()`.

## Installation

* Compilation
	```bash
	make
	```
	
* Execution
	```bash
	# To test "GiveQuestion()":
	./give_question
	# To test "ReadIn()" and "Solve()":
	./solve
	```

## Author

* [Yung-Sheng Lu](http://github.com/yungshenglu)

---
[![License: IEEE](https://img.shields.io/badge/License-CC%20BY--NC--SA%204.0-lightgrey.svg)](http://creativecommons.org/licenses/by-nc-sa/4.0/)
