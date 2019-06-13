#Ch5-1-bubbleSort-for-for.py
#實作氣池排序演算法(雙迴圈)
#版本: 1.0
data = [4, 1, 3, 5, 2]
data_count = len(data)                # 資料數 = 陣列長度 = 5個
# 內層迴圈名稱(j)需和外層(i)不同
for i in range(data_count-1):         # 5個數字，只需排4次，最後一個數會自動排好
    for j in range(data_count-1-i):   # 從第j個位置，開始往右比較 
        if data[j] > data[j+1]:       # 相鄰兩數比大小，當左邊比右邊大時
            temp = data[j]            # 兩數交換
            data[j] = data[j+1]
            data[j+1] = temp
    print('第',i,'回合結果:',data)      # 印出每回合結果
print('排序結束')
