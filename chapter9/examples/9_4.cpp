/* This program shows how the same pointer can point to different data variables in different statements.
	Written by: Shreevathsa
	Date: 29-03-2019
*/
#include<iostream>
#include<iomanip>
using namespace std;

int main(){
	int a;
	int b;
	int c;
	int* p;

	cout << "Enter the three numbers and key return: ";
	cin  >> a >> b >> c;

	p = &a;
	cout << setw(3) << *p << endl;
	p = &b;
	cout << setw(3) << *p << endl;
	p = &c;
	cout << setw(3) << *p << endl << endl;
	cout << p << " " << c << " " << *p << " " << &p << endl;
	return 0;
}
