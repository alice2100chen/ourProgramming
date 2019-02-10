import java.util.Arrays;

public class Main {

    public static void main(String[] args) {
        int[] num_visitors = {70, 10, 14, 7, 25, 30, 50}; // 索引0~6代表星期日到六
        System.out.println(Arrays.toString(num_visitors));
        int temp = num_visitors[0];         // 把星期日的人數70給temp
        num_visitors[0] = num_visitors[6];  // 把星期六的人數50給星期日
        num_visitors[6] = temp;             // 把temp的70給星期六
        System.out.println(Arrays.toString(num_visitors));
    }
}
