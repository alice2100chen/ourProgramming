#Ch5-2-seqSearch.py
#實作循序搜尋演算法
#函數: seq_search
#版本: 1.0
#-------- 函數seq_search: 在data中依序搜尋target是否存在；存在就回傳索引值，不存在則回傳-1
def seq_search(data, data_count, target):
    for i in range(data_count):
        if data[i] == target:          # 在第i個位置找到target
            return i                   # 回傳索引值i
    return -1                          # for迴圈結束仍沒有找到，回傳-1
#======== 主程式開始 ============================================================
data = [12, 2, 7, 5, 9]
data_count = len(data)                 # 資料數 = 陣列長度 = 5個
target = 7
found_index = seq_search(data, data_count, target)
#-----------------
if found_index == -1:
    print('無法找到搜尋目標', target)
else:
    print('發現搜尋目標', target, ', 位於陣列中第', found_index, '個位置')
#======== 主程式結束 ===========================================================
