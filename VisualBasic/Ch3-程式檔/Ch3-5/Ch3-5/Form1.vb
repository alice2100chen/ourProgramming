Public Class Form1

    Private Sub Form1_Load(ByVal sender As System.Object, ByVal e As System.EventArgs) Handles MyBase.Load
        Dim x, y As Integer
        x = 10       ' 交換前的x為10
        y = 20       ' 交換前的y為20
        x = y        ' 把y值給x
        y = x        ' 把x值給y
        Debug.Print("x = " & x)
        Debug.Print("y = " & y)
    End Sub
End Class
