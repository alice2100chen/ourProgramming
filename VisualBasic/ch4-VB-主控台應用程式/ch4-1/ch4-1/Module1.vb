Module Module1

    Sub Main()
        Dim score_array = New Integer() {85, 92, 88, 96}
        Dim animals = New String() {"長頸鹿", "獅子", "老虎", "河馬", "熊", "兔子", "斑馬"}
        Console.WriteLine(score_array(0) & ", " & score_array(1) & ", " & score_array(2) & ", " & score_array(3))
        Console.WriteLine(animals(0) & ", " & animals(1) & ", " & animals(2) & ", " & animals(3) & ", " & animals(4) & ", " & animals(5) & ", " & animals(6))
        Console.Read()
    End Sub

End Module
