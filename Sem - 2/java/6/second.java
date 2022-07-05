import java.util.Scanner;

class book
{
 private String[] author_name = {"Name 1","Name 2"};

 void display()
 {
  for(int i=0;i<author_name.length;i++)
  {
   System.out.println("Author names --> \t"+author_name[i]);
  }
 }
}

class book_publication extends book
{
 private String[][] title = {{"java","c lang","oopc"},{"os","micro processor 8085","microprocessor 8086"}};
 
 void display(int j)
 { 
  System.out.println("Books name of given author are....");
  System.out.println("------------------------------------------------");  
  for(int i=0;i<3;i++)
  {
   System.out.println(title[j][i]);
  }
 }
}

class paper_publication extends book
{
 private String[][] title ={{"Atul","Easy paper Solution"},{"Gala paper Solution","alpha paper Solution"}};
 
 void display(int j)
 {
  System.out.println("paper publication name of given author are....");
  System.out.println("------------------------------------------------");
  
  for(int i=0;i<2;i++)
  {
   System.out.println(title[j][i]);
  }
 }
}

class second
{ 
 public static void main(String [] args)
 {
 Scanner jaimin = new Scanner(System.in);
 book o=new book();
 book_publication b_o=new book_publication();
 paper_publication p_o=new paper_publication();
 
 
 int length=args.length;
 int author=0,choice;
 if(length==0)
 {
  System.out.println("please enter author name");
 }
 
 if(length>=2)
 {
  System.out.println("Add only one name to search names");
 }
 
 if(args[0].equals("Book1"))
 {
  author=0;
 }
 else if(args[0].equals("Book2"))
 {
  author=1;
 }
 else
 {
  System.out.println("You have added wrong name of author");
  System.exit(-1);
 }
 

 System.out.println("press \"1\" to display book author names\npress \"2\" to display book title names\npress \"3\" to display paper publication names ");
 choice=jaimin.nextInt();
 
 switch(choice)
 {
  case 1:
  o.display();
  break;
  
  case 2:
  b_o.display(author);
  break;
  
  case 3:
  p_o.display(author);
  break;
  
  default:
  System.out.println("wrong choice....");
  System.exit(-2);
  break;
  
 }
 
 }
}


