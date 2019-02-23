Module Module1
    Function swap(ByVal a, ByVal i, ByVal j)
        Dim temp As Integer
        temp = a(i)
        a(i) = a(j)
        a(j) = temp            ' 不必return
    End Function
    Sub Main()
        Dim num_visitors = New Integer() {70, 10, 14, 7, 25, 30, 50}  ' 索引0~6代表星期日到六
        swap(num_visitors, 0, 6)   ' 把星期日及星期六的人數交換
        Console.WriteLine(num_visitors(0))
        Console.WriteLine(num_visitors(6))
        Console.Read()
    End Sub

End Module
