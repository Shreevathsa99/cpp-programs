/* This program reads values of a two-dimensional array from the keyboard
and creates tow one-dimensional arrays, which are the average of rows and column.s
	Written by: Shreevathsa
	Date: 24-01-2019.
*/
#include<iostream>
#include<iomanip>
using namespace std;

const int cMax_Rows = 5;
const int cMax_Cols = 6;

void getData      (int table[][cMax_Cols]);
void columnAverage(const int table[][cMax_Cols], float colAvrg[]);
void rowAverage   (const int table[][cMax_Cols], float rowAvrg[]);
void printTables  (const int table[][cMax_Cols], const float rowAvrg[], const float colAvrg[]);

int main(){
	int table[cMax_Rows][cMax_Cols];

	float rowAve [cMax_Rows]    = {0};
	float columnAve [cMax_Cols] = {0};

	getData       (table);
	columnAverage (table, columnAve);
	rowAverage    (table, rowAve);
	printTables   (table, rowAve, columnAve);
	
	return 0;
}

void getData (int table[][cMax_Cols]){
	for(int i = 0; i < cMax_Rows; i++){
		cout << "Enter the integer and key <return> : ";
		for(int j = 0; j < cMax_Cols; j++){ 
			cin  >> table[i][j];
		}
	}
	return;
}
void columnAverage(const int table[][cMax_Cols], float colAvrg[]){
	for(int j = 0; j < cMax_Cols; j++){
		for(int i = 0; i < cMax_Rows; i++){
			colAvrg[j] += table[i][j];
		}
		colAvrg[j] /= cMax_Rows;
	} 
	return;
}
void rowAverage(const int table[][cMax_Cols], float rowAvrg[]){
	for(int i = 0; i < cMax_Rows; i++){
		for(int j = 0; j < cMax_Cols; j++){
			rowAvrg[i] += table[i][j];
		}
		rowAvrg[i] /= cMax_Cols;
	} 
	return;
}

void printTables (const int table[][cMax_Cols], const float rowAvrg[], const float colAvrg[]){
	cout.setf(ios::fixed);
	cout << setprecision(2);
	cout << endl;
	for(int i = 0; i < cMax_Rows; i++){
		for(int j = 0; j < cMax_Cols; j++){
			cout << setw(6) << table[i][j];
		} 	
		cout << "    |  " << rowAvrg[i] << endl;
	}
	cout << "-----------------------------------------\n";
	for(int j = 0; j < cMax_Cols; j++)
		cout << setw(6) << colAvrg[j];
	cout << endl;
	return;
}
