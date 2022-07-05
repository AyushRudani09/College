
import java.util.Scanner;
class binArray {
    public static void main(String[] args) {
        int arry[] = {1,2,3,4,5,6};
        Scanner ac = new Scanner(System.in);
        int num = ac.nextInt();
        int low=0;
        int high = arry.length-1;
       int flage=0;
        while(high>=low){
            int mid =(high+low)/2;
            if(num < arry[mid]){
                high = mid - 1;
            }
            else if(num == arry[mid]){
                System.out.print("Fount At : " + mid);
                flage=1;
                break;
            }
            else{
                low = mid + 1;
            }
        }
        if(flage==0){
            System.out.print("Not Found");
        }
    }
}