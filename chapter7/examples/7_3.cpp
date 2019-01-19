/* Demonstrate use of skip white space
 * Written by: Shreevathsa.
 * Date: 19/01/2019.
 */
#include<iostream>
using namespace std;

int main(){
	char aChar;

	cout << "Enter <space z>         : ";
	cin  >> aChar;
	cout << "Character read is       : " << aChar;
	cin.unsetf(ios::skipws);
	cin  >> aChar;
	cout << "\nCharacter read is       : " << (int)aChar;
	cout << "\nEnter <space z> again   : ";
	cin  >> aChar;
	cout << "Character read is       : " << (int)aChar;
	cin  >> aChar;
	cout << "\nCharacter read is       : " << (int)aChar;
	cin  >> aChar;
	cout << "\nCharacter read is       : " << (int)aChar;
	cout << endl;
	return 0;
}
