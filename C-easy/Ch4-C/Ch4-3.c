#include <stdio.h>

int main(){
    int num_2d_array[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };
    char * animals_2d[2][3] = {
        {"長頸鹿", "獅子", "兔子"},
        {"樹葉", "肉", "紅蘿蔔"}
    };

    printf("%d ", num_2d_array[0][0]);
    printf("%d\n", num_2d_array[1][1]);

    printf("%s ", animals_2d[0][1]);
    printf("%s\n", animals_2d[1][1]);

    return 0;
}
