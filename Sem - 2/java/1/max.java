import java.util.Scanner;
class max{
    public static void main(String[] args) {
        Scanner ac = new Scanner(System.in);
        int num1,num2;
        System.out.println("Enter Number : ");
        num1 = ac.nextInt();
        System.out.println("Enter Number : ");
        num2 = ac.nextInt();
        if(num1>num2){
            System.out.println(num1 + " > " + num2);
        }
        else{
            System.out.println(num2 + " > " + num1);

        }
    }
}