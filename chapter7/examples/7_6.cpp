/* Demonstrate internal flag
 * Written by: Shreevathsa
 * Date: 19/01/2019
 */
#include<iostream>
using namespace std;
int main(){
	cout.fill('*');
	cout << "Internal default     : |";
	cout.width(10);
	cout << -12345 << "|\n";
	cout.setf(ios::internal);
	cout << "Internal set on      : |";
	cout.width(10);
	cout << -12345 << "|\n";
	cout << "Display w/o width    : |"
	     << -12345 << "|\n";
	cout.unsetf(ios::internal);
	return 0;
}
