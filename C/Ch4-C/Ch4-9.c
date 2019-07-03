#include <stdio.h>

int main(){
    int num_visitors[3][7] = {
        {50, 10, 14, 7, 25, 30, 70},
        {30, 24, 14, 9, 87, 63, 25},
        {100, 52, 82, 89, 36, 78, 22} 
    };
    char * day_names[7] = {"星期日", "星期一", "星期二", "星期三", "星期四", "星期五", "星期六"};
    
    for(int week_index = 0; week_index < 3; week_index++){  // 有3個星期的資料，因此是0,1,2
        // 以下這個printf()屬於外層迴圈
        printf("第%d個星期\n", week_index + 1);
        for(int day_index = 0; day_index < 7; day_index++){
            // 以下這個printf()屬於內層迴圈
            printf("%s%d人\n", day_names[day_index], num_visitors[week_index][day_index]);
        }
    }

    return 0;
}
