public class five{
   double real, img;
	
   five(double r, double i){
	this.real = r;
	this.img = i;
   }
	
   public static five sum(five c1, five c2)
   {
        five temp = new five(0, 0);

        temp.real = c1.real + c2.real;
        temp.img = c1.img + c2.img;
        
        return temp;
    }
    public static void main(String args[]) {
	five c1 = new five(5.5, 4);
	five c2 = new five(1.2, 3.5);
        five temp = sum(c1, c2);
        System.out.printf("Sum is: "+ temp.real+" + "+ temp.img +"i");
    }
}