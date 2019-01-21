/* Programs prints 10 numbers per line
 * Written by: Shreevathsa
 * Date: 21-01-2019
 */
#include<iostream>
#include<iomanip>
using namespace std;

int main(){
	int cSize = 20;
	int list[20];
	int numPrinted = 0;
	for(int i = 0; i < cSize; i++){
		list[i] = i;
	}
	for(int i = 0; i < cSize; i++){
		cout << setw(3) << list[i];
		if(numPrinted < 9)
			numPrinted++;
		else{
			cout << endl;
			numPrinted = 0;
		}
	}
	return 0;
}
