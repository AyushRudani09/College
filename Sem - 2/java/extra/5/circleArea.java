import java.util.Scanner;
class circle{
	double r;
	public circle(int r){
		this.r = r;
	}
	public double getArea(){
		return 3.14*this.r*this.r;
	}
}
class circleArea{
	public static void main(String[] args) {
		circle c1 = new circle(10);
		System.out.print(c1.getArea());
	}
}