Public Class Form1

    Private Sub Form1_Load(ByVal sender As System.Object, ByVal e As System.EventArgs) Handles MyBase.Load
        Dim x, y, z, q As Integer
        x = 10 + 5   ' 加：x變成15 
        y = 20 - x   ' 減：y變成5
        z = x * y    ' 乘：z變成75
        q = x / y    ' 除：q變成3
        Debug.Print(x)
        Debug.Print(y)
        Debug.Print(z)
        Debug.Print(q)
    End Sub
End Class
