Public Class Form1

    Private Sub Form1_Load(ByVal sender As System.Object, ByVal e As System.EventArgs) Handles MyBase.Load
        Dim score_array() As Integer = {95, 92, 88, 96}       ' 陣列中有4個元素
        ' for迴圈會執行Console.WriteLine() 4次，因為陣列中有4個元素
        ' i在每一回合的值分別是0, 1, 2, 3
        For i = 0 To 3
            Debug.Print(score_array(i))
        Next i
    End Sub
End Class
