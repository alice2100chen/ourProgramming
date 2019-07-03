#include <iostream>

using std::cout;
using std::endl;

int main(){
	int x=10, y=20;

	int temp = x;
	x = y;
	y = temp;

	cout << x << " " << y << endl;
}





// ================ Advance ================
/* 
 * To know: Why do we need pointers.
 * To use: Using pointer(*abc) and reference(&abc).
 * Note: For how to use function, please refer Ch4-4-swap-def.
 * Reference: For more about pointer swap, plese refer " https://tinyurl.com/c-pointer-swap ",
 *		for call by value/reference, please refer " http://wp.mlab.tw/?p=176 "
 */
/*
#include <iostream>

using std::cout;
using std::endl;

void swap_call_by_value(int a, int b){		// (X)
	int temp = a;
	a = b;
	b = temp;
}
void swap_call_by_value_of_pointer(int *a, int *b){		// (O), in C/C++
	int temp = *a;
	*a = *b;
	*b = temp;
}
void swap_call_by_reference(int &a, int &b){		// (O), only in C++, not in C
	int temp = a;
	a = b;
	b = temp;
}

int main(){
	int x=10, y=20;

	swap_call_by_value(x, y);
	cout << x << ',' << y << endl;			// print: 10,20 (X)

	swap_call_by_value_of_pointer(&x, &y);
	cout << x << ',' << y << endl;			// print: 20,10 (O)(10,20 => 20,10)

	swap_call_by_reference(x, y);
	cout << x << ',' << y << endl;			// print: 10,20 (O)(20,10 => 10,20)
}
*/
