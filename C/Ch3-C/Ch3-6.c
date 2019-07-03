#include <stdio.h>

int main(){
    int x = 10;     // 交換前的x為10
    int y = 20;     // 交換前的y為20
    int temp = x;   // 把x值給temp
    x = y;          // 把y值給x
    y = temp;       // 把temp值給y
    printf("%d %d\n", x, y);

    return 0;
}
