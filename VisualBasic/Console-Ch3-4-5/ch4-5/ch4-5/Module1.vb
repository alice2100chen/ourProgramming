Module Module1

    Sub Main()
        Dim num_visitors() As Integer = {50, 10, 14, 7, 25, 30, 70}
        Console.WriteLine("星期日：" & num_visitors(0) & "人")
        Console.WriteLine("星期一：" & num_visitors(1) & "人")
        Console.WriteLine("星期二：" & num_visitors(2) & "人")
        Console.WriteLine("星期三：" & num_visitors(3) & "人")
        Console.WriteLine("星期四：" & num_visitors(4) & "人")
        Console.WriteLine("星期五：" & num_visitors(5) & "人")
        Console.WriteLine("星期六：" & num_visitors(6) & "人")
        Console.Read()
    End Sub

End Module
