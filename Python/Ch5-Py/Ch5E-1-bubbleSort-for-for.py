data = [24, 9, 13, 2]
data_count = len(data)
for i in range(data_count-1):
    for j in range(data_count-1-i): 
        if data[j] > data[j+1]:
            temp = data[j] 
            data[j] = data[j+1]
            data[j+1] = temp
print(data)
