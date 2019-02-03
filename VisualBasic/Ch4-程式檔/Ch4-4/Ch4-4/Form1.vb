Public Class Form1

    Private Sub Form1_Load(ByVal sender As System.Object, ByVal e As System.EventArgs) Handles MyBase.Load
        Dim num_2d_array = New Integer(2, 3) {
            {1, 2, 3, 4},
            {5, 6, 7, 8},
            {9, 10, 11, 12}
        }
        Dim x, y As Integer
        x = num_2d_array(0, 2)     ' x會變成 3
        y = num_2d_array(2, 3)     ' y會變成 12
        Debug.Print(x)
        Debug.Print(y)
        num_2d_array(2, 1) = -8    ' num_array(2,1)由 10 變成 -8
        Debug.Print(num_2d_array(2, 1))
    End Sub
End Class
