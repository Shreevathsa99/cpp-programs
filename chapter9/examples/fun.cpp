#include<iostream>
using namespace std;

int main(){
	int a = 1;
	int* p;
	int b = 2;
	int* q;
	
	p = &a;
	q = &b;

	p = q;

	cout << a << " " << b << endl;
	cout << *p << " " << *q << endl;
	return 0;
}
