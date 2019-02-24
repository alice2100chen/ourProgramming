#include <stdio.h>

int main(){
	int num_visitors[][7] = {
		{70, 10, 14, 7, 25, 30, 50},
		{30, 24, 14, 9, 87, 63, 25},
		{100, 52, 82, 89, 36, 78, 22} 
	};
	const char* day_names[] = {"星期日", "星期一", "星期二", "星期三", "星期四", "星期五", "星期六"};
	
	for(int week_index=0; week_index<3; ++week_index){
		printf("第 %d 個星期\n", week_index+1);
		for(int day_index=0; day_index<7; ++day_index){
			printf("%s %d 人\n", day_names[day_index], num_visitors[week_index][day_index]);}
	}
}
