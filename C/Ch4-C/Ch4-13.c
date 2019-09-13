#include <stdio.h>

int addition(int a, int b){
    int c = a + b;
    return c;
}

int main(){
    int z = addition(5, 10); // 利用變數z來儲存函數運算的結果
    printf("%d", z);
    
    return 0;
}
