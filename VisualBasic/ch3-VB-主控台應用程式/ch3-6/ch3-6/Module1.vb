Module Module1

    Sub Main()
        Dim x, y, temp As Integer
        x = 10       ' 交換前的x為10
        y = 20       ' 交換前的y為20
        temp = x     ' 把x值給temp
        x = y        ' 把y值給x
        y = temp     ' 把temp值給y
        Console.WriteLine("x = " & x)
        Console.WriteLine("y = " & y)
        Console.Read()
    End Sub

End Module
