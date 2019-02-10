import java.util.Arrays;

public class Main {

    public static void main(String[] args) {
        int[][] num_2d_array = {
                {1, 2, 3},
                {4, 5, 6},
                {7, 8, 9}
        };
        String[][] animals_2d = {
                {"長頸鹿", "獅子", "兔子"},
                {"樹葉", "肉", "紅蘿蔔"}
        };
        System.out.println(Arrays.deepToString(num_2d_array));
        System.out.println(Arrays.deepToString(animals_2d));
    }
}
