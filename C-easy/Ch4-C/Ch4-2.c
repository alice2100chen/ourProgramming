#include <stdio.h>

int main(){
    int score_array[4] = {85, 92, 88, 96};
    int x = score_array[0]; // x會被設定為85
    printf("%d\n", x);

    score_array[0] = 95;    // score_array變成[95, 92, 88, 96]
    x = score_array[0];     // x會被設定為95
    printf("%d\n", x);

    return 0;
}

