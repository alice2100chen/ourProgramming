/*
Ch5E-1-bubbleSort.c
實作鐵人三項成績分析，輸出排名
函數: swap_int, swap_string, print_arr_int, print_arr_string, one_bubble
版本: 1.0
*/

#include <stdio.h>

// ----- 函數swap_int: 交換data中，位置x, y的兩筆資料 -----
void swap_int(int data[], int x, int y){
    int temp = data[x];
    data[x] = data[y];
    data[y] = temp;
}

// -----函數print_arr_string: 印出data中的元素 -----
void print_arr_string(char * data[], int arr_len){
    for(int i = 0; i < arr_len; i++){
        printf("%s ", data[i]);
    }
    printf("\n");
}

// ----- 函數one_bubble: 將目前最大的數移到最右邊 -----
void one_bubble(int data[], char * animal_names[], int i, int data_count){
    for(int j = 0; j < data_count-1-i; j++){    // 將陣列data中，第i小的數移到第i個位置
        if(data[j] > data[j+1]){                // 相鄰兩數比大小，當左邊比右邊大時
            swap_int(data, j, j+1);             // 交換兩數(大的右移)
            swap_string(animal_names, j, j+1);
        }
    }
}

int main(){
    // ===== 主程式開始 =====
    int data_2d[4][3] = {
        {90, 30, 40},
        {20, 40, 90},
        {70, 80, 70},
        {60, 30, 20}
    };
    int data_sum[4] = {0, 0, 0 ,0};
    int data_count = sizeof(data_sum) / sizeof(int);

    char * animal_names[4] = {"企鵝", "兔子", "黑熊", "烏龜"};
    int animal_num = sizeof(animal_names) / sizeof(char*);
    // ----------
    for(int i = 0; i < animal_num; i++){
        for(int j = 0; j < 3; j++){
            data_sum[i] += data_2d[i][j];
        }
    }

    printf("總分統計結果如下:\n");
    print_arr_string(animal_names, animal_num);
    print_arr_int(data_sum, data_count);

    for(int i = 0; i < data_count - 1; i++){                // 4個動物，只需排3次，最後一個數會自動排好
        one_bubble(data_sum, animal_names, i, data_count);  // 右邊已排好的不需要再排
        printf("第 %d 回合結果:\n", i);                     // 印出每回合結果
        for(int j = 0; j < 4; j++){
            printf("[%s, %d]\n", animal_names[j], data_sum[j]); // 將分數連同動物名字印出來
        }
        printf("\n");
    }
    printf("排序結束\n");

    // 印出前三名
    for(int i = 0; i < 3; i++){
        // 分數最高的排在最右邊，因此要用data_count去扣掉i才能取得前三大的
        printf("第 %d 名: %s\n", i+1, animal_names[data_count-i-1]);
    }
    // ===== 主程式結束 =====
    return 0;
}
