/*Read a number series and print it reversed.
 * Written by: Shreevathsa
 * Date: 21-01-2019
 */
#include<iostream>
#include<iomanip>
using namespace std;

int main(){
	int numbers[50];

	cout << "You may enter up tp 50 integers:\n";
	cout << "How many would you like to enter? ";
	int readNum;
	cin  >> readNum;
	
	if(readNum > 50)
		readNum = 50;

	cout << "\nEnter your numbers: \n";
	for(int i = 0; i < readNum; i++){
		cin >> numbers[i];
	}

	cout << "\nYour numbers reversed are: \n";
	int numPrinted = 0;
	for(int i = readNum - 1; i >= 0; i--){
		cout << setw(3) << numbers[i];
		if(numPrinted < 9)
			numPrinted++;
		else{
			printf("\n");
			numPrinted = 0;
		}
	}
	return 0;
}
