#include <stdio.h>

int main(){
	int num_visitors[] = {50, 10, 14, 7, 25, 30, 70};
	const char* day_names[] = {"星期日：", "星期一：", "星期二：", "星期三：", "星期四：", "星期五：", "星期六："};

	for(int day_index=0; day_index<7; ++day_index){
		printf("%s %d 人\n", day_names[day_index], num_visitors[day_index]);}
}
