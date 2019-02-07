Public Class Form1

    Private Sub Form1_Load(ByVal sender As System.Object, ByVal e As System.EventArgs) Handles MyBase.Load
        Dim animals_2d(,) As String = {
            {"長頸鹿", "獅子", "兔子"},
            {"樹葉", "肉", "紅蘿蔔"},
            {"高", "中", "低"}
        }
        For i = 0 To 2       '外層控制animals_2d第i個元素(陣列)
            For j = 0 To 2   '內層控制animals_2d第i個元素(陣列)的第j個元素
                Debug.Print(animals_2d(i, j))
            Next j
        Next i
    End Sub
End Class
