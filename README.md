# Classic Sudoku

This repository is a simple implementation of classic game *Sudoku*. Different with the normal Sudoku, I also implement the *solver* of Sudoku which can let the computer to solve the Sudoku by input a Sudoku question.

> **NOTICE:** This repository is a project in NCKU course "Program Design 2". If you are taking this course, please do not duplicate from this repository. All rights reserved.

---
## File Description

> **NOTICE:** All source files are in the folder `src/`

* `Makefile`: For compilation
* `Sudoku.h`:
	- Include all header files needed
	- Define the class of Sudoku
* `Sudoku.cpp`:
	- Define the constructor
	- Define all the method of the class `Sudoku`
	- For `GiveQuestion()`:
		1. Set the initial Sudoku map
		2. Use the initial map to random a new map (by using swap the rows and cells)
		3. Output the the Sudoku map
	- For `ReadIn()` and `Solve()`:
		1. Collect the statistics of all possible number in blank
		2. Solve the blank which has only one possible number
		3. Brute force: Guess all other blanks
		4. Output the result of Sudoku
			* Unsolvable
			* Exactly one solution
			* More than one solution
	- `give_question.cpp`: Test the function `GiveQuestion()`
	- `soleve.cpp`: Test the functions `ReadIn()` and `Solve()`

---
## Execution

* Compilation
    ```bash
    # Make sure your current directory is in "src/"
    $ make
    ```
* Execution
    ```bash
    # Make sure your current directory is in "src/"
    # To test "GiveQuestion()":
    $ ./give_question
    # To test "ReadIn()" and "Solve()":
    $ ./solve
    ```

---
## Author

> **NOTICE:** You can follow the contributing process [CONTRIBUTING.md](CONTRIBUTING.md) to join me. I am very welcome any issue!

* [David Lu](http://github.com/yungshenglu)

---
## License

NOTCIE: This repository is the assignment in NCKU course "Program Design 2". If you are taking this course, please do not duplicate from this repository. All rights reserved.

[GNU GENERAL PUBLIC LICENSE Version 3](LICENSE)
