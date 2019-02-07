#include<iostream>
using namespace std;

int main(){
	cout << "Enter the integer numbers:\n";
	int sumInt = 0;
	int x;
	int xI = 0;
	while(cin >> x){
		if(sumInt < x ){
			sumInt = x;
			xI++;
		}
	}
	cout << "The biggest number is " << sumInt << " and entered " << xI  << " times" << endl;
}
