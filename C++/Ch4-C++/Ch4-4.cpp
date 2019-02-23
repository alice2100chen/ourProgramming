#include <iostream>
#include <vector>

using std::vector;
using std::ostream;
using std::cout;
using std::endl;

ostream &operator<<(ostream &os, vector<int> vect){			// print array directly
	os << '[';
	for(auto &i: vect){
		os << i << (&i==&vect.back()? '\0':' ');}
	os << ']';
	return os;
}

int main(){
	vector<vector<int>> num_array = {
		{1, 2, 3},
		{4, 5, 6},
		{7, 8, 9}
	};

	auto x = num_array.at(0);		// x is an array (vector)
	auto y = num_array.at(0).at(2);		// y is an int
	num_array.at(2).at(1) = -8;

	cout << x << endl;
	cout << y << endl;
	cout << num_array.at(2).at(1) << endl;
}





// ================ C-Style ================
/*
#include <iostream>
#include <vector>

using std::vector;
using std::cout;
using std::endl;

int main(){
	vector<vector<int>> num_array = {
		{1, 2, 3},
		{4, 5, 6},
		{7, 8, 9}
	};

	auto x = num_array.at(0);
	auto y = num_array.at(0).at(2);
	num_array.at(2).at(1) = -8;

	for(auto &i: x){
		cout << i << (&i==&x.back()? '\n':' ');}
	cout << y << endl;
	cout << num_array.at(2).at(1) << endl;
}
*/
