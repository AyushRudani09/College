import java.util.Scanner;
public class maxNumberFrom3{
	public static void main(String[] args) {
			Scanner ac = new Scanner(System.in);
			int a,b,c;
			System.out.print("Enter Number : ");
			a = ac.nextInt();
			System.out.print("Enter Number : ");
			b = ac.nextInt();
			System.out.print("Enter Number : ");
			c = ac.nextInt();
			if(a>b){
				if(a>c){
					System.out.print(a);
				}
				else{
					System.out.print(c);
				}
			}
			else if(b>c){
				System.out.print(b);
			}
			else{
				System.out.print(c);
			}
	}
}