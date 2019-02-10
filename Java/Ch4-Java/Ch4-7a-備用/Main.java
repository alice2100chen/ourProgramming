public class Main {

    public static void main(String[] args) {
        int[] num_visitors = {70, 10, 14, 7, 25, 30, 50};
        String[] day_names = {"日", "一", "二", "三", "四", "五", "六"};
        for(int day_index = 0; day_index < 7; day_index++) {
            System.out.println("星期" + day_names[day_index] + "：" + num_visitors[day_index] + "人");
        }
    }
}
