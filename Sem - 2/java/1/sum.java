import java.util.Scanner;
class sum{
    public static void main(String[] args) {
        Scanner ac = new Scanner(System.in);
        int num1,num2;
        System.out.println("Enter Number : ");
        num1 = ac.nextInt();
        System.out.println("Enter Number : ");
        num2 = ac.nextInt();
        int sum  = num1+num2;
        System.out.println(num1 + " + " + num2 + " = " + sum );
    }
}