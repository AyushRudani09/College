public class pra5{
	public static void main(String[] args) {
		for(int i = 1 ; i <= 5 ; i++){
				for (int j = 5; j >= i; j--) {
                System.out.print(" ");
            }
  
            // loop to print the number of stars in each row
            for (int j = 1; j <= i; j++) {
                System.out.print("* ");
            }
			
			System.out.print("\n");
		}
	}
}