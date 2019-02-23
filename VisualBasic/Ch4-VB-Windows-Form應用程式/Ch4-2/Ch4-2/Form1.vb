Public Class Form1

    Private Sub Form1_Load(ByVal sender As System.Object, ByVal e As System.EventArgs) Handles MyBase.Load
        Dim score_array = New Integer() {85, 92, 88, 96}
        Dim x As Integer
        x = score_array(0)    ' x會被設定為85
        Debug.Print(x)
        score_array(0) = 95   ' score_array變成{95, 92, 88, 96}
        x = score_array(0)    ' x會被設定為95
        Debug.Print(x)
    End Sub
End Class
