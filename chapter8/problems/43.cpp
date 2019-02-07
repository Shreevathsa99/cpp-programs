/* The guessing game board
	Written by: Shreevathsa
	Date: 28-01-2019.
*/
#include<iostream>
#include<iomanip>
using namespace std;

void printChoice();
void choice(int, char carChoice[], int riskedPoints[]);
void randProp(int []);


int main(){
	printChoice();
	cout << "How much points would you like:  ";
	int points;
	cin  >> points;
	cout << "How many guesses would you like: ";
	int guess;

	cin  >> guess;
	char carChoice[guess];

	int riskedPoints[guess];
	
	//for(int i = 0; i < guess; i++){
	//cout << carChoice[i] << "\t" << riskedPoints[i] << endl;

}
void randProp(int ary[]){
	int randNum = rand() % 37;
}

void choice(int guess, char carChoice[], int riskedPoints[]){
	for(int i = 0; i < guess; i++){
		cout << "Guess " << i + 1 << "\t:" << endl;
		cout << "Enter your choice: ";
		cin  >> carChoice[i];
		cout << "Points at risk? ";
		cin  >> riskedPoints[i];
	}
	return;

}

void printChoice(){
	cout << endl << endl << "Guesses Choices :\n"; 
	cout << setw(3) << "O" << "  Odd\n";
	cout << setw(3) << "E" << "  Even\n";
	cout << setw(3) << "L" << "  Low\n";
	cout << setw(3) << "M" << "  Med\n";
	cout << setw(3) << "H" << "  High\n";
	cout << setw(3) << "F" << "  Left\n";
	cout << setw(3) << "C" << "  Center\n";
	cout << setw(3) << "R" << "  Right\n";
	cout << setw(3) << "N" << "  Number\n";
	
	cout << endl; 
	cout << "The Guessing Game Board :\n";
	cout << "----------------------------\n";

	cout << "       " << setw(5) << "01" << setw(7) << "02" << setw(7) << "03" << endl;

	cout << "   LOW    " << setw(2) <<  "04" << setw(7) << "05" << setw(7) << "06" << endl;
	
	cout << "       " << setw(5) << "07" << setw(7) << "08" << setw(7) << "09" << endl;
	
	cout << "       " << setw(5) << "10" << setw(7) << "11" << setw(7) << "12" << endl;

	cout << "----------------------------\n";

	cout << "       " << setw(5) << "13" << setw(7) << "14" << setw(7) << "15" << endl;
	
	cout << "  MEDIUM  " << setw(2) <<  "16" << setw(7) << "17" << setw(7) << "18" << endl;
	
	cout << "       " << setw(5) << "19" << setw(7) << "20" << setw(7) << "21" << endl;
	
	cout << "       " << setw(5) << "22" << setw(7) << "23" << setw(7) << "24" << endl;
	
	cout << "----------------------------\n";

	cout << "       " << setw(5) << "25" << setw(7) << "26" << setw(7) << "27" << endl;
	
	cout << "   HIGH   "<< setw(2) <<  "28" << setw(7) << "29" << setw(7) << "30" << endl;
	
	cout << "       " << setw(5) << "31" << setw(7) << "32" << setw(7) << "33" << endl;
	
	cout << "       " << setw(5) << "34" << setw(7) << "35" << setw(7) << "36" << endl;

	cout << "----------------------------\n";

	cout << "         LEFT " << " CENTER " << " RIGHT  " << endl;

	return;
}
