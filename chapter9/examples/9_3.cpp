/* This program adds two numbers using pointers, to demonstrate the concept of pointers.
	Written by: Shreevathsa
	Date: 29-03-2019
*/
#include<iostream>
using namespace std;
int main(){
	int a; 
	int b;
	int r;
	int* pa = &a;
	int* pb = &b;
	int* pr = &r;

	cout << "Enter the first numbers: ";
	cin  >> *pa;
	cout << "\nEnter the second number: ";
	cin  >> *pb;

	*pr = *pa + *pb;

	cout << endl;
	cout << *pa << " + " << *pb << " is " << *pr << endl;
	cout << a  << " + " << b << " is " << r << endl;
	return 0;
}
