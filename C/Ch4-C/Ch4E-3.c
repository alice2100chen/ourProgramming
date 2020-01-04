#include <stdio.h>

int factorial(int n){   // 函數名稱factorial及參數n
    if(n < 0){          // 函數內部的程式碼--由此開始
        return -1;
    }
    else if(n <= 1){
        return 1;
    }
    else{
        return n * factorial(n-1);
    }                   // 函數內部的程式碼--到此結束
}

void printResult(int result){
    if(result < 0){
        printf("請輸入0或正整數");
    }
    else{
        printf("%d\n", result);
    }
}

int main(){
    int result = factorial(3);// 呼叫函數計算 3!
    printResult(result);
    result = factorial(10);   // 呼叫函數計算 10!
    printResult(result);
    result = factorial(-3);
    printResult(result);

    return 0;
}
