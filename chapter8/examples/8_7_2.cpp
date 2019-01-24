/* Converts one dimensions array to desired two dimensional array
	Written by: Shreevathsa
	Date: 24-01-2019.
*/
#include<iostream>
#include<iomanip>
using namespace std;

int main(){
	cout << "Enter the no. rows\n";
	int rows;
	cin  >> rows;
	cout << "Enter the no. cols\n";
	int cols;
	cin  >> cols;
	cout << "Enter the elements upto " << cols * rows << endl;
	int ary[rows * cols];			
	for(int i = 0; i < (rows * cols); i++)
		cin >> ary[i];

	int twoAry[rows][cols];

	for(int i = 0; i < rows; i++)
		for(int j = 0; j < cols; j++)
			twoAry[i][j] = ary[i * cols + j];

	for(int i = 0; i < rows; i++){
		for(int j = 0; j < cols; j++){
			cout << setw(3) << twoAry[i][j];
		}
		cout << endl;
		}
return 0;
}


