Module Module1

    Sub Main()
        Dim x, y As Integer
        x = 10       ' 交換前的x為10
        y = 20       ' 交換前的y為20
        x = y        ' 把y值給x
        y = x        ' 把x值給y
        Console.WriteLine("x = " & x)
        Console.WriteLine("y = " & y)
        Console.Read()
    End Sub

End Module
