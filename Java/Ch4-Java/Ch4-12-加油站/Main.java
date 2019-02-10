public class Main {

    public static void main(String[] args) {
        System.out.println(sum(3)); // 呼叫函數計算 1+2+3
        System.out.println(sum(10));// 呼叫函數計算 1+2+3+...+10
        System.out.println(sum(40));// 呼叫函數計算 1+2+3+...+40
    }

    public static int sum(int n){   // 函數名稱sum及參數n
        if(n <= 0){                 // 函數內部的程式碼--由此開始
            return 0;
        }
        else{
            return n + sum(n-1);
        }                           // 函數內部的程式碼--到此結束
    }
}
