Module Module1

    Sub Main()
        Dim contest_names() As String = {"游泳", "單車", "跑步"}
        Dim times() As String = {"30分鐘", "1小時", "1小時半"}
        For i = 0 To 2
            Console.WriteLine(contest_names(i) & ":" & times(i))
        Next i
        Console.Read()
    End Sub

End Module
