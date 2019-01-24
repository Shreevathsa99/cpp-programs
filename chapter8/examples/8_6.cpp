/* Test driver for insertion sort.
	Written by: Shreevathsa
	Date: 24-01-2019
*/
#include<iostream>
#include<iomanip>
using namespace std;

#define cMax_Ary_Size 15

void insertionSort (int list[], int last);

int main(){
	int ary[cMax_Ary_Size] = {89, 72, 3, 15, 21, 57, 61, 44, 19, 98, 5, 77, 39, 59, 61};
	
	cout << "Unsorted array: ";
	for(int i = 0; i < cMax_Ary_Size; i++){
		cout << setw(3) << ary[i];
	}
	
	insertionSort(ary, cMax_Ary_Size - 1);

	cout << "\nSorted array:   ";
	for(int i = 0; i < cMax_Ary_Size; i++){
		cout << setw(3) << ary[i];
	}
	cout << endl;
	return 0;
}

void insertionSort(int list[], int last){
	for(int current = 1; current <= last; current++){
		int walker;
		int located = false;
		int temp = list[current];
		for(walker = current - 1; walker >= 0 && !located;){
			if(temp < list[walker]){
				list[walker + 1] = list[walker];
				walker--;
			}
			else
				located = true;
		}
		list[walker + 1] = temp;
	}
	return;
}
