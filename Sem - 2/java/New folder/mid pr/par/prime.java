import java.util.Scanner;
public class prime{
	public static void main(String[] args) {
		Scanner ac = new Scanner(System.in);
		int num;
		int flage=0;
		System.out.print("Enter Number : ");
		num = ac.nextInt();
		for(int i=2; i<=num/2 ;i++){
			if(num%i==0){
				flage=1;
				break;
			}
		}
		if(flage==1){
			System.out.print("not prime");
		}
		else {
			System.out.print("prime");
		}
	}
}