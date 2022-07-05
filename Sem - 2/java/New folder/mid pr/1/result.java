import java.util.Scanner;
public class result{
	public static void main(String[] args) {
		Scanner ac = new Scanner(System.in);
		int s1,s2,s3,s4,s5;
		System.out.print("Enter Mark Of Subject 1 :");
		s1 = ac.nextInt();
		System.out.print("Enter Mark Of Subject 2 :");
		s2 = ac.nextInt();
		System.out.print("Enter Mark Of Subject 3 :");
		s3 = ac.nextInt();
		System.out.print("Enter Mark Of Subject 4 :");
		s4 = ac.nextInt();
		System.out.print("Enter Mark Of Subject 5 :");
		s5 = ac.nextInt();
		int pre = (s1 + s2 + s3 + s4 + s5) / 5;
		if(pre>60){
			System.out.print("First Division");
		}
		else if(pre>50){
			System.out.print("Second Division");
		}
		else if(pre>40){
			System.out.print("Third Division");
		}
		else{
			System.out.print("Fail");
		}
	}
}