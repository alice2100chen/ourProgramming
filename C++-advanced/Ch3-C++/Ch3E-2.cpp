#include <iostream>
#include <iomanip>
#include <cmath>

using std::cout;
using std::endl;

int main(){
	cout << setiosflags(std::ios::fixed) << std::setprecision(1);
	int a=4, b=3;
	double c = pow(pow(a,2)+pow(b,2), 0.5);
	
	cout << c << endl;
}
