/* Demonstrate numeric flags.
 * Written by: Shreevathsa
 * Date: 19/01/2019
 */
#include<iostream>
using namespace std;

int main(){
	cout << "\nNumbers with showbase and uppercase off\n";
	cout.setf(ios::dec, ios::basefield);
	cout << "93 as decimal     :";
	cout.width(5);
	cout << 93 << endl;
	cout.setf(ios::oct, ios::basefield);
	cout << "93 as octal       :";
	cout.width(5);
	cout << 93 << endl;
	cout.setf(ios::hex, ios::basefield);
	cout << "93 as hexadecimal :";
	cout.width(5);
	cout << 93 << endl;
	cout << "\nNumbers with showbase and uppercase on\n";
	cout.setf(ios::showbase);
	cout.setf(ios::dec, ios::basefield);
	cout << "93 as decimal     :";
	cout.width(5);
	cout << 93 << endl;
	cout.setf(ios::oct, ios::basefield);
	cout << "93 as octal       :";
	cout.width(5);
	cout << 93 << endl;
	cout.setf(ios::hex, ios::basefield);
	cout.setf(ios::uppercase);
	cout << "93 as hexadecimal :";
	cout.width(5);
	cout << 93 << endl;
	cout.unsetf(ios::hex);
	cout.unsetf(ios::uppercase);
	cout.setf(ios::dec);
	return 0;
}
