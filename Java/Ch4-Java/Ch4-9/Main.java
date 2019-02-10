public class Main {

    public static void main(String[] args) {
        int[][] num_visitors = {
                {70, 10, 14, 7, 25, 30, 50},
                {30, 24, 14, 9, 87, 63, 25},
                {100, 52, 82, 89, 36, 78, 22}
        };
        String[] day_names = {"星期日", "星期一", "星期二", "星期三", "星期四", "星期五", "星期六"};
        for(int week_index = 0; week_index < 3; week_index++){// 有3個星期的資料，因此是0,1,2
            // 以下這個System.out.println()屬於外層迴圈
            System.out.println("第" + (week_index + 1) + "個星期");
            for(int day_index = 0; day_index < 7; day_index++){
                // 以下這個System.out.println()屬於內層迴圈
                System.out.println(day_names[day_index] + num_visitors[week_index][day_index] + "人");
            }
        }
    }
}
