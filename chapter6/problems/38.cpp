#include<iostream>
#include<iomanip>
using namespace std;

void pattern();

int main(){
	pattern();
	return 0;
}

void pattern(){
	for(int i = 0; i < 9; i++){
		for(int j = 1; j < 10 - i * 1; j++){
			cout << setw(3) << j; 
		}
		cout << endl;
	}
	return;
}
