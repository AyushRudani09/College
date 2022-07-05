import java.util.Scanner;
public class day{
	public static void main(String[] args) {
		Scanner ac = new Scanner(System.in);
		int day;
		System.out.print("Enter Day Number : ");
		day = ac.nextInt();
		switch(day){
			case 1:
			System.out.print("Monday");
			break;
			case 2:
			System.out.print("Thuesday");
			break;
			case 3:
			System.out.print("Wensday");
			break;
			case 4:
			System.out.print("Thursday");
			break;
			case 5:
			System.out.print("Frieday");
			break;
			case 6:
			System.out.print("Saturday");
			break;
			case 7:
			System.out.print("Sunday");
			break;
			default:
			System.out.print("Wrong Input");
			break;
		}
	}
}