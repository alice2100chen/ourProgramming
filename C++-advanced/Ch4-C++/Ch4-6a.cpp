#include <iostream>
#include <vector>

using std::vector;
using std::cout;
using std::endl;

int main(){
	vector<int> score_array = {95, 92, 88, 96};

	for(vector<int>temp_vect={0,1,2,3};;){		// create local varaible "vect={0,1,2,3}"
		for(auto &i: temp_vect){		// go through each element in "vect"
			cout << score_array.at(i) << endl;}
		break;			// break after print once
	}
	// using for loop to create local variable is not regular way but a tricky way
	// refer Advance to use {} for limiting scope for local variable 
}





// ================ Advance ================
/* 
 * To know: "Scope" in C/C++; std::iota.
 * To use: use {} to block local variables; use iota to generate increasing sequence{n ~ n+k}
 */
/*
#include <iostream>
#include <vector>
#include <numeric>

using std::vector;
using std::iota;			// refer: https://en.cppreference.com/w/cpp/algorithm/iota
using std::cout;
using std::endl;

int main(){
	vector<int> score_array = {95, 92, 88, 96};

	// use "{}" to make a "block scope" for local variable
	// refer: https://en.cppreference.com/w/cpp/language/scope
	{			
		vector<int> temp_vect(score_array.size());		// score_array.size() = 4
		iota(temp_vect.begin(), temp_vect.end(), 0);		// vect = {0~3}
		for(auto &i: temp_vect){
			cout << score_array.at(i) << endl;}
	}

	// will be error if you want to access temp_vet out of its' scope
//	cout << temp_vect.at(0);			// error: ‘temp_vect’ was not declared in this scope
}
*/
