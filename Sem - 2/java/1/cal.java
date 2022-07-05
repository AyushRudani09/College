import java.util.Scanner;

public class cal {
    public static void main(String[] args) {
        Scanner sc  = new Scanner(System.in);
        System.out.println("enter number  : ");
        int a = sc.nextInt();
        System.out.println("enter number  : ");
        int b = sc.nextInt();
        System.out.println("Chosse Any One");
        System.out.println("1.add");
        System.out.println("2.sub");
        System.out.println("3.multi");
        System.out.println("4.div");
        System.out.println("5.mod");
        System.out.println("select any one : ");
        char x = sc.next().charAt(0);
        switch(x){
            case '1' : 
            System.out.println("Your Ans is " +(a+b));
            break;
            case '2' : 
            System.out.println("Your Ans is " +(a-b));
            break;
            case '3' : 
            System.out.println("Your Ans is " +(a*b));
            break;
            case '4' : 
            System.out.println("Your Ans is " +(a/b));
            break;
            case '5' : 
            System.out.println("Your Ans is " +(a%b));
            break;
            default :
            System.out.println("wrong Input!");
            break;
        }
    }
}
