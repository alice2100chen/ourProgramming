/*
Ch5-3-binarySearch.c
實作二分搜尋演算法
函數: binary_search, print_array
版本: 1.0
*/

#include <iostream>

using namespace std;

// ----- 函數binary_search: 遞迴尋找target -----
int binary_search(int data[], int left, int right, int target){
    if(left > right){                           // 找不到
        return -1;
    }

    int middle = (int)((right-left) / 2 + left);// 取得left~right正中間的索引值(middle)
    if(data[middle] > target){                  // 中間的數比目標值還大->往左邊找
        return binary_search(data, left, middle-1, target);
    }
    else if(data[middle] < target){             // 中間的數比目標值還小->往右邊找
        return binary_search(data, middle+1, right, target);
    }
    else{                                       // 找到目標值(data[middle] == target)
        return middle;
    }
}

// -----函數print_array: 印出data中的元素 -----
void print_array(int data[], int arr_len){
    for(int i = 0; i < arr_len; i++){
        cout << data[i] << " ";
    }
    cout << endl;
}

int main(){
    // ===== 主程式開始 =====
    int data[11] = {2, 3, 5, 7, 9, 11, 12, 15, 20, 22, 25}; // 已依照大小排列好的數列
    int data_count = sizeof(data) / sizeof(int);
    int target = 7;
    // ----------
    int found_index = binary_search(data, 0, data_count-1, target); // 在陣列位置0~data_count-1(全部)中搜尋
    if(found_index == -1){
        cout << "無法找到搜尋目標" << target << endl;
    }
    else{
        cout << "發現搜尋目標" << target << ", 位於陣列中第" << found_index << "個位置" << endl;
    }
    // ===== 主程式結束 =====
    return 0;
}

