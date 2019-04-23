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

    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            printf("%d ", num_2d_array[i][j]);
        }
        printf("; ");
    }
    printf("\n");

    for(int i = 0; i < 2; i++){
        for(int j = 0; j < 3; j++){
            printf("%s ", animals_2d[i][j]);
        }
        printf("; ");
    }
    printf("\n");

    return 0;
}
