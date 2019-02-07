Public Class Form1
    Function sum(ByVal n)                ' 函數名稱sum及參數n
        If n <= 1 Then                   ' 函數內部的程式碼--由此開始
            Return 1
        Else
            Return n + sum(n - 1)
        End If                           ' 函數內部的程式碼--到此結束
    End Function

    Private Sub Form1_Load(ByVal sender As System.Object, ByVal e As System.EventArgs) Handles MyBase.Load
        Debug.Print(sum(3))             ' 呼叫函數計算 1+2+3
        Debug.Print(sum(10))            ' 呼叫函數計算 1+2+3+...+10
        Debug.Print(sum(40))            ' 呼叫函數計算 1+2+3+...+40
    End Sub
End Class
