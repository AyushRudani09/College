import java.util.Scanner;
public class DemoProgram{
	public static void main(String[] agrs){
		Scanner sc = new Scanner(System.in);
		int n = sc.nextInt();
		int sum=0,maxNu=Integer.MIN_VALUE,minNum=Integer.MAX_VALUE;
		for(int i=0;i<n;i++){
			int temp = sc.nextInt();
			if(temp<minNum){
				minNum = temp;
			}
			if(temp>maxNu){
				maxNu = temp;
			}
			sum+=temp;
		}
		System.out.println("Avg "+(sum/n));
		System.out.println("min "+minNum);
		System.out.println("max "+maxNu);

	}
}