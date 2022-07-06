import java.util.*;

class fact_using_re {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter Number: ");
        int num = sc.nextInt();
        System.out.println(rec(num));
    }

    static long rec(int n) {
        if (n > 0) {
            return n * rec(n - 1);
        } else {
            return 1;
        }
    }
}