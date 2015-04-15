#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <iomanip>
#include <vector>

#define SIZE 12

using namespace std;

class Sudoku {
	public:
		Sudoku();
		Sudoku(int *map, int ans, int depth);
		int GetDepth();
		int GetAnswer();
		int* GetMap();
		void Result();
		void GiveInitial();
		void GiveQuestion();
		void Random();
		int RandomNum(int n);
		void RandomSwapRow1(int a, int b);
		void RandomSwapRow2(int a, int b);
		void RandomSwapCol1(int a, int b);
		void RandomSwapCol2(int a, int b);
		void ReadIn();
		void Solve();
		void SetDepth(int dep);
		void SetAnswer(int ans);
		bool CheckInput();
		static int answer;
		static int depth;
	private:
		int map_out[SIZE*SIZE];
		int map_inp[SIZE*SIZE];
};