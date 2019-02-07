/* Swapping the array elements without using another array 
	Written by: Shreevathsa
	Date: 30-01-2019
*/
#include<iostream>
#include<iomanip>
using namespace std;

int main(){
	int row;
	int temp;
	cout << "Enter the no. of array: ";
	cin  >> row;
	int ary[row];
	int j = row - 1; // one less than row

	cout << "Enter the elements\n";
	for(int i = 0; i < row; i++){
		cin >> ary[i];
	}
	for(int i = 0; i < j; i++){
		temp = ary[i]; //swapping algorithm
		ary[i] = ary[j];
		ary[j] = temp;
		j--; // swapping last to first term
		
	}
	for(int i = 0; i < row; i++){
	cout << setw(3) << ary[i];
	}
	cout << endl;
	return 0;
}
