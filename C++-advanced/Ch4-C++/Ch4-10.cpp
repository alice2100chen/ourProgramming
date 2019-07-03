#include <iostream>
#include <vector>
#include <string>

using std::vector;
using std::string;
using std::cout;
using std::endl;

int main(){
	vector<int> num_visitors = {50, 10, 14, 7, 25, 30, 70};
	vector<string> day_names = {"星期日", "星期一", "星期二", "星期三", "星期四", "星期五", "星期六"};
	for(int day_index=0; day_index<7; ++day_index){
		if(num_visitors.at(day_index) > 35){
			cout << day_names.at(day_index) << "  人數爆棚！" << endl;}
		else{
			cout << day_names.at(day_index) << "  需要繼續加油..." << endl;}
	}
}
