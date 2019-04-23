/*
Ch5-2-seqSearch.c
實作循序搜尋演算法
函數: seq_search
版本: 1.0
*/

#include <stdio.h>

// ----- 函數seq_search: 在data中依序搜尋target是否存在；存在就回傳索引值，不存在則回傳-1 -----
int seq_search(int data[], int data_count, int target){
    for(int i = 0; i < data_count; i++){
        if(data[i] == target){  // 在第i個位置找到target
            return i;           // 回傳索引值i
        }
    }
    return -1;                  // for迴圈結束仍沒有找到，回傳-1
}

int main(){
    // ===== 主程式開始 =====
    int data[5] = {12, 2, 7, 5, 9};
    int data_count = sizeof(data) / sizeof(int);    // 資料數 = 陣列長度 = 5個
    int target = 7;
    // ----------
    int found_index = seq_search(data, data_count, target);
    if(found_index == -1){
        printf("無法找到搜尋目標%d\n", target);
    }
    else{
        printf("發現搜尋目標%d, 位於陣列中第%d個位置\n", target, found_index);
    }
    // ===== 主程式結束 =====
    return 0;
}

