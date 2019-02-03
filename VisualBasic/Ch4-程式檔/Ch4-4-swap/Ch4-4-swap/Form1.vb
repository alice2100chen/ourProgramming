Public Class Form1

    Private Sub Form1_Load(ByVal sender As System.Object, ByVal e As System.EventArgs) Handles MyBase.Load
        Dim num_visitors = New Integer() {70, 10, 14, 7, 25, 30, 50}  ' 索引0~6代表星期日到六
        Dim temp As Integer
        temp = num_visitors(0)             '把星期日的人數70給temp
        num_visitors(0) = num_visitors(6)  '把星期六的人數50給星期日
        num_visitors(6) = temp             '把temp的70給星期六
        Debug.Print(num_visitors(0))
        Debug.Print(num_visitors(6))
    End Sub
End Class
