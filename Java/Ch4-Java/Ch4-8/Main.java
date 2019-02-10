public class Main {

    public static void main(String[] args) {
        String[][] animals_2d = {
                {"長頸鹿", "獅子", "兔子"},
                {"樹葉", "肉", "紅蘿蔔"}
        };
        for(int i = 0; i < 2; i++){     // 外層控制animals_2d第i個元素(陣列)
            for(int j = 0; j < 3; j++){ // 內層控制animals_2d第i個元素(陣列)的第j個元素
                System.out.println(animals_2d[i][j]);
            }
        }
    }
}
