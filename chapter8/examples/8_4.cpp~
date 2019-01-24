/* Read data from a file into an array.
 * Build frequency array & print the data with histogram.
 * 	Written by: Shreevathsa
 * 	Date; 21-01-2019.
 */
#include<iostream>
#include<iomanip>
#include<fstream>
using namespace std;

const int cMAX_ELMNTS = 100;
const int cANLYS_RANGE =  19;

int getData (int data [], int size, int range);
void printData  (const int data[], int size, int lineSize);
void makeFrequency (int numbs[], int size, int frequency[], int range);
void makeHistogram (int freq[], int range);

int main(){
	int size;
	int nums[cMAX_ELMNTS];
	int frequency[cANLYS_RANGE + 1];

	size = getData(nums, cMAX_ELMNTS, cANLYS_RANGE);
	printData (nums, size, 10);

	makeFrequency(nums, size, frequency, cANLYS_RANGE);
	makeHistogram(frequency, cANLYS_RANGE);
	return 0;
}//main

int getData (int data [], int size, int range){
	ifstream fsData;
	fsData.open("histogrm.dat");
	if(!fsData)
		cerr << "Error opening file\a\a\n", exit (100);
	
	int dataIn;
	int loader = 0;
	while(loader < size && fsData >> dataIn)
		if(dataIn >= 0 && dataIn <= range)
			data[loader++] = dataIn;
		else
			cout <<"Data point" << dataIn << " invalid. Ignored.\n";
		if(loader == size && (fsData >> dataIn))
			cout << "\nToo much data. Process what read.\n";
		return loader;
}//getData
void printData  (const int data[], int size, int lineSize){
	cout << endl << endl;
	for(int i = 0, numPrinted = 0; i < size; i++){
		numPrinted++;
		cout << setw(3) << data[i];
		if(numPrinted >= lineSize){
			cout << endl;
			numPrinted = 0;
		}// if
	}// for
	cout << endl << endl;
	return;
}//printData
void makeFrequency (int nums[], int size, int frequency[], int range){
	for(int i = 0; i <= range; i++)
		frequency[i] = 0;

	for(int i = 0; i < size; i++)
		frequency[nums[i]]++;
	return;
}//makeFrequency
void makeHistogram (int freq[], int range){
	for(int i = 0; i <= range; i++){
		cout << setw(3) << i << setw(3) << freq[i];
		for(int j = 1; j <= freq[i]; j++)
			cout << "*";
		cout << endl;
	}//for i
	return;
}//makeHistogram
