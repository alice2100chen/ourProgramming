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
	os << ']';
	return os;
}

int main(){
	vector<int> num_visitors = {70, 10, 14, 7, 25, 30, 50};

	cout << num_visitors << endl;


	int temp = num_visitors.at(0);
	num_visitors.at(0) = num_visitors.at(6);
	num_visitors.at(6) = temp;

	cout << num_visitors << endl;
}
