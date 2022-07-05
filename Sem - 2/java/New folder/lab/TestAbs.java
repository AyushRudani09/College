interface Test{
	void show();
	void show2();
}
interface Test3 extends Test{

}
abstract class Test2{
	abstract void show3();
}
public class TestAbs extends Test2 implements Test{
	public void show(){

	}
	public void show2(){

	}
	public void show3(){

	}
	public static void main(String[] args) {
		System.out.print("Hi");
		
	}
}