#include<iostream>
#include<iomanip>
using namespace std;

void multiply(int x[]);
int main(){
	int base[5] = {3, 5, 7, 2, 4};
	multiply(base);
	for(int i = 0; i < 5; i++){
		cout << setw(3) << base[i] << endl;
	}
	return 0;
}
void multiply(int x[]){
	for(int i = 0; i < 5; i++){
		x[i] *= 2;
	}
	return;
}
