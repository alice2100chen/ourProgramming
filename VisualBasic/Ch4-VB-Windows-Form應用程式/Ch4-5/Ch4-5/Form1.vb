Public Class Form1

    Private Sub Form1_Load(ByVal sender As System.Object, ByVal e As System.EventArgs) Handles MyBase.Load
        Dim num_visitors() As Integer = {50, 10, 14, 7, 25, 30, 70}
        Debug.Print("星期日：" & num_visitors(0) & "人")
        Debug.Print("星期一：" & num_visitors(1) & "人")
        Debug.Print("星期二：" & num_visitors(2) & "人")
        Debug.Print("星期三：" & num_visitors(3) & "人")
        Debug.Print("星期四：" & num_visitors(4) & "人")
        Debug.Print("星期五：" & num_visitors(5) & "人")
        Debug.Print("星期六：" & num_visitors(6) & "人")
    End Sub
End Class
