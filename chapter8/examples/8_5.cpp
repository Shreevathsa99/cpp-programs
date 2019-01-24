/* Generate a random number permutation.
 * Written by: Shreevathsa.
 * Date: 23-01-2019.
 */
#include<iostream>
#include<iomanip>
#include<cstdlib>
using namespace std;

const int cAry_Size = 20;

void bldPerm (int randNos[]);
void printData (int data[], int size, int lineSize);

int main(){
	int randNos [cAry_Size];

	cout << "Begin Random Permutation Generation";

	bldPerm (randNos);
	printData(randNos, cAry_Size, 10);
}

void bldPerm(int randNos[]){
	int haveRand[cAry_Size] = {0};

	for(int i = 0; i < cAry_Size; i++){
		int randNo;
		do{
			randNo = rand() % cAry_Size;
		}
		while(haveRand[randNo] == 1);
		haveRand[randNo] = 1;
		randNos[i] = randNo;
	}//for
	return;
}//bldPermbldPerm

void printData(int data[], int size, int lineSize){
	printf("\n");
	for(int i = 0, numPrinted = 0; i < size; i++){
		numPrinted++;
		cout << setw(3) << data[i];
		if(numPrinted >= lineSize){
			cout << endl;
			numPrinted = 0;
		}//if
	}//for
	cout << endl;
	return;
}
