import java.util.Arrays;

public class Main {

    public static void main(String[] args) {
        int[][] num_array = {
                {1, 2, 3},
                {4, 5, 6},
                {7, 8, 9}
        };
        int[] x = num_array[0]; // x會變成 [1, 2, 3]
        int y = num_array[0][2];// y會變成3
        num_array[2][1] = -8;   // num_array[2][1]由8變成-8
        System.out.println(Arrays.toString(x));
        System.out.println(y);
        System.out.println(num_array[2][1]);
    }
}
