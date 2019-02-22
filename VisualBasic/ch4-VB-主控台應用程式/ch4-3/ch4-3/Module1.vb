Module Module1

    Sub Main()
        Dim num_2d_array = New Integer(2, 3) {
             {1, 2, 3, 4},
             {5, 6, 7, 8},
             {9, 10, 11, 12}
         }
        Dim animals_2d = New String(1, 2) {
            {"長頸鹿", "獅子", "兔子"},
            {"樹葉", "肉", "紅蘿蔔"}
        }
        Console.WriteLine(num_2d_array(0, 0))
        Console.WriteLine(animals_2d(1, 2))
        Console.Read()
    End Sub

End Module
