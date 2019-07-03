#include <stdio.h>

int main(){
    int x = 10; // 交換前的x為10
    int y = 20; // 交換前的y為20
    x = y;      // 把y值給x
    y = x;      // 把x值給y
    printf("%d %d\n", x, y);

    return 0;
}
