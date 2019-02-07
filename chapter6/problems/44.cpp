#include<iostream>
using namespace std;

void print();

int main(){
	print();
	return 0;
}

void print(){
	int x;
	int sum = 0;
	cout << "Enter your numbers: <EOF> to stop\n";
	while(cin >> x){
		sum += x;
		cout << "Total: " << sum << endl;
	}
	return;
}
