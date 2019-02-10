import java.util.Arrays;

public class Main {

    public static void main(String[] args) {
        int[] num_visitors = {70, 10, 14, 7, 25, 30, 50}; // 索引0~6代表星期日到六
        System.out.println(Arrays.toString(num_visitors));
        swap(num_visitors, 0, 6);
        System.out.println(Arrays.toString(num_visitors));
    }

    public static void swap(int[] a, int i, int j){
        int temp = a[i];
        a[i] = a[j];
        a[j] = temp; // 不必return
    }
}
