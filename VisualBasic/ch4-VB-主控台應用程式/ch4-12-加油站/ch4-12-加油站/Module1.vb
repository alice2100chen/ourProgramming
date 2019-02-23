Module Module1
    Function sum(ByVal n)                ' 函數名稱sum及參數n
        If n <= 1 Then                   ' 函數內部的程式碼--由此開始
            Return 1
        Else
            Return n + sum(n - 1)
        End If                           ' 函數內部的程式碼--到此結束
    End Function
    Sub Main()
        Console.WriteLine(sum(3))             ' 呼叫函數計算 1+2+3
        Console.WriteLine(sum(10))            ' 呼叫函數計算 1+2+3+...+10
        Console.WriteLine(sum(40))            ' 呼叫函數計算 1+2+3+...+40
        Console.Read()
    End Sub

End Module
