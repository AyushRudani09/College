import java.util.Scanner;

public class demo {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.println("enter A : ");
        int a = sc.nextInt();
        System.out.println("enter B : ");
        int b = sc.nextInt();
        try {
            Integer.parseInt(sc.nextLine());
        } catch (NumberFormatException e) {

        }

        System.out.println("enter C : ");
        String c = sc.nextLine();

    }

}
