/* This program changes a two-dimensional array to the corresponding one-dimensional array.
	Written by: Shreevathsa.
	Date: 24-01-2019.
*/
#include<iostream>
#include<iomanip>
using namespace std;

const int cRows = 2;
const int cCols = 5;

int main(){
	int table [cRows][cCols] = {{00, 01, 02, 03, 04}, {10, 11, 12, 13, 14}};

	int line[cRows * cCols];

	for(int row = 0; row < cRows; row++){
		for(int column = 0; column < cCols; column++){
			line[row * cCols + column] = table[row][column];
	}
}
	cout << setfill('0');
	for(int row = 0; row < cRows * cCols; row++)
		cout << setw(2) << line[row] << " ";
	cout << endl;
	return 0;
}
