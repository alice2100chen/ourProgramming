import java.util.Arrays;

/*
Ch5-bubbleSort.java
實作氣池排序演算法(雙迴圈)
版本: 1.0
 */
public class Main {

    public static void main(String[] args) {
        int[] data = {4, 1, 3, 5, 2};     // 資料數 = 陣列長度 = 5個
        int data_count = data.length;
        // 內層迴圈名稱(j)需和外層(i)不同
        for(int i = 0; i < data_count - 1; i++){        // 5個數字，只需排4次，最後一個數會自動排好
            for(int j = 0; j < data_count-1-i; j++){    // 從第j個位置，開始往右比較
                if(data[j] > data[j+1]){                // 相鄰兩數比大小，當左邊比右邊大時
                    var temp = data[j];                 // 兩數交換
                    data[j] = data[j+1];
                    data[j+1] = temp;
                }
            }
            System.out.println("第" + i + "回合結果: " + Arrays.toString(data));// 印出每回合結果
        }
        System.out.println("排序結束");
    }
}
