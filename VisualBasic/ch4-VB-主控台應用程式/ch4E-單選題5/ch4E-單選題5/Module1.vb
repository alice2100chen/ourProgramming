Module Module1
    Function recursive_add(ByVal n)
        If n <= 2 Then
            Return 5
        Else
            Return n + recursive_add(n - 3)
        End If
    End Function
    Sub Main()
        Console.WriteLine(recursive_add(15))
        Console.Read()
    End Sub

End Module
