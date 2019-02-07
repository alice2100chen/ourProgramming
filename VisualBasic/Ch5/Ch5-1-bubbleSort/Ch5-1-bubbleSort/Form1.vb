Public Class Form1
    Function swap(ByVal data, ByVal x, ByVal y)
        '-------- 函數swap: 交換data中，位置x, y的兩筆資料 --------------------------------
        Dim temp As Integer
        temp = data(x)
        data(x) = data(y)
        data(y) = temp
    End Function
    Function one_bubble(ByVal data, ByVal end_index)
        '-------- 函數one_bubble: 將目前最大的數移到最右邊---------------------
        For j = 0 To end_index - 1              ' end_index之後(右邊)的數已排好，不需要再排
            If data(j) > data(j + 1) Then       ' 相鄰兩數比大小，當左邊比右邊大時
                swap(data, j, j + 1)            ' 交換兩數(大的右移)
            End If
        Next j
    End Function

    Private Sub Form1_Load(ByVal sender As System.Object, ByVal e As System.EventArgs) Handles MyBase.Load
        '======== 主程式開始 =============================================================
        'Ch5-1-bubbleSort.py
        '實作氣泡排序演算法(函數版)
        '函數: swap, one_bubble
        '版本: 1.0
        Dim data() As Integer = {4, 1, 3, 5, 2}
        Dim data_count As Integer
        data_count = 5                              ' 資料數 = 陣列長度 = 5個
        '-----------------
        For i = 0 To data_count - 2                 ' 5個數字，只需排4次，最後一個數會自動排好
            one_bubble(data, data_count - 1 - i)    ' 最右邊的i個數已排好，不需要再排
            'Debug.Print("第" & i + 1 & "回合結果:" & data(0) & ", " & data(1) & ", " & data(2) & ", " & data(3) & ", " & data(4))       ' 印出每回合的結果
            'Debug.Print("第" & i + 1 & "回合結果:")
            Debug.Write("第" & i + 1 & "回合結果:")
            For j = 0 To data_count - 1
                'Debug.Print(data(j))
                Debug.Write(data(j) & " ")
            Next j
            Debug.Print("")
        Next i

        Debug.Print("排序結束")
        '======== 主程式結束 ============================================================
    End Sub
End Class
