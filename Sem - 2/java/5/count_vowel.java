import java.util.*;

class count_vowel{
static int a,e,i,o,u;

public static void main(String[] args){
Scanner in=new Scanner(System.in);
String s=new String();
while(true) 
{
System.out.println("Enter A line :");
s=in.nextLine();
if(s.equals("quit"))
{
break;
}
else
{
int n=s.length()-1;
for(int x=0;x<=n;x++)
{
switch(s.charAt(x))
{
case 'a' : case 'A' : a++;  break;
case 'e' : case 'E' : e++;  break;
case 'i' : case 'I' : i++;  break;
case 'o' : case 'O' : o++;  break;
case 'u' : case 'U' : u++;  break;
}
}
}
}
System.out.println("\n\n Totle numbers of the vovels::");
System.out.println("a comes "+a+" times");
System.out.println("e comes "+e+" times");
System.out.println("i comes "+i+" times");
System.out.println("o comes "+o+" times");
System.out.println("u comes "+u+" times");
}
}