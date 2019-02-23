#include <iostream>
#include <vector>

using std::vector;
using std::ostream;
using std::cout;
using std::endl;

ostream &operator<<(ostream &os, vector<int> vect){
	os << '[';
	for(auto &v: vect){
		os << v << (&v==&vect.back()? "":", ");}
	os << ']' << endl;
	return os;
}

void swap(vector<int> &a, int i, int j){
	int temp = a[i];
	a[i] = a[j];
	a[j] = temp;
}

int main(){
	vector<int> num_visitors = {70, 10, 14, 7, 25, 30, 50};
	cout << num_visitors;

	swap(num_visitors, 0, 6);
	cout << num_visitors;
}
