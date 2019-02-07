#include<iostream>
#include<iomanip>
using namespace std;

int main(){
	int rows = 10;
	int count = 0;
	
	int ary1[rows];
	int ary2[rows];
	
	cout << "Enter the first array element\n";
	for(int i = 0; i < rows; i++){
		scanf("%d",&ary1[i]);
	}
	
	cout << "Enter the second array element\n";
	for(int i = 0; i < rows; i++){
		scanf("%d",&ary2[i]);
	}

	for(int i = 0; i < rows; i++){
		if(ary1[i] == ary2[i]){
			count++;
		}
	}
	printf("\nNo. of elements which are equal are: %d\n", count);
	return 0;
}
