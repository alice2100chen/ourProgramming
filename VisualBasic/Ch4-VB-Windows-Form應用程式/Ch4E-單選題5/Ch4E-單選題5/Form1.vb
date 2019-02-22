Public Class Form1
    Function recursive_add(ByVal n)
        If n <= 2 Then
            Return 5
        Else
            Return n + recursive_add(n - 3)
        End If
    End Function
    Private Sub Form1_Load(ByVal sender As System.Object, ByVal e As System.EventArgs) Handles MyBase.Load
        Debug.Print(recursive_add(15))
    End Sub
End Class
