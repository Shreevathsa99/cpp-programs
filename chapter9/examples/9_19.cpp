/* Demonstration of pointer to pointer.
	Written by: Shreevathsa
	Date: 31-03-2019
*/
#include<iostream>
using namespace std;

int main(){
	int    a;
	int*   p;
	int**  q;
	int*** r;

	a = 58;
	p = &a;
	q = &p;
	r = &q;

	cout << a << " " << &a << endl << endl;
	cout << *p << " " << p << " "  << &p << endl;
	cout << *q << " " << q << " "  << &q << endl;
	cout << *r << " " << r << " "  << &r << endl;
	
	return 0;
}
