Public Class Form1
    Function factorial(ByVal n)          ' 函數名稱factorial及參數n
        If n <= 1 Then                   ' 函數內部的程式碼--由此開始
            Return 1
        Else
            Return n * factorial(n - 1)
        End If                           ' 函數內部的程式碼--到此結束
    End Function

    Private Sub Form1_Load(ByVal sender As System.Object, ByVal e As System.EventArgs) Handles MyBase.Load
        Debug.Print(factorial(3))        ' 呼叫函數計算 3!
        Debug.Print(factorial(10))       ' 呼叫函數計算 10!
        Debug.Print(factorial(40))       ' 呼叫函數計算 40!
    End Sub
End Class
