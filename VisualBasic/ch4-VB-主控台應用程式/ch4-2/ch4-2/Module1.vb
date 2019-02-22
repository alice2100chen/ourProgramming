Module Module1

    Sub Main()
        Dim score_array = New Integer() {85, 92, 88, 96}
        Dim x As Integer
        x = score_array(0)    ' x會被設定為85
        Console.WriteLine(x)
        score_array(0) = 95   ' score_array變成{95, 92, 88, 96}
        x = score_array(0)    ' x會被設定為95
        Console.WriteLine(x)
        Console.Read()
    End Sub

End Module
