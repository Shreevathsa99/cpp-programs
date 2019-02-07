#include<iostream>
using namespace std;

void pattern();

int main(){
	pattern();
	return 0;
}

void pattern(){
	cout << "Enter the height of the pyramid<EVEN>: ";
	int row;
	cin  >> row;
	if(row % 2 != 0){
		cout << "Not even height!";
		exit(100);
	}
	for(int i = 0; i <= row / 2; i++){
		for(int j = 0; j < 2 * i - 1; j++){
			cout << "*";
		}
		cout << endl;
	}
	int lessRow = row -1;
	for(int i = lessRow / 2; i >= 0; i--){
		for(int j = 0; j < (2 * i + 1); j++){
			cout << "*";
		}
		cout << endl;
	}
	return;
}


