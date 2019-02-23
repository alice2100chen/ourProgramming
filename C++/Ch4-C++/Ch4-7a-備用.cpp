#include <iostream>
#include <vector>
#include <string>

using std::vector;
using std::string;
using std::cout;
using std::endl;

int main(){	// refer: Ch4-6a.cpp Advance & Ch4-6b.cpp & Ch4-7.cpp
	vector<int> num_visitors = {70, 10, 14, 7, 25, 30, 50};
	vector<string> day_names = {"日", "一", "二", "三", "四", "五", "六"};

	for(int day_index=0; day_index<7; ++day_index){
		cout << "星期" << day_names.at(day_index) << "： " << num_visitors.at(day_index) << " 人" << endl;}
}
