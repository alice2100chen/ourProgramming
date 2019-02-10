public class Main {

    public static void main(String[] args) {
        int[][] grades = {{100, 20, 85}, {95,99,75}, {89,73,92}};
        String[] names = {"嘉明", "小美", "阿雄"};
        for(int i = 0; i < 3; i++){
            int sum = 0;
            for(int j = 0; j < 3; j++){
                sum += grades[i][j];
            }
            System.out.println(names[i] + "總分為" + sum + "分");
        }
    }
}
