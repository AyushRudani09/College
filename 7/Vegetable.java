public abstract class Vegetable
{
 String color;
 public abstract String toString();
 public static void main(String a[])
 {
  Vegetable v=new Potato();
  System.out.println(v.toString());
  Vegetable v1=new Brinjal();
  System.out.println(v1.toString());
  Vegetable v2=new Tomato();
  System.out.println(v2);
 }
}
class Potato extends Vegetable
{
 Potato()
 {
  color="white Potato";
 }
 public String toString()
 {
  return("Color of Potato: "+this.color);
 }
}
class Brinjal extends Vegetable
{
 Brinjal()
 {
  color="dark purple";
 }
 public String toString()
 {
  return("Color of Brinjal: "+this.color);
 }
}
class Tomato extends Vegetable
{
 Tomato()
 {
  color="Red";
 }
 public String toString()
 {
  return("Color of Tomato: "+this.color);
 }
}