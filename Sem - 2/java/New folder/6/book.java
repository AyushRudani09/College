import java.util.Scanner;
 class book1{
	private String  author_name;	
		public book1(String author_name){
		this.author_name = author_name;
			}
		void display(){
			System.out.println(author_name);
			}
}
 class book_publication extends book1{
	private String title;
		 book_publication(String title){
		 	super("");
		this.title = title;
		}
		 void display(){
			System.out.println(title);
		
		}
	}
 class paper_publication extends book1{
	private String title;
		paper_publication(String title){
			super("");
		this.title = title;
		}
		 void display(){
			System.out.println(title);
			
		}
	}

class book{
	public static void main(String[] args) {
		book1 b = new book1(args[0]);
		book1 b1 = new book_publication(args[1]);
		book1 b2 = new book_publication(args[2]);
		b.display();
		b1.display();
		b2.display();
	}
}