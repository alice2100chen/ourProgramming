Module Module1

    Sub Main()
        Dim animals() As String = {"長頸鹿", "獅子", "老虎", "河馬", "熊", "兔子", "斑馬"}       ' 陣列中有7個元素
        ' 因為陣列中有7個元素，for迴圈應會執行7次
        ' i在每一回合的值分別是0, 1, 2, 3, 4, 5, 6
        For i = 0 To 6
            Console.WriteLine(animals(i))
        Next i
        Console.Read()
    End Sub

End Module
