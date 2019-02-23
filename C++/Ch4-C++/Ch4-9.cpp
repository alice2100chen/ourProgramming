#include <iostream>
#include <vector>
#include <string>

using std::vector;
using std::string;
using std::cout;
using std::endl;

int main(){
	vector<vector<int>> num_visitors = {
		{70, 10, 14, 7, 25, 30, 50},
		{30, 24, 14, 9, 87, 63, 25},
		{100, 52, 82, 89, 36, 78, 22} 
	};
	vector<string> day_names = {"星期日", "星期一", "星期二", "星期三", "星期四", "星期五", "星期六"};

	for(int week_index=0; week_index<3; ++week_index){
		cout << "第 " << week_index+1 << " 個星期" << endl;
		for(int day_index=0; day_index<7; ++day_index){
			cout << day_names.at(day_index) << ' ' << num_visitors.at(week_index).at(day_index) << " 人" << endl;}
	}
}
