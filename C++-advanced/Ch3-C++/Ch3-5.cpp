#include <iostream>

using std::cout;
using std::endl;

int main(){
	int x=10, y=20;

	x = y;
	y = x;

	cout << x << ' ' << y << endl;
}
