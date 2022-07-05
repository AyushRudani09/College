class Phone{
	String manufacturer;
	String model;
	double storage;
	double screenSize;
	public String getManufactrer(){
		return manufacturer;
	}
	public void setManufacturer(String a){
		manufacturer = a;
	}
}
public class smartPhone{
	public static void main(String[] args) {
		Phone sp = new Phone();
		sp.setManufacturer("Samsung");
		String name = sp.getManufactrer();
		System.out.print(name);
	}
}