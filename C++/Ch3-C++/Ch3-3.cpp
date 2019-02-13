#include <iostream>
#include <iomanip>

using std::cout;
using std::endl;
using std::ios;
using std::setprecision;

int main(){
	int x = 10+5;
	int y = 20-x;
	int z = x*y;
	double q = (double)x/y;

//	cout << x << ' ' << y << ' ' << z << ' ' << q << ' ' << endl;		// print q as "3"
	cout << setiosflags(ios::fixed) << setprecision(1);		// set iomanip
	cout << x << ' ' << y << ' ' << z << ' ' << q << ' ' << endl;		// print q as "3.0"
}





// ================ Advance ================
/* 
 * To know: Input/output manipulators
 * To use: "<iomanip>", "setprecision()", "setiosflags(ios::fixed)"
 * Note: Once you use iomanip, it will change cout's behavior from now on.
 */
/*
#include <iostream>
#include <iomanip>

using std::cout;
using std::endl;

int main(){
	double a = 3.2, b = 1.0;

	cout << 456.0 << endl;		// print: 456
	cout << a << endl;		// print: 3.2
	cout << b << endl;		// print: 1

//-----
	cout << setiosflags(std::ios::fixed);
//-----
	cout << a << endl;		// print: 3.200000
	cout << b << endl;		// print: 1.000000

//-----
	cout << std::setprecision(4);
//-----

	cout << a << endl;		// print: 3.2000
	cout << 456.0 << endl;		//print: 456.0000

	cout << std::setprecision(2) << b << endl;	// print: 1.00
	cout << 456.0 << endl;		//print: 456.00
}
*/
