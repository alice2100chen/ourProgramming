Public Class Form1
    Function binary_search(ByVal data, ByVal left, ByVal right, ByVal target)
        '-------- 函數binary_search: 遞迴尋找target --------------------------------------
        Dim middle As Integer
        If left > right Then                                    ' 找不到
            Return -1
        End If

        middle = Int((right - left) / 2 + left)                     ' 取得left~right正中間的索引值(middle)    
        If data(middle) > target Then                               ' 中間的數比目標值還大->往左邊找
            Return binary_search(data, left, middle - 1, target)
        ElseIf data(middle) < target Then                             ' 中間的數比目標值還小->往右邊找
            Return binary_search(data, middle + 1, right, target)
        Else ' 找到目標值(data[middle] == target)
            Return middle
        End If

    End Function

    Private Sub Form1_Load(ByVal sender As System.Object, ByVal e As System.EventArgs) Handles MyBase.Load
        '======== 主程式開始 =============================================================
        'Ch5-3-binarySearch.py
        '實作二分搜尋演算法
        '函數: binary_search
        '版本: 1.0
        Dim data() As Integer = {2, 3, 5, 7, 9, 11, 12, 15, 20, 22, 25}     ' 已依照大小排列好的數列
        Dim data_count, target, found_index As Integer
        data_count = 11                                                     ' 資料數 = 陣列長度 
        target = 7
        '-----------------
        found_index = binary_search(data, 0, data_count - 1, target)        ' 在陣列位置0~data_count-1(全部)中搜尋
        '-----------------
        If found_index = -1 Then
            Debug.Print("無法找到搜尋目標" & target)
        Else
            Debug.Print("發現搜尋目標" & target & "位於陣列中第" & found_index & "個位置")
        End If

        '======== 主程式結束 ============================================================
    End Sub
End Class