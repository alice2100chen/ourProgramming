Module Module1

    Sub Main()
        Dim num_visitors() As Integer = {50, 10, 14, 7, 25, 30, 70}
        Dim day_names() As String = {"星期日：", "星期一：", "星期二：", "星期三：", "星期四：", "星期五：", "星期六："}
        Dim day_index As Integer
        For day_index = 0 To 6
            Console.WriteLine(day_names(day_index) & num_visitors(day_index) & "人")
        Next day_index
        Console.Read()
    End Sub

End Module
