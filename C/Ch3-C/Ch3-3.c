#include <stdio.h>

int main(){
    int x = 10 + 5;            // 加:x變成15
    int y = 20 - x;            // 減:y變成5
    int z = x * y;             // 乘:z變成75
    double q = (double) x / y; // 除:q變成3
    printf("%d %d %d %.1f", x, y, z, q);
    
    return 0;
}
