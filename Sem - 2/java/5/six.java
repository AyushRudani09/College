class six {
	static int count;
	six(){
		count++;
	}
	void print(){
		System.out.print("Number Of Object : " + count);
	}
	public static void main(String args[])
	{
		six s1 = new six();
		six s2 = new six();
		six s3 = new six();
		six s4 = new six();
		six s5 = new six();
		s5.print();
	}
}
