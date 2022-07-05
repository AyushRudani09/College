interface Transport{
	 public void deliver();

}
abstract class Animal{
	abstract void Showinfo();
}
class Tiger extends Animal{
	public void Showinfo(){
		System.out.println("Tiger");
	}
}
class Camel extends Animal{
	public void Showinfo(){
		System.out.println("Camel");
	}
}
class Deer extends Animal implements Transport{
	public void Showinfo(){
		System.out.println("Deer");
	}
	public void deliver(){
		System.out.println("Not");
	}
}
class Donkey extends Animal implements Transport{
	public void Showinfo(){
		System.out.println("Donkey");
	}
	public void deliver(){
		System.out.println("Not");
	}
}
class second{
	public static void main(String[] args) {
		Tiger tg = new Tiger();
		Camel cm = new Camel();
		Deer d = new Deer();
		Donkey don = new Donkey();
		tg.Showinfo();
		cm.Showinfo();
		d.Showinfo();
		don.Showinfo();
		
	}
}