import java.util.Scanner;
public class nagativeOrPositive{
	public static void main(String[] args) {
		Scanner ac = new Scanner(System.in);
		System.out.print("Enter Number : ");
		int a = ac.nextInt();
		if(a>0){
			System.out.print("positive");
		}
		else if(a==0){
			System.out.print("it's Zero");
		}
		else{
			System.out.print("nagative");
		}
	}
}