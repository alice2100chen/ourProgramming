Public Class Form1

    Private Sub Form1_Load(ByVal sender As System.Object, ByVal e As System.EventArgs) Handles MyBase.Load
        Dim num_2d_array = New Integer(2, 3) {
            {1, 2, 3, 4},
            {5, 6, 7, 8},
            {9, 10, 11, 12}
        }
        Dim animals_2d = New String(1, 2) {
            {"長頸鹿", "獅子", "兔子"},
            {"樹葉", "肉", "紅蘿蔔"}
        }
        Debug.Print(num_2d_array(0, 0))
        Debug.Print(animals_2d(1, 2))
    End Sub
End Class
