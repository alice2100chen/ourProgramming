def sum(n):                  #函數名稱sum及參數n
    if n <= 0:               #函數內部的程式碼--由此開始
        return 0
    else:
        return n + sum(n-1)  #函數內部的程式碼--到此結束
print (sum(3))               #呼叫函數計算 1+2+3
print (sum(10))              #呼叫函數計算 1+2+3+...+10
print (sum(40))              #呼叫函數計算 1+2+3+...+40
