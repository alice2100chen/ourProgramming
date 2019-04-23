#include <stdio.h>

int main(){
    int num_visitors[7] = {70, 10, 14, 7, 25, 30, 50};
    char * day_names[7] = {"日", "一", "二", "三", "四", "五", "六"};

    for(int day_index = 0; day_index < 7; day_index++){
        printf("星期%s： %d 人\n", day_names[day_index], num_visitors[day_index]);
    }

    return 0;
}
