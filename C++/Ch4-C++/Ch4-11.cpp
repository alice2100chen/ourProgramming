#include <iostream>

using namespace std;

int factorial(int n){   // 函數名稱factorial及參數n
    if(n <= 1){         // 函數內部的程式碼--由此開始
        return 1;
    }
    else{
        return n * factorial(n-1);
    }                   // 函數內部的程式碼--到此結束
}

int main(){
    cout << factorial(3) << endl;   // 呼叫函數計算 3!
    cout << factorial(10) << endl;  // 呼叫函數計算 10!

    return 0;
}
