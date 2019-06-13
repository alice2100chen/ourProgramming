data = [12, 2, 7, 5, 9]
data_count = len(data)
target = 7
found_index = -1
for i in range(data_count):
    if data[i] == target:
        found_index = i
        break
if found_index == -1:
    print('無法找到搜尋目標')
else:
    print('發現搜尋目標')
