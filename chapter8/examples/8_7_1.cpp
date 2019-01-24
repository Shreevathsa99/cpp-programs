/* Converts one dimensions array to desired two dimensional array
	Written by: Shreevathsa
	Date: 24-01-2019.
*/
#include<iostream>
#include<iomanip>
using namespace std;

int cRows;
const int cCols = 3;

void printData(int ary[], int twoAry[][cCols], int row); 

int main(){
	
	cout << "Enter the no. rows\n";
	cin  >> cRows;
	cout << "Enter the elements upto " << cRows * cCols << endl;
	int list[cRows * cCols];
	for(int i = 0; i < (cRows * cCols); i++)
		cin >> list[i];
	int twoArray[cRows][cCols];
	printData(list, twoArray, cRows);

	return 0;
}

void printData(int ary[], int twoAry[][cCols], int row){
	
	for(int i = 0; i < row; i++)
		for(int j = 0; j < cCols; j++)
			twoAry[i][j] = ary[i * cCols + j];
	for(int i = 0; i < row; i++){
		for(int j = 0; j < cCols; j++){
			cout << setw(3)<<  twoAry[i][j];
		}
		cout << endl;
	}
	return;
}
 
