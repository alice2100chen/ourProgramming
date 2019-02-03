Public Class Form1

    Private Sub Form1_Load(ByVal sender As System.Object, ByVal e As System.EventArgs) Handles MyBase.Load
        Dim contest_names() As String = {"游泳", "單車", "跑步"}
        Dim times() As String = {"30分鐘", "1小時", "1小時半"}
        For i = 0 To 2
            Debug.Print(contest_names(i) & ":" & times(i))
        Next i
    End Sub
End Class
