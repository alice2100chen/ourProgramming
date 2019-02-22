Public Class Form1

    Private Sub Form1_Load(ByVal sender As System.Object, ByVal e As System.EventArgs) Handles MyBase.Load
        Dim a, b, c As Integer
        a = 4
        b = 3
        c = (a ^ 2 + b ^ 2) ^ 0.5
        Debug.Print(c)
    End Sub
End Class
