class time{
	int hr;
	int min;
	time(int h , int m){
		hr = h;
		min = m;
	}
	void add(time t){
		min = this.min+t.min;
		hr = this.hr+t.hr;
		while(min>=60){
			
			hr++;
			min -= 60;
			
		}
		System.out.print(hr+ ":" +min);
	}

}
class add_time{
	public static void main(String[] args) {
		time t1 = new time(5,20);
		time t2 = new time(6,40);
 		t1.add(t2);
	}
}