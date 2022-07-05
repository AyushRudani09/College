import java.util.Scanner;
public class consonant{
	public static void main(String[] args){
		int conso=0;
		int wol=0;
		Scanner ac = new Scanner(System.in);
		System.out.print("Enter String  : ");
		String str = ac.nextLine();
		str  = str.toLowerCase();
		for(int i = 0; i < str.length() ; i++){
			if(str.charAt(i)=='a'|| str.charAt(i)=='e'|| str.charAt(i)=='i'|| str.charAt(i)=='o'|| str.charAt(i)=='u'){
				wol++;
			}
			else{
				conso++;
			}
		}
		System.out.println("Consonant : " + conso);
		System.out.println("vowels : " + wol);
	}
}