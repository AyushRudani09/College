import java.util.Scanner;

class Student
{
  int id_no,no_of_sub_registered;
  String[] sub_code=new String[7];
  int[] sub_credit=new int[3];
  String[] grade_obtain=new String[10];
  int[] grade_point=new int[10];
  double spi;
  int sum=0,sum1=0;
  
  Student()
  {
   no_of_sub_registered=7;
   sub_code[0]="CE15425";
   sub_credit[0]=2;
   sub_code[1]="ME26756";
   sub_credit[1]=5;
   sub_code[2]="CE63732";
   sub_credit[2]=6;
   
  }
  
  void calculate_spi()
  {  
   
   for(int i=0;i<=2;i++)
   { 
    

   
   
    if(grade_obtain[i].equals("AA"))
    grade_point[i]=10;
    else if(grade_obtain[i].equals("AB"))
    grade_point[i]=9;
    else if(grade_obtain[i].equals("BB"))
    grade_point[i]=8;
    else if(grade_obtain[i].equals("BC"))
    grade_point[i]=7;
    else if(grade_obtain[i].equals("CC"))
    grade_point[i]=6;
    else if(grade_obtain[i].equals("CD"))
    grade_point[i]=5;
    else if(grade_obtain[i].equals("DD"))
    grade_point[i]=4;
    else if(grade_obtain[i].equals("FF"))
    grade_point[i]=0;
    
    
    this.sum = sum+(sub_credit[i]*grade_point[i]);
    this.sum1 = sum1+sub_credit[i];
    
   }
 
   spi = sum/sum1;
   System.out.println("your spi is = "+spi);
  }
  
  }
  class first{
 public static void main(String [] args)
 { 
  Scanner jaimin=new Scanner(System.in);
  Student obj=new Student();
  int length =Integer.parseInt(args[0]);
  
  if(length <= 0)
  {
   System.out.println("enter enrollment no list");
   }
  
  
   
  for(int k=0;k < length ; k++)
  {
   System.out.println("Enter details about grade obtain for each subject \n");
   System.out.println("code credit grade \n");
   System.out.println("Student : " + k+1);
   
   for(int i=0;i<=2;i++)
   {
    System.out.print(obj.sub_code[i]+" "+ obj.sub_credit[i] +" : ");
    String r=jaimin.nextLine();
    obj.grade_obtain[i]=r;

   }
   
   obj.calculate_spi();   
  }
 }
}