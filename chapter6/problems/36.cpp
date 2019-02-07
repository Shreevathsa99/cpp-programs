#include<iostream>
using namespace std;

float avegInt(int, int);
//float avegFlot(float, float); 

int main(){
	cout << "Enter the integer numbers:\n";
	int sumInt = 0;
	int x;
	int xI = 0;
	while(cin >> x){
		if(x < 0){
			sumInt += x;
			xI++;
		}
	}
	/*cout << "Enter the floating point numbers:\n";
	float sumFlot = 0.0;
	float y;
	float yI = 0.0;
		while(cin >> y){
		if(y > 0.0){
			sumFlot += y;
			yI++;
		}
	}*/
	float avegOne = avegInt(sumInt, xI);
	//float avegTwo = avegFlot(sumFlot, yI);

	cout << "The average of integer number is:     " << avegOne << endl;
	//cout << "The average of float point number is: " << avegTwo << endl;
}

float avegInt(int sum, int i){
	return static_cast<float>(sum) / i;
}
/*float avegFlot(float sum, float i){
	return(sum / i);
}*/
