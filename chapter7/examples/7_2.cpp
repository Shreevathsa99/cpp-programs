/* Demonstrate three control variables.
 * Written by: Shreevathsa99
 * Date: 19/01/2019.
 */
#include<iostream>
using namespace std;
int main(){
	cout << "Test control variables\n";
	cout << "Print with default settings\n";
	cout << 'a' << 'B' << 'C' << endl;

	cout << "Print with width 10\n";
	cout.width(10);
	cout << 'a' << 'B' << 'c' << endl;

	cout << "\nTest fill character with $ char\n";
	cout.width(5);
	cout.fill('$');
	cout << 'a';
	cout.width(5); cout << 'B';
	cout.width(5); cout << 'C';

	cout << "\nResetting default fill char\n";
	cout.fill(' ');
	cout.width(5);
	cout << 'a' << 'B' << 'C' << endl;

	cout << "\nTest precision\n";
	cout.setf(ios::fixed, ios::floatfield);
	cout << "Print without precision\n";
	cout << 123.45678 << endl;

	cout << "Print with precision 0\n";
	cout.precision(0);
	cout << 123.45678 << endl;
	
	cout << "Print with precision 3\n";
	cout.precision(3);
	cout << 123.45678 << endl;

	cout << "Print without precision\n";
	cout << 123.45678 << endl;
	return 0;
}
