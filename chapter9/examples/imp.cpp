/* Demonstration of function returning pointers
	Written by: Shreevathsa.
	Date: 31-03-2019.
*/
#include<iostream>
using namespace std;

int* smaller(int* , int*);

int main(){
	int a;
	int b;
	int *p;

	cout << "Enter a number and return key\n";
	cin  >> a >> b;
	p = smaller(&a, &b);

	cout << "The smallest number is: " << *p << endl;

	return 0;
}
int* smaller(int* px, int* py){
	return(*px < *py ? px : py);
}
