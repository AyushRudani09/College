import java.util.Scanner;
public class arrayAvrage{
	public static void main(String[] args){
		int sum=0;
		Scanner ac = new Scanner(System.in);
		int arraySize = ac.nextInt();
		int[] a = new int[arraySize];
		for(int i = 0 ; i < arraySize ; i++){
			System.out.print("Enter Number : ");
			a[i] = ac.nextInt();
		}
		for(int j = 0 ; j < arraySize ; j++){
			sum = sum+a[j];
		}
		System.out.print(sum/arraySize);
	}
}