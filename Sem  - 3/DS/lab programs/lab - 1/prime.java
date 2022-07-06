import java.util.*;

public class prime {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter Number: ");
        int num = sc.nextInt();
        int flag = 0;
        if (num == 0) {
            System.out.println("nither prime or nt prime");
        } else if (num == 1) {
            System.out.println("prime");
        } else {
            for (int i = 2; i <= num / 2; i++) {
                if (num % i == 0) {
                    flag = 1;
                }
            }
            if (flag == 0) {
                System.out.println("prime");
            } else {
                System.out.println("Not Prime");
            }
        }
    }
}
