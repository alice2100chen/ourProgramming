public class Main {

    public static void main(String[] args) {
        System.out.println(factorial(3));   // 呼叫函數計算 3!
        System.out.println(factorial(10));  // 呼叫函數計算 10!
    }

    public static int factorial(int n){     // 函數名稱factorial及參數n
        if(n <= 1){                         // 函數內部的程式碼--由此開始
            return 1;
        }
        else{
            return n * factorial(n-1);
        }                                   // 函數內部的程式碼--到此結束
    }
}
