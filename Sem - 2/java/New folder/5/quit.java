import java.util.Scanner;
class loop{
	public loop(){
		String srt;
		int count = 0;
		Scanner ac = new Scanner(System.in);
		do{
			System.out.print("Enter value : ");
			srt = ac.nextLine();
			for(int i = 0; i < srt.length();i++){
				if(srt.charAt(i)=='a'||srt.charAt(i)=='e'||srt.charAt(i)=='i'||srt.charAt(i)=='o'||srt.charAt(i)=='u'){
					count++;
				}
			}
		}while(!srt.equals("quit"));
		System.out.print(count-2);
	}
}
class quit{
	public static void main(String[] args) {
		loop l = new loop();
	}
}