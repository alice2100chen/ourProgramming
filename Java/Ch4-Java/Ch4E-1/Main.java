public class Main {

    public static void main(String[] args) {
        String[] contest_names = {"游泳", "單車", "跑步"};
        String[] times = {"30分鐘", "1小時", "1小時半"};
        for(int i = 0; i < 3; i++) {
            System.out.println(contest_names[i] + ": " + times[i]);
        }
    }
}
