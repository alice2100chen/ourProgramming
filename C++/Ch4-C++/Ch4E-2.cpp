#include <iostream>
#include <vector>
#include <string>

using std::vector;
using std::string;
using std::cout;
using std::endl;

int main(){
	vector<vector<int>> grades = {{100, 20, 85}, {95,99,75}, {89,73,92}};
	vector<string> names = {"嘉明", "小美", "阿雄"};

	for(int i=0; i<3; ++i){
		int sum = 0;
		for(int j=0; j<3; ++j){
			sum += grades.at(i).at(j);}
		cout << names.at(i) << " 總分為 " << sum << " 分" << endl;
	}
}

