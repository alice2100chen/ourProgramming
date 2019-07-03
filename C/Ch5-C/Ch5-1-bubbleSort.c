/*
Ch5-1-bubbleSort.c
實作氣泡排序演算法(函數版)
函數: swap, one_bubble, print_array
版本: 1.0
*/

#include <stdio.h>

// ----- 函數swap: 交換data中，位置x, y的兩筆資料 -----
void swap(int data[], int x, int y){
    int temp = data[x];
    data[x] = data[y];
    data[y] = temp;
}

// ----- 函數one_bubble: 將目前最大的數移到最右邊 -----
void one_bubble(int data[], int end_index){
    for(int j = 0; j < end_index; j++){ // end_index之後(右邊)的數已排好，不需要再排
        if(data[j] > data[j+1]){        // 相鄰兩數比大小，當左邊比右邊大時
            swap(data, j, j+1);         // 交換兩數(大的右移)
        }
    }
}

// -----函數print_array: 印出data中的元素 -----
void print_array(int data[], int arr_len){
    for(int i = 0; i < arr_len; i++){
        printf("%d ", data[i]);
    }
    printf("\n");
}

int main(){
    // ===== 主程式開始 =====
    int data[5] = {4, 1, 3, 5, 2};
    int data_count = sizeof(data) / sizeof(int);    // 資料數 = 陣列長度 = 5個
    // ----------
    for(int i = 0; i < data_count - 1; i++){    // 5個數字，只需排4次，最後一個數會自動排好
        one_bubble(data, data_count-1-i);       // 最右邊的i個數已排好，不需要再排
        printf("第%d回合結果: ", i + 1);        // 印出每回合的結果
        print_array(data, data_count);
    }
    printf("排序結束\n");
    // ===== 主程式結束 =====
    return 0;
}

