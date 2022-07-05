import java.util.Scanner;
class circle_area{
	Double circle_area(double r){
	return 3.14*r*r;
	}
}
class area{
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		System.out.print("Enter R : ");
		Double r = sc.nextDouble();
		circle_area ar = new circle_area();
		System.out.print(ar.circle_area(r));
	}
}