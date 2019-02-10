/*
Ch5E-1-bubbleSort.java
實作鐵人三項成績分析，輸出排名
函數: swap, one_bubble
版本: 1.0
 */

import java.util.Arrays;

public class Main {

    public static void main(String[] args) {
        // ===== 主程式開始 =====
        int[][] data_2d = {
                {90, 30, 40},
                {20, 40, 90},
                {70, 80, 70},
                {60, 30, 20},
        };
        int[] data_sum = {0, 0, 0, 0};
        int data_count = data_sum.length;

        String[] animal_names = {"企鵝", "兔子", "黑熊", "烏龜"};
        int animal_num = animal_names.length;
        // ----------
        for(int i = 0; i < animal_num; i++){
            for(int j = 0; j < 3; j++){
                data_sum[i] = data_sum[i] + data_2d[i][j];
            }
        }
        System.out.println("總分統計結果如下: ");
        System.out.println(Arrays.toString(animal_names));
        System.out.println(Arrays.toString(data_sum));
        System.out.println();
        for(int i = 0; i < data_count-1; i++){                  // 4個動物，只需排3次，最後一個數會自動排好
            one_bubble(data_sum, animal_names, i, data_count);  // 右邊已排好的不需要再排
            System.out.println("第" + i + "回合結果:");          // 印出每回合結果
            for(int j = 0; j < 4; j++){
                System.out.println(animal_names[j] + ' ' + data_sum[j]); // 將分數連同動物名字印出來
            }
            System.out.println();
        }
        System.out.println("排序結束");
        // 印出前三名
        for(int i = 0; i < 3; i++){
            System.out.println("第"+ (i+1) + "名:" + animal_names[data_count-i-1]); // 分數最高的排在最右邊，因此要用data_count去扣掉i才能取得前三大的
        }
        // ===== 主程式結束 =====
    }

    // ----- 函數one_bubble: 將目前最大的數移到最右邊 -----
    public static void one_bubble(int[] data_sum, String[] animal_names, int i, int data_count){
        for(int j = 0; j < data_count-1-i; j++){    // 將陣列data中，第i小的數移到第i個位置
            if (data_sum[j] > data_sum[j+1]){       // 相鄰兩數比大小，當左邊比右邊大時
                swapSum(data_sum, j, j+1);       // 交換兩數(大的右移)
                swapName(animal_names, j, j+1);
            }
        }
    }

    // ----- 函數swapSum: 交換data中，位置x, y的兩筆資料 -----
    public static void swapSum(int[] data, int x, int y){
        int temp = data[x];
        data[x] = data[y];
        data[y] = temp;
    }

    // ----- 函數swapName: 交換data中，位置x, y的兩筆資料 -----
    public static void swapName(String[] data, int x, int y){
        String temp = data[x];
        data[x] = data[y];
        data[y] = temp;
    }
}
