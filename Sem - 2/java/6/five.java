public class five {
	private double x, y;
	
	public five(){
		this(0,0);
	}
	
	public five(double x, double y){
		this.x = x;
		this.y = y;
	}
	
	public double getX(){
		return this.x;
	}
	
	public double getY(){
		return this.y;
	}
	
	public double distance(double x, double y){
		return Math.sqrt(Math.pow(x-this.x,2) + Math.pow(y-this.y,2));
	}
	
	public double distance(five point){
		return distance(point.getX(), point.getY());
	}
	
	public String toString() {
		return "(x,y) = (" + x + "," + y + ")";
	}
	
	public static void main(String[] args) {
		five point1 = new five();
		five point2 = new five(10,30.5);
		System.out.println("Point1 " + point1);
		System.out.println("Point2 " + point2);
		System.out.printf("Distance between Point1 and Point2 is %.2f units.\n", point1.distance(point2));
	}



}