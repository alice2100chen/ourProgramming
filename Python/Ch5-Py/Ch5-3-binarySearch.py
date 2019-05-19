#Ch5-3-binarySearch.py
#實作二分搜尋演算法
#函數: binary_search
#版本: 1.0
#-------- 函數binary_search: 遞迴尋找target --------------------------------------
def binary_search(data, left, right, target):
    if left > right:                                        # 找不到
        return -1    
    middle = int((right-left) / 2 + left)                     # 取得left~right正中間的索引值(middle)    
    if data[middle] > target:                               # 中間的數比目標值還大->往左邊找
        return binary_search(data, left, middle-1, target)
    elif data[middle] < target:                             # 中間的數比目標值還小->往右邊找
        return binary_search(data, middle+1, right, target)
    else:                                                   # 找到目標值(data[middle] == target)
        return middle
#======== 主程式開始 =============================================================
data = [2, 3, 5, 7, 9, 11, 12, 15, 20, 22, 25]          # 已依照大小排列好的數列
data_count = len(data)
target = 7
found_index = binary_search(data, 0, data_count-1, target)    # 在陣列位置0~data_count-1(全部)中搜尋
#-----------------
if found_index == -1:
    print('無法找到搜尋目標', target)
else:
    print('發現搜尋目標', target, ', 位於陣列中第', found_index, '個位置')
#======== 主程式結束 ============================================================
