/*
Ch5-1-bubbleSort.java
實作氣泡排序演算法(函數版)
函數: swap, one_bubble
版本: 1.0
 */

import java.util.Arrays;

public class Main {

    public static void main(String[] args) {
        // ===== 主程式開始 =====
        int[] data = {4, 1, 3, 5, 2};
        int data_count = data.length;       // 資料數 = 陣列長度 = 5個
        // ----------
        for(var i = 0; i < data_count - 1; i++){            // 5個數字，只需排4次，最後一個數會自動排好
            one_bubble(data, data_count-1-i);               // 最右邊的i個數已排好，不需要再排
            System.out.println("第" + i + "回合結果: " + Arrays.toString(data));// 印出每回合的結果
        }
        System.out.println("排序結束");
        // ===== 主程式結束 =====
    }

    // ----- 函數one_bubble: 將目前最大的數移到最右邊 -----
    public static void one_bubble(int[] data, int end_index){
        for(var j = 0; j < end_index; j++){ // end_index之後(右邊)的數已排好，不需要再排
            if(data[j] > data[j+1]){        // 相鄰兩數比大小，當左邊比右邊大時
                swap(data, j, j+1);         // 交換兩數(大的右移)
            }
        }
    }

    // ----- 函數swap: 交換data中，位置x, y的兩筆資料 -----
    public static void swap(int[] data, int x, int y){
        int temp = data[x];
        data[x] = data[y];
        data[y] = temp;
    }
}
