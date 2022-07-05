import java.util.*;

class Member{
	String name;
	int age;
	int ph;
	String add;
	float salary;
	public void print_salary(){
		System.out.print(salary);
	}
	public Member(){}
	public Member(String a,int b, int c, String d,float f){
		name=a;
		age=b
;		ph=c;
		add=d;
		salary=f;

	}
}
class Emp extends Member{
	String sp;
	public Emp(){}
	public Emp(String a,int b, int c, String d,float f,String e){
		super(a,b,c,d,f);	
		sp=e;
	}
}
class man extends Member{
	String dep;

}
class ban{k
	public static void main(String[] args) {
		Emp e = new Emp("a",12,12345,"addss",12.2f,"as");
		e.print_salary();
	}
}

