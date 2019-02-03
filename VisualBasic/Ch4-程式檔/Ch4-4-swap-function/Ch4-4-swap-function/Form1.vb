Public Class Form1
    Function swap(ByVal a, ByVal i, ByVal j)
        Dim temp As Integer
        temp = a(i)
        a(i) = a(j)
        a(j) = temp            ' 不必return
    End Function
    Private Sub Form1_Load(ByVal sender As System.Object, ByVal e As System.EventArgs) Handles MyBase.Load
        Dim num_visitors = New Integer() {70, 10, 14, 7, 25, 30, 50}  ' 索引0~6代表星期日到六
        swap(num_visitors, 0, 6)   ' 把星期日及星期六的人數交換
        Debug.Print(num_visitors(0))
        Debug.Print(num_visitors(6))
    End Sub
End Class
