#include <stdio.h>

int main(){
    int score_array[4] = {85, 92, 88, 96};
    char * animals[7] = {"長頸鹿", "獅子", "老虎", "河馬", "熊", "兔子", "斑馬"};

    printf("%d %d\n", score_array[0], score_array[2]);
    printf("%s %s\n", animals[2], animals[6]);

    return 0;
}
