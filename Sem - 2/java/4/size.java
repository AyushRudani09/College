import java.util.Scanner;
public class size{
public static void main(String[] args){
		Scanner ac = new Scanner(System.in);
		System.out.print("Enter String  : ");
		String str = ac.nextLine();
		System.out.println(str.length());
		int hstr  = str.length();
		for(int i = hstr/2 ; i < hstr ; i++){
			System.out.print(str.charAt(i));
		}
	}
}