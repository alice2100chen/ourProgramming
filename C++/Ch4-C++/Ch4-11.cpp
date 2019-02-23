#include <iostream>
#include <iomanip>

using std::cout;
using std::endl;
using std::setprecision;

double factorial(double n){
	if(n <= 1){
		return 1;}
	else{
		return n * factorial(n-1);}
}

int main(){
	cout << setprecision(48);
	cout << factorial(3) << endl;
	cout << factorial(10) << endl;
	cout << factorial(40) << endl;			//not precise enough for double from 23!
}
