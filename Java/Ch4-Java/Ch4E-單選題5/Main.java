public class Main {

    public static void main(String[] args) {
        System.out.println(recursive_add(15));
    }

    public static int recursive_add(int n){
        if(n <= 2){
            return 5;
        }
        return n + recursive_add(n - 3);
    }
}
