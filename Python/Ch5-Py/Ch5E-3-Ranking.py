#Ch5E-1-Ranking.py
#實作鐵人三項成績分析，輸出排名
#函數: swap, one_bubble
#版本: 1.0
#-------- 函數swap: 交換data中，位置x, y的兩筆資料 --------------------------------
def swap(data, x, y):
    temp = data[x]
    data[x] = data[y]
    data[y] = temp
    
#-------- 函數one_bubble: 將目前最大的數移到最右邊---------------------
def one_bubble(data, animal_names, i, data_count):
    for j in range(data_count - 1 - i): # 將陣列data中，第i小的數移到第i個位置
        if data[j] > data[j+1]:         # 相鄰兩數比大小，當左邊比右邊大時
            swap(data, j, j+1)          # 交換兩數(大的右移)
            swap(animal_names, j, j+1)
            
#======== 主程式開始 =============================================================
data_2d = [[90,30,40],
           [20,40,90],
           [70,80,70],
           [60,30,20],
          ]
data_sum = [0, 0, 0, 0]
data_count = len(data_sum) 

animal_names = ['企鵝','兔子','黑熊','烏龜']
animal_num = len(animal_names)
#-----------------
for i in range(animal_num):
    for j in range(3):
        data_sum[i] = data_sum[i] + data_2d[i][j]

print('總分統計結果如下: ')
print(animal_names)
print(data_sum)
print()

for i in range(data_count - 1):        # 4個動物，只需排3次，最後一個數會自動排好
    one_bubble(data_sum, animal_names, i, data_count)    # 右邊已排好的不需要再排
    
# 印出前三名
for i in range(3):
    # 分數最高的排在最右邊，因此要用data_count去扣掉i才能取得前三大的
    print('第', i+1, '名:', animal_names[data_count-i-1]) 
#======== 主程式結束 ============================================================
