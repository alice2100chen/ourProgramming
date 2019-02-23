Module Module1

    Sub Main()
        Dim score_array() As Integer = {95, 92, 88, 96}       ' 陣列中有4個元素
        ' for迴圈會執行print() 4次，因為陣列中有4個元素
        ' i在每一回合的值分別是0, 1, 2, 3
        For i = 0 To 3
            Console.WriteLine(score_array(i))
        Next i
        Console.Read()
    End Sub

End Module
