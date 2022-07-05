class Member{
	String name;
	int age;
	int phoneNumber;
	String address;
	float salary;
	Member(float salary){
		this.name = name;
		this.age = age;
		this.phoneNumber = phoneNumber;
		this.address = address;
		this.salary = salary;
	}
	 void printsalary(){
	 	System.out.println(salary);
	 }
}
class Employee extends Member{
	String specialization;
	String name;
	int age;
	int phoneNumber;
	String address;
	float salary;
	Employee(String specialization,String name , int age , int phoneNumber , String address , float salary){
		super(name,age,phoneNumber,address,salary);
		this.specialization = specialization;

	}
	void display(){

		System.out.println(name);
		System.out.println(age);
		System.out.println(phoneNumber);
		System.out.println(address);

	}
 	void display_specialization(){
 		System.out.println(specialization);
 	}
}
class Manager extends Member{
	String department;
	String name;
	int age;
	int phoneNumber;
	String address;
	float salary;
	Manager(String department,String name , int age , int phoneNumber , String address , float salary){
		super(name,age,phoneNumber,address,salary);
		this.department = department;
		}
	void display_department(){
 		System.out.println(department);
 	}
 	void display(){

		System.out.println(name);
		System.out.println(age);
		System.out.println(phoneNumber);
		System.out.println(address);

	}
}
class p6_3{
	public static void main(String[] args) {
		Member m = new Member(12321);
		Member m1 = new Employee("department1","name1",12,123132,"hgadADHVA",12);
		Member m2 = new Manager("specialization1","name2",10,111111,"djkhkshf",110);
		m.printsalary();
		m1.display();
		m1.display_department();
		m2.display();
		m2.display_specialization();
	}
}