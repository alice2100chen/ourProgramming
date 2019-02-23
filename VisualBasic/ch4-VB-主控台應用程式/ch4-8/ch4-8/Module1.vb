Module Module1

    Sub Main()
        Dim animals_2d(,) As String = {
     {"長頸鹿", "獅子", "兔子"},
     {"樹葉", "肉", "紅蘿蔔"},
     {"高", "中", "低"}
 }
        For i = 0 To 2       '外層控制animals_2d第i個元素(陣列)
            For j = 0 To 2   '內層控制animals_2d第i個元素(陣列)的第j個元素
                Console.WriteLine(animals_2d(i, j))
            Next j
        Next i
        Console.Read()
    End Sub

End Module
