Module Module1
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
    Sub Main()
        Console.WriteLine(gcd(8, 12))
        Console.Read()
    End Sub

End Module
