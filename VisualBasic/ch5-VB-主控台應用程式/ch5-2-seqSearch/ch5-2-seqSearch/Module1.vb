Module Module1
    Function seq_search(ByVal data, ByVal data_count, ByVal target)
        For i = 0 To data_count - 1
            If data(i) = target Then            ' 在第i個位置找到target
                Return i                        ' 回傳索引值i
            End If
        Next i
        Return -1                               ' for迴圈結束仍沒有找到，回傳-1
    End Function
    Sub Main()
        'Ch5-2-seqSearch.py
        '實作循序搜尋演算法
        '函數: seq_search
        '版本: 1.0
        '======== 主程式開始 =============================================================
        Dim data() As Integer = {12, 2, 7, 5, 9}
        Dim data_count, found_index, target As Integer
        data_count = 5                 ' 資料數 = 陣列長度 = 5個
        target = 7
        found_index = seq_search(data, data_count, target)
        '-----------------
        If found_index = -1 Then
            Console.WriteLine("無法找到搜尋目標" & target)
        Else
            Console.WriteLine("發現搜尋目標" & target & "位於陣列中第" & found_index & "個位置")
        End If
        Console.Read()
        '======== 主程式結束 ============================================================
    End Sub

End Module
