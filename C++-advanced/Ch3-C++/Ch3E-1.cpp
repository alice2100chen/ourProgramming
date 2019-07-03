#include <iostream>
#include <iomanip>

using std::cout;
using std::endl;

int main(){
	cout << setiosflags(std::ios::fixed) << std::setprecision(1);
	int a = 50, b = 30, c = 6, d = 2;

	cout << ((double)(a-b)/(c+d)) << endl;
}





// ================ Advance ================
/* 
 * To know: Type casting
 * To use: Using (type)variable to do type casting
 */
/*
#include <iostream>
#include <iomanip>

using std::cout;
using std::endl;

int main(){
	cout << setiosflags(std::ios::fixed) << std::setprecision(1);

	cout << (1+2) / (2) << endl;			//print: 1, (X)

	cout << (double)((1+2) / (2)) << endl;		//print: 1.0, (X)(=(double)(3/2) =(double)(1) =1.0)

	cout << ((double)(1+2) / (2)) << endl;		//print: 1.5, (O)
	cout << (((double)1+2) / (2)) << endl;		//print: 1.5, (O)
	cout << ((1+(double)2) / (2)) << endl;		//print: 1.5, (O)
	cout << ((1+2) / (double)(2)) << endl;		//print: 1.5, (O)
}
*/



// ================
/* 
 * To know: Difference between (int)(), rint(), floor(), ceil(), round().
 * Note: There exist -0.0 (negative zero) in IEEE 754(Standard for Floating-Point Arithmetic)
 */
/*
#include <iostream>
#include <iomanip>
#include <cmath>

using std::cout;
using std::endl;

int main(){
	cout << setiosflags(std::ios::fixed) << std::setprecision(1);

	cout << (int)(0.4) << ' ' << (int)(0.5) << endl;	// print: 0,0 (chop off to int)
	cout << (int)(-0.4) << ' ' << (int)(-0.5) << endl;	// print: 0,0

	cout << rint(0.4) << ' ' << rint(0.5) << endl;		// print: 0.0,0.0 (chop off to double)
	cout << rint(-0.4) << ' ' << rint(-0.5) << endl;	// print: 0.0,0.0

	cout << floor(0.4) << ' ' << floor(0.5) << endl;	// print: 0.0,0.0 (<=)
	cout << floor(-0.4) << ' ' << floor(-0.5) << endl;	// print: -1.0,-1.0 (<=)

	cout << round(0.4) << ' ' << round(0.5) << endl;	// print: 0.0, 1.0 (round off)
	cout << round(-0.4) << ' ' << round(-0.5) << endl;	// print: -0.0, -1.0

	cout << ceil(0.4) << ' ' << ceil(0.5) << endl;		// print: 1.0, 1.0 (>=)
	cout << ceil(-0.4) << ' ' << ceil(-0.5) << endl;	// print: -0.0, -0.0
}
*/
