abstract class vegetable{
	
	String color;
	vegetable(String a){
		color=a;
	}
	public abstract String toString();
}

class Potato extends vegetable{
	
	Potato(String a){
		super(a);
	}
	public String toString(){
		return "Potato :"+color;
	}
}

class Brinjal extends vegetable{
	
	Brinjal(String a){
		super(a);
	}
	public String toString(){
		return "Brinjal :"+color;
	}
}

class Tomato extends vegetable{
	
	Tomato(String a){
		super(a);
	}
	public String toString(){
		return "Tomato :"+color;
	}
}

public class first{
	public static void main(String[] args) {
		Potato po = new Potato("Cream");
		Brinjal br = new Brinjal("Purple");
		Tomato ta = new Tomato("Red");
		System.out.println(po);
		System.out.println(br);
		System.out.println(ta);


	}
}


















