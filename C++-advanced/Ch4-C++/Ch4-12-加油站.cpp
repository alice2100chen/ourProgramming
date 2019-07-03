#include <iostream>

using std::cout;
using std::endl;

int sum(int n){
	if(n <=0){
		return 0;}
	else{
		return n + sum(n-1);}
}

int main(){
	cout << sum(3) << endl;
	cout << sum(10) << endl;
	cout << sum(40) << endl;
}

