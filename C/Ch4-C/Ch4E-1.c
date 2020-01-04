#include <stdio.h>

int main(){
    int grades[3][3] = {{100, 20, 85}, {95,99,75}, {89,73,92}};
    char * names[3] = {"嘉明", "小美", "阿雄"};

    for(int i = 0; i < 3; i++){
        int sum = 0;
        for(int j = 0; j < 3; j++){
            sum += grades[i][j];
        }
        printf("%s 總分為 %d 分\n", names[i], sum);
    }

    return 0;
}
