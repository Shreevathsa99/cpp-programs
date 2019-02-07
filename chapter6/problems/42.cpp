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
	int lessRow = row -1;
	for(int i = lessRow; i >= 0; i--){
		for(int j = 0; j < (2 * i + 1); j++){
			cout << "*";
		}
		cout << endl;
	}
	return;
}
