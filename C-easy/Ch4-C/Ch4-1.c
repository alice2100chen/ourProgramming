#include <stdio.h>

int main(){
    int score_array[4] = {85, 92, 88, 96};
    char * animals[7] = {"長頸鹿", "獅子", "老虎", "河馬", "熊", "兔子", "斑馬"};

    for(int i = 0; i < 4; i++){
        printf("%d ", score_array[i]);
    }
    printf("\n");

    for(int i=0; i < 7; i++){
        printf("%s ", animals[i]);
    }
    printf("\n");

    return 0;
}
