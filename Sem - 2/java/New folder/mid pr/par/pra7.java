public class pra7{
	public static void main(String[] args) {
		for(int i = 5 ; i>=0;i--){
			for(int j = 5 ; j >=i ;j--){
				System.out.print(" ");
			}
			for(int j = 1 ; j <=i ;j++){
				System.out.print("* ");
			}
			System.out.print("\n");
		}
		for(int i = 1 ; i<=5;i++){
			for(int j = 5 ; j >=i ;j--){
				System.out.print(" ");
			}
			for(int j = 1 ; j <=i ;j++){
				System.out.print("* ");
			}
			System.out.print("\n");
		}
	}
}