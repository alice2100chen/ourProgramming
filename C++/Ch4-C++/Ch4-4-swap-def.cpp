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
	return os << ']';
}

void swap(vector<int> &a, int i, int j){
	int temp = a.at(i);
	a.at(i) = a.at(j);
	a.at(j) = temp;
}

int main(){
	vector<int> num_visitors = {70, 10, 14, 7, 25, 30, 50};
	cout << num_visitors << endl;

	swap(num_visitors, 0, 6);
	cout << num_visitors << endl;
}
