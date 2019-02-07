/* Prints star pyramid ascending order
	Written by: Shreevathsa
	Date: 04-02-2019
*/
#include<iostream>
using namespace std;

void pattern();

int main(){
	pattern();
	return 0;
}

void pattern(){
	cout << "Enter the height of the pattern: ";
	int row;
	cin  >> row;
	for(int i = 0; i <= row; i++){
		for(int j = 0; j < 2 * i - 1; j++){
			cout << "*";
		}
		cout << endl;
	}
	return;
}
