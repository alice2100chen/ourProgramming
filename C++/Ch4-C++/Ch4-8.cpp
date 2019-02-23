#include <iostream>
#include <vector>
#include <string>

using std::vector;
using std::string;
using std::cout;
using std::endl;

int main(){	// refer: Ch4-3.cpp
	vector<vector<string>> animals_2d = {
		{"長頸鹿", "獅子", "兔子"},
		{"樹葉", "肉", "紅蘿蔔"},
		{"500", "120", "30"}
	};

	for(int i=0; i<3; ++i){
		for(int j=0; j<3; ++j){
			cout << animals_2d.at(i).at(j) << endl;}}
}
