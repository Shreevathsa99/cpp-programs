/* Initialize array with square of index and print it
 * Written by: Shreevathsa
 * Date: 21-01-2019
 */
#include<iostream>
#include<iomanip>
using namespace std;

const int cARY_SIZE = 5;

int main(){
	int sqrAry[cARY_SIZE];
	for(int i =0; i< cARY_SIZE; i++)
		sqrAry[i] = i * i;
	cout << "Element\tSquare\n";
	cout << "=======\t======\n";
	for(int i = 0; i < cARY_SIZE; i++){
		cout << setw(5) << i << "\t";
		cout << setw(5) << sqrAry[i] << endl;
	}
	return 0;
}
