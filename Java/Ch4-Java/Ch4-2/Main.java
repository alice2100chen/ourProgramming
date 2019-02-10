public class Main {

    public static void main(String[] args) {
        int[] score_array = {85, 92, 88, 96};
        int x = score_array[0];     // x會被設定為85
        System.out.println(x);
        score_array[0] = 95;        // score_array變成[95, 92, 88, 96]
        x = score_array[0];         // x會被設定為95
        System.out.println(x);
    }
}
