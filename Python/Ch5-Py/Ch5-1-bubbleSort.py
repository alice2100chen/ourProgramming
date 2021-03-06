#Ch5-1-bubbleSort.py

#實作氣泡排序演算法(函數版)

#函數: swap, one_bubble

#版本: 1.0

#-------- 函數swap: 交換data中，位置x, y的兩筆資料 --------------------------------

def swap(data, x, y):

    temp = data[x]

    data[x] = data[y]

    data[y] = temp

    

#-------- 函數one_bubble: 將目前最大的數移到最右邊---------------------

def one_bubble(data, end_index):

    for j in range(end_index): # end_index之後(右邊)的數已排好，不需要再排

        if data[j] > data[j+1]:         # 相鄰兩數比大小，當左邊比右邊大時

            swap(data, j, j+1)          # 交換兩數(大的右移)

            

#======== 主程式開始 =============================================================

data = [4, 1, 3, 5, 2]

data_count = len(data)                 # 資料數 = 陣列長度 = 5個



#-----------------

for i in range(data_count - 1):        # 5個數字，只需排4次，最後一個數會自動排好

    one_bubble(data, data_count-1-i)    # 最右邊的i個數已排好，不需要再排

    print('第',i,'回合結果:',data)       # 印出每回合的結果

print('排序結束')

#======== 主程式結束 ============================================================
