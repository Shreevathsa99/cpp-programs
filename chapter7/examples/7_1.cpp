/* Test for open and close errors.
 * Written by: Shreevathsa.
 * Date: 19/01/2019.
 */
#include<iostream>
#include<fstream>
#include<cstdlib>
using namespace std;

int main(){
	cout << "Start open/close error test\n";
	ifstream fsDailyTemps;
	fsDailyTemps.open("ch7TEMPS.DAT");
	if(!fsDailyTemps){
		cout << "\aError 100 opening ch7TEMPS.DAT\n";
		exit(100);
	}
	fsDailyTemps.close();
	if(fsDailyTemps.fail()){
		cerr << "\aError 102 closing ch7TEMPS.DAT\n";
		exit(102);
	}
	cout << "End open/close error test\n";
	return 0;
}
