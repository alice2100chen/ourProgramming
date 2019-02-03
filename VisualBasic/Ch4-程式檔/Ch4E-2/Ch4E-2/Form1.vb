Public Class Form1

    Private Sub Form1_Load(ByVal sender As System.Object, ByVal e As System.EventArgs) Handles MyBase.Load
        Dim grades(,) As Integer = {
            {100, 20, 85},
            {95, 99, 75},
            {89, 73, 92}
        }
        Dim names() As String = {"嘉明", "小美", "阿雄"}
        Dim sum As Integer

        For i = 0 To 2
            sum = 0
            For j = 0 To 2
                sum += grades(i, j)
            Next j
            Debug.Print(names(i) & "總分為" & sum & "分")
        Next i

    End Sub
End Class
