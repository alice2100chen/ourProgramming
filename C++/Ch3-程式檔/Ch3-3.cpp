#include <iostream>
#include <iomanip>

using std::cout;
using std::endl;
//using std::ios;
//using std::setprecision;

int main(){
	int x = 10+5;
	int y = 20-x;
	int z = x*y;
	double q = (double)x/y;

	cout << x << " " << y << " " << z << " " << q << " " << endl;
//	cout << setiosflags(ios::fixed) << setprecision(1)			//3->3.0
//		<< x << " " << y << " " << z << " " << q << " " << endl;
}
