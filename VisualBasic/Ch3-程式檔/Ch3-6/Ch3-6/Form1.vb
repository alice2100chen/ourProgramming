Public Class Form1

    Private Sub Form1_Load(ByVal sender As System.Object, ByVal e As System.EventArgs) Handles MyBase.Load
        Dim x, y, temp As Integer
        x = 10       ' 交換前的x為10
        y = 20       ' 交換前的y為20
        temp = x     ' 把x值給temp
        x = y        ' 把y值給x
        y = temp     ' 把temp值給y
        Debug.Print("x = " & x)
        Debug.Print("y = " & y)
    End Sub
End Class
