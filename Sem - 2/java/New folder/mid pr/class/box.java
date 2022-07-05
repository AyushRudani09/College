class boxmodel{
	double length;
	double width;
	double breadth;
}
class box{
	public static void main(String[] args) {
		boxmodel box1 = new boxmodel();
		boxmodel box2 = new boxmodel();
		box1.length=10;
		box1.width=5;
		box1.breadth=20;
		box2.length=20;
		box2.width=10;
		box2.breadth=40;
		System.out.print("Area is 1 " +(box1.length*box1.width*box1.breadth));
		System.out.print("Area is 2 " +(box2.length*box2.width*box2.breadth));
	}
}