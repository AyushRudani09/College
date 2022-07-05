import  java.util.Scanner;
public class arrayReverse{
	public static void main(String[] args){
		Scanner ac = new Scanner(System.in);
		int arraySize = ac.nextInt();
		int[] a = new int[arraySize];

		for(int i = 0 ; i < arraySize ; i++){
			System.out.print("Enter Number : ");
			a[i] = ac.nextInt();
		}
		for(int j = arraySize-1 ; j >= 0 ; j--){
			System.out.println(a[j]);
		}
		}
}