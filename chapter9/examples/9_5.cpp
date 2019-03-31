/* This program shows how we can use different pointers to point to the same data variable.
	Written by: Shreevathsa.
	Date: 29-03-2019.
*/
#include<iostream>
using namespace std;

int main(){
	int a;
	int* p = &a;
	int* q = &a;
	int* r = &a;

	cout << "Enter a number: ";
	cin  >> a;

	cout << *p << endl;
	cout << *q << endl;
	cout << *r << endl;

	return 0;
}
