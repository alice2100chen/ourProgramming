public class Main {

    public static void main(String[] args) {
        int[] grades = {40, 80, 75, 20, 96, 69, 50};
        int lower_60 = 0;
        int higher_90 = 0;
        for(int i = 0; i < 7; i++){
            if(grades[i] > 90){
                higher_90 = higher_90 + 1;
            }
            else if(grades[i] < 60){
                lower_60 = lower_60 + 1;
            }
        }
        System.out.println("<60分: " + lower_60 + "個");
        System.out.println(">90分: " + higher_90 + "個");
    }
}
