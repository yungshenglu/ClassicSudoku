all: Sudoku.o give_question.cpp solve.cpp
	g++ -o give_question give_question.cpp Sudoku.o
	g++ -o solve solve.cpp Sudoku.o

Sudoku.o: Sudoku.cpp Sudoku.h
	g++ -c Sudoku.cpp