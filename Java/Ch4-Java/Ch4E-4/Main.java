public class Main {

    public static void main(String[] args) {
        System.out.println(gcd(8, 12));
    }

    public static int gcd(int p, int q){
        if(p < q){
            int tmp = p;
            p = q;
            q = tmp;
        }
        int r = p % q;
        if(r == 0){
            return q;
        }
        else{
            return gcd(q, r);
        }
    }
}
