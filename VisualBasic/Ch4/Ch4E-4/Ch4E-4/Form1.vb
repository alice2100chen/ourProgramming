Public Class Form1
    Function gcd(ByVal p, ByVal q)
        Dim tmp, r As Integer
        If p < q Then
            tmp = p
            p = q
            q = tmp
        End If

        r = p Mod q
        If r = 0 Then
            Return q
        Else
            Return gcd(q, r)
        End If

    End Function

    Private Sub Form1_Load(ByVal sender As System.Object, ByVal e As System.EventArgs) Handles MyBase.Load
        Debug.Print(gcd(8, 12))
    End Sub
End Class
