Module Module1

    Sub Main()
        Dim grades() As Integer = {40, 80, 75, 20, 96, 69, 50}
        Dim lower_60 As Integer = 0
        Dim higher_90 As Integer = 0

        For i = 0 To 6
            If grades(i) > 90 Then
                higher_90 = higher_90 + 1
            ElseIf grades(i) < 60 Then
                lower_60 = lower_60 + 1
            End If
        Next i

        Console.WriteLine("<60分: " & lower_60 & "個")
        Console.WriteLine(">90分: " & higher_90 & "個")
        Console.Read()
    End Sub

End Module
