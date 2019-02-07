Public Class Form1
    Function swap(ByVal data, ByVal x, ByVal y)
        '-------- 函數swap: 交換data中，位置x, y的兩筆資料 --------------------------------
        Dim temp As Integer
        temp = data(x)
        data(x) = data(y)
        data(y) = temp
    End Function
    Function swap_name(ByVal data, ByVal x, ByVal y)
        '-------- 函數swap: 交換data中，位置x, y的兩筆資料 --------------------------------
        Dim temp As String
        temp = data(x)
        data(x) = data(y)
        data(y) = temp
    End Function
    Function one_bubble(ByVal data, ByVal animal_names, ByVal i, ByVal data_count)
        '-------- 函數one_bubble: 將目前最大的數移到最右邊---------------------
        For j = 0 To data_count - 2 - i     ' 將陣列data中，第i小的數移到第i個位置
            If data(j) > data(j + 1) Then         ' 相鄰兩數比大小，當左邊比右邊大時
                swap(data, j, j + 1)          ' 交換兩數(大的右移)
                swap_name(animal_names, j, j + 1)
            End If
        Next j
    End Function

    Private Sub Form1_Load(ByVal sender As System.Object, ByVal e As System.EventArgs) Handles MyBase.Load

        '======== 主程式開始 =============================================================
        'Ch5E-1-bubbleSort.py
        '實作鐵人三項成績分析，輸出排名
        '函數: swap, one_bubble
        '版本: 1.0
        Dim data_2d(,) As Integer = {{90, 30, 40},
                 {20, 40, 90},
                 {70, 80, 70},
                 {60, 30, 20}
                }
        Dim data_sum() As Integer = {0, 0, 0, 0}
        Dim data_count, animal_num As Integer
        data_count = 4                                                  ' 資料數 = data_count的陣列長度
        Dim animal_names() As String = {"企鵝", "兔子", "黑熊", "烏龜"}
        animal_num = 4                                                  ' 動物數 = animal_names的陣列長度
        '-----------------
        Debug.Print("總分統計結果如下: ")
        For i = 0 To animal_num - 1
            For j = 0 To 2
                data_sum(i) = data_sum(i) + data_2d(i, j)
            Next j
            Debug.Print(animal_names(i) & ":" & data_sum(i))
        Next i

        '-----------------
        For i = 0 To data_count - 2                              ' 4個動物，只需排3次，最後一個數會自動排好
            one_bubble(data_sum, animal_names, i, data_count)    ' 右邊已排好的不需要再排
            Debug.Print("第" & i & "回合結果:")                  ' 印出每回合結果
            For j = 0 To 3
                Debug.Print(animal_names(j) & data_sum(j))       '將分數連同動物名字印出來 
            Next j
        Next i
        Debug.Print("排序結束")
        '-----------------
        ' 印出前三名
        For i = 0 To 2
            Debug.Print("第" & i + 1 & "名:" & animal_names(data_count - i - 1))  '分數最高的排在最右邊，因此要用data_count去扣掉i才能取得前三大的
        Next i
        '======== 主程式結束 ============================================================
    End Sub
End Class
