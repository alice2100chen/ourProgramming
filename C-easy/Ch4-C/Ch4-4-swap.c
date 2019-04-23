#include <stdio.h>

int main(){
    int num_visitors[7] = {70, 10, 14, 7, 25, 30, 50};  // 索引0~6代表星期日到六
    for(int i = 0; i < 7; i++){
        printf("%d ", num_visitors[i]);
    }
    printf("\n");

    int temp = num_visitors[0];         // 把星期日的人數70給temp
    num_visitors[0] = num_visitors[6];  // 把星期六的人數50給星期日
    num_visitors[6] = temp;             // 把temp的70給星期六
    for(int i = 0; i < 7; i++){
        printf("%d ", num_visitors[i]);
    }
    printf("\n");

    return 0;
}
