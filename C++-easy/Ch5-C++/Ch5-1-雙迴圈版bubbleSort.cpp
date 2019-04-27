/*
Ch5-bubbleSort.cpp
實作氣池排序演算法(雙迴圈)
函數: print_array
版本: 1.0
*/

#include <iostream>

using namespace std;

void print_array(int data[], int arr_len){
    for(int i = 0; i < arr_len; i++){
        cout << data[i] << " ";
    }
    cout << endl;
}

int main(){
    int data[5] = {4, 1, 3, 5, 2};   // 資料數 = 陣列長度 = 5個
    int data_count = sizeof(data) / sizeof(int);
    // 內層迴圈名稱(j)需和外層(i)不同
    for(int i = 0; i < data_count - 1; i++){    // 5個數字，只需排4次，最後一個數會自動排好
        for(int j = 0; j < data_count-1-i; j++){// 從第j個位置，開始往右比較
            if(data[j] > data[j+1]){            // 相鄰兩數比大小，當左邊比右邊大時
                int temp = data[j];             // 兩數交換
                data[j] = data[j+1];
                data[j+1] = temp;
            }
        }
        cout << "第" << i << "回合結果: ";// 印出每回合結果
        print_array(data, data_count);
    }
    cout << "排序結束" << endl;

    return 0;
}
