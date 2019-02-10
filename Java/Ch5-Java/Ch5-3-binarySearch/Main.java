/*
Ch5-3-binarySearch.java
實作二分搜尋演算法
函數: binary_search
版本: 1.0
 */

public class Main {

    public static void main(String[] args) {
        // ===== 主程式開始 =====
        int[] data = {2, 3, 5, 7, 9, 11, 12, 15, 20, 22, 25};             // 已依照大小排列好的數列
        int data_count = data.length;
        int target = 7;
        int found_index = binary_search(data, 0, data_count-1, target); // 在陣列位置0~data_count-1(全部)中搜尋
        // ----------
        if(found_index == -1){
            System.out.println("無法找到搜尋目標" + target);
        }
        else{
            System.out.println("發現搜尋目標" + target + ", 位於陣列中第" + found_index + "個位置");
        }
        // ===== 主程式結束 =====
    }

    // ----- 函數binary_search: 遞迴尋找target -----
    public static int binary_search(int[] data, int left, int right, int target){
        if(left > right){                                       // 找不到
            return -1;
        }
        int middle = (right-left) / 2 + left;         // 取得left~right正中間的索引值(middle)
        if(data[middle] > target){                              // 中間的數比目標值還大->往左邊找
            return binary_search(data, left, middle-1, target);
        }
        else if(data[middle] < target){                         // 中間的數比目標值還小->往右邊找
            return binary_search(data, middle+1, right, target);
        }
        else{                                                   // 找到目標值(data[middle] == target)
            return middle;
        }
    }

}
