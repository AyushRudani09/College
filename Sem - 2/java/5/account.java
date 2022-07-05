class Bank_Account{
	int accountNo;
	String userName;
	String email;
	String accountType;
	double accountBalance;
	void getAccountDetails(int a, String b, String c, String d, double e){
		accountNo = a;
		userName = b;
		email = c;
		accountType = d;
		accountBalance = e;
	}
	void displayAccountDetails(){
		System.out.println("account No : "+accountNo);
		System.out.println("user Name : "+userName);
		System.out.println("email : "+email);
		System.out.println("account Type : "+accountType);
		System.out.println("account Balance : "+accountBalance);
	}
}
class account{
	public static void main(String[] args) {
		Bank_Account bc1 = new Bank_Account();
		bc1.getAccountDetails(101,"name1","abc1@gmail.com","Svaing",10000.1235D);
		bc1.displayAccountDetails();
		Bank_Account bc2 = new Bank_Account();
		bc2.getAccountDetails(102,"name2","abc2@gmail.com","Current",20000.1235D);
		bc2.displayAccountDetails();
	}
}