Module Module1

    Sub Main()
        Dim grades(,) As Integer = {
        {100, 20, 85},
        {95, 99, 75},
        {89, 73, 92}
    }
        Dim names() As String = {"嘉明", "小美", "阿雄"}
        Dim sum As Integer

        For i = 0 To 2
            sum = 0
            For j = 0 To 2
                sum += grades(i, j)
            Next j
            Console.WriteLine(names(i) & "總分為" & sum & "分")
        Next i
        Console.Read()
    End Sub

End Module
