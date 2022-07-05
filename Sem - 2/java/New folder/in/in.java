class A
{
	int i=10;
}
class B extends A
{
	int j=20;
	
}
class C extends B
{
	int k=30;
	void disp()
	{
		System.out.println(i+j+k);
	}
}
 class SingleInheritDemo
{
	public static void main(String[] args) {
		C obj=new C();
		obj.disp();
		
	}
}