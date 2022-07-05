import java.util.Date;
class DemoThread extends Thread{
	long start,end,ans=0;
	public DemoThread(long start,long end){
		this.start = start;
		this.end = end;
	}
	public void run(){
			for(long i = start ; i < end ; i++){
				ans += i;
			}
	}
}
class first{
	public static void main(String[] args) {
		DemoThread dt1 = new DemoThread(0,5000000);
		DemoThread dt2 = new DemoThread(5000000,10000000);

		Date dt_1 = new Date();
		dt1.start();
		dt2.start();
			try {
  				dt1.join();
  				dt2.join();
			}
			catch(Exception e) {
			}	
		Date dt_2 = new Date();
		long diff = dt_2.getTime()-dt_1.getTime();
		System.out.println("time : "+diff);
		System.out.println(dt1.ans+dt2.ans);
	}	
}

