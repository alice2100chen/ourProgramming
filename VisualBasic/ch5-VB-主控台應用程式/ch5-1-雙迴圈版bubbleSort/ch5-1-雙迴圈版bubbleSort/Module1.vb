Module Module1

    Sub Main()
        '======== 主程式開始 =============================================================
        'Ch5-bubbleSort
        '實作氣泡排序演算法(雙迴圈)
        '版本: 1.0
        Dim data() As Integer = {4, 1, 3, 5, 2}
        Dim data_count, temp As Integer
        data_count = 5                              ' 資料數 = 陣列長度 = 5個
        '-----------------
        For i = 0 To data_count - 2                 ' 5個數字，只需排4次，最後一個數會自動排好
            For j = 0 To data_count - 2 - i
                If data(j) > data(j + 1) Then
                    temp = data(j)
                    data(j) = data(j + 1)
                    data(j + 1) = temp
                End If
            Next j
            'Console.writeLine("第" & i + 1 & "回合結果:" & data(0) & data(1) & data(2) & data(3) & data(4))       ' 印出每回合的結果
            'Console.writeLine("第" & i + 1 & "回合結果:")
            Console.Write("第" & i + 1 & "回合結果:")
            For k = 0 To data_count - 1
                Console.Write(data(k) & " ")
            Next k
            Console.WriteLine("")
        Next i
        Console.WriteLine("排序結束")
        Console.Read()
        '======== 主程式結束 ============================================================
    End Sub

End Module
