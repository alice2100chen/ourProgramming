Module Module1

    Sub Main()
        Dim num_visitors(,) As Integer = {
         {70, 10, 14, 7, 25, 30, 50},
         {30, 24, 14, 9, 87, 63, 25},
         {100, 52, 82, 89, 36, 78, 22}
         }
        Dim day_names() As String = {"星期日", "星期一", "星期二", "星期三", "星期四", "星期五", "星期六"}

        For week_index = 0 To 2              ' 有3個星期的資料，因此是0, 1, 2
            '以下這個Console.writeLine()屬於外層迴圈
            Console.WriteLine("第" & week_index + 1 & "個星期")
            For day_index = 0 To 6           ' 一星期有7天，因此是0,1,2, ..., 6
                '以下這個Console.writeLine()屬於內層迴圈
                Console.WriteLine(day_names(day_index) & num_visitors(week_index, day_index) & "人")
            Next day_index
        Next week_index
        Console.Read()
    End Sub

End Module
