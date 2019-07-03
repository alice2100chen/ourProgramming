#include <stdio.h>

int main(){
    int score_array[4] = {95, 92, 88, 96};  // 陣列中有4個元素
    // for迴圈會執行printf() 4次，因為0,1,2,3共有4個數值
    // i在每一回合的值分別是0, 1, 2, 3
    for(int i = 0; i < 4; i++){
        printf("%d\n", score_array[i]);
    }

    return 0;
}
