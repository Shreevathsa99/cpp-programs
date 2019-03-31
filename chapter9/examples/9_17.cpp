/*Demonstrating Pointers to functions.
	Written by: Shreevathsa.
	Date: 29-03-2019.
*/
#include<iostream>
using namespace std;

void exchange1(int , int);
void exchange2(int&, int&);
void exchange3(int* , int*);


int main(){
	int a1 = 5;
	int b1 = 7;
	int a2 = 5;
	int b2 = 7;
	int a3 = 5;
	int b3 = 7;

	exchange1(a1, b1);
	exchange2(a2, b2);
	exchange3(&a3, &b3);

	cout << a1 << "\t" << b1 << endl;
	cout << a2 << "\t" << b2 << endl;
	cout << a3 << "\t" << b3 << endl;
	
	return 0;
}

void exchange1(int x, int y){
	int temp = x;
	x = y;
	y = temp;
	return;
}
void exchange2(int& x, int& y){
	int temp = x;
	x = y;
	y = temp;
	return;
}
void exchange3(int* px, int* py){
	int temp = *px;
	*px = *py;
	*py = temp;
	return;
}
