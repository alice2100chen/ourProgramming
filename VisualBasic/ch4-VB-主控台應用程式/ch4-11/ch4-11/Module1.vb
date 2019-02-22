Module Module1
    Function factorial(ByVal n)          ' 函數名稱factorial及參數n
        If n <= 1 Then                   ' 函數內部的程式碼--由此開始
            Return 1
        Else
            Return n * factorial(n - 1)
        End If                           ' 函數內部的程式碼--到此結束
    End Function
    Sub Main()
        Console.WriteLine(factorial(3))        ' 呼叫函數計算 3!
        Console.WriteLine(factorial(10))       ' 呼叫函數計算 10!
        Console.WriteLine(factorial(40))       ' 呼叫函數計算 40!
        Console.Read()
    End Sub

End Module
