#include <iostream>
#include <vector>
#include <string>
#include <numeric>

using std::vector;
using std::string;
using std::iota;			// refer: https://en.cppreference.com/w/cpp/algorithm/iota
using std::cout;
using std::endl;

int main(){	// refer: Ch4-6a.cpp Advance
	vector<string> animals = {"長頸鹿", "獅子", "老虎", "河馬", "熊", "兔子", "斑馬"};

	// use "{}" to make a "block scope" for local variable
	// refer: https://en.cppreference.com/w/cpp/language/scope
	{
		vector<int> temp_vect(animals.size());			// animals.size() = 7
		iota(temp_vect.begin(), temp_vect.end(), 0);		// temp_vect = {0~6}

		for(auto &i: temp_vect){
			cout << animals.at(i) << endl;}
	}
}
