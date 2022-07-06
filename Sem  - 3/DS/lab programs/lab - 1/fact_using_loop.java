import java.util.*;

class fact_using_loop {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter Number: ");
        int num = sc.nextInt();
        if (num == 0) {
            System.out.println("1");
        } else {
            int ans = 1;
            for (int i = 1; i <= num; i++) {
                ans = ans * i;
            }
            System.out.println(ans);
        }
    }
}