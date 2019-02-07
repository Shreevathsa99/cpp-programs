#include<iostream>
using namespace std;

void pattern();

int main(){
	pattern();
	return 0;
}

void pattern(){
	cout << "Enter height of the pattern to be printed:\n";
	int row;
	cin  >> row;
	for(int i = 0; i < row; i++){
		for(int j = 0; j < 14; j++){
			cout << "*";
		}
		cout << endl;
	}
}
