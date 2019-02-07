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
