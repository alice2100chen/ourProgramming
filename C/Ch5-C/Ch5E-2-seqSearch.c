#include <stdio.h>

int main(){
    int data[5] = {12, 2, 7, 5, 9};
    int data_count = sizeof(data) / sizeof(int);
    int target = 7;
    int found_index = -1;
    for(int i = 0; i < data_count ; i++){
        if(data[i] == target){
            found_index = i;
            break;
        }
    }
    if(found_index == -1){
        printf("無法找到搜尋目標\n");
    }
    else{
        printf("發現搜尋目標\n");
    }

    return 0;
}
