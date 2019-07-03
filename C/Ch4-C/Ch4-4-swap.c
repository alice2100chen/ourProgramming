#include <stdio.h>

int main(){
    int num_visitors[7] = {70, 10, 14, 7, 25, 30, 50};  // 索引0~6代表星期日到六
    printf("%d ", num_visitors[0]);
    printf("%d ", num_visitors[1]);
    printf("%d ", num_visitors[2]);
    printf("%d ", num_visitors[3]);
    printf("%d ", num_visitors[4]);
    printf("%d ", num_visitors[5]);
    printf("%d ", num_visitors[6]);
    printf("\n");

    int temp = num_visitors[0];         // 把星期日的人數70給temp
    num_visitors[0] = num_visitors[6];  // 把星期六的人數50給星期日
    num_visitors[6] = temp;             // 把temp的70給星期六

    printf("%d ", num_visitors[0]);
    printf("%d ", num_visitors[1]);
    printf("%d ", num_visitors[2]);
    printf("%d ", num_visitors[3]);
    printf("%d ", num_visitors[4]);
    printf("%d ", num_visitors[5]);
    printf("%d ", num_visitors[6]);
    printf("\n");

    return 0;
}
