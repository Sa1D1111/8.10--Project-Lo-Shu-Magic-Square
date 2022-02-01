// Salvador Delgado
// 1/13/2022
// CIS-17A
// 8.10 Mini-Programming Project -- Lo Shu Magic Square 

#include <iostream>
#include <iomanip>
using namespace std;

const int SIZE = 3;
bool isMagicSquare(int grid[SIZE][SIZE]);
void showSquare(int grid[SIZE][SIZE]);

int main() {


	int normalSquare[SIZE][SIZE] = { { 11, 6, 3 },
								   { 4, 11, 3 },
								   { 3, 1, 11 } };

	int magicSquare[SIZE][SIZE] = { { 4, 9, 2 },
								   { 3, 5, 7 },
								   { 8, 1, 6 } };

	showSquare(magicSquare);
	if (isMagicSquare(magicSquare) == true) {
		cout << "The grid above is a Lo Shu Magic Square. \n";
		cout << "The sum of each row, each column, and each diagonal all add up to the same number.\n";
	}
	else {
		cout << "The grid above is not a Lo Shu Magic Square";
	}
	cout << "\n" << setfill('*') << setw(119) << "*\n";
	showSquare(normalSquare);
	if (isMagicSquare(normalSquare) == true) {
		cout << "The grid above is a Lo Shu Magic Square";
	}
	else {
		cout << "The grid above is not a Lo Shu Magic Square";
	}
	cout << "\n" << setfill('*') << setw(119) << "*\n";
	cout << "Thank you! Have a nice day!\n" << endl;

	system("pause>0");
	return 0;
}

// Shows the Magic Square grid
void showSquare(int square[SIZE][SIZE]) {

	for (int i = 0; i < SIZE; i++) {
		for (int j = 0; j < SIZE; j++) {
			cout << square[i][j] << " ";
		}
		cout << endl;
	}
}

// function checks each spot to see if it equals a magic square
bool isMagicSquare(int square[SIZE][SIZE]) {

	int total = square[0][0] + square[0][1] + square[0][2];
	//checks rows
	for (int i = 1; i < SIZE; i++) {
		if (square[i][0] + square[i][1] + square[i][2] != total)
			return false;
	}
	//checks columns
	for (int i = 0; i < SIZE; i++) {
		if (square[0][i] + square[1][i] + square[2][i] != total)
			return false;
	}
	//checks diagonal from top left
	if (square[0][0] + square[1][1] + square[2][2] != total) {
		return false;
	}
	//checks diagonal from bottom right
	if (square[0][2] + square[1][1] + square[2][0] != total) {
		return false;
	}
	return true;
}


// This method set the array for testing 
//void Test(int grid[3][3]) {
//	grid[0][0] = 4;
//	grid[0][1] = 10;
//	grid[0][2] = 2;
//	grid[1][0] = 3;
//	grid[1][1] = 5;
//	grid[1][2] = 7;
//	grid[2][0] = 8;
//	grid[2][1] = 1;
//	grid[2][2] = 6;
//}