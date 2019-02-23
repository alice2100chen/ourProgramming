#include <iostream>
#include <vector>
#include <string>

using std::vector;
using std::string;
using std::cout;
using std::endl;

int main(){
	vector<string> contest_names = {"游泳", "單車", "跑步"};
	vector<string> times = {"30分鐘", "1小時", "1小時半"};

	for(int i=0; i<3; ++i){
		cout << contest_names.at(i) << " : " << times.at(i) << endl;}
}

