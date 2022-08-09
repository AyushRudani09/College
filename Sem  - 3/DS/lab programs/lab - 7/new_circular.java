import java.util.Scanner;

public class new_circular{
    static int n = 5, f = -1, r = -1;
    static int[] que = new int[10];

    static void enqueue(int value) {
        if(f==0&&r==n-1||r==f-1){
            System.out.println("Overflow");
        }
        else{
            r=(r+1)%n;
            que[r] = value;
            if(f==-1){
                f=0;
            }
        }
    }

    static void dequeue() {
        if(f==-1){
            System.out.print("Under Flow");
        }
        else{
            if(f==r){
                f=r=-1;
            }
            else{
                f=(f+1)%n;
            }
        }
    }

    static void display() {
        System.out.println("queue elements->");
    if(r<=f){
     for(int i = f ; i < n ; i++){
        System.out.println(que[i]);
     }   
        for(int i = 0 ; i <= r ; i++){
        System.out.println(que[i]);
     }  
    }
    if(r>f){
        for(int i = f ; i <= r; i++){
        System.out.println(que[i]);
        }
    }

    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        while (true) {
            System.out.println("1.insert\n2.delete\n3.display\n4.exit");
            System.out.print("choose opt : ");
            int opt = sc.nextInt();
            switch (opt) {
                case 1:
                    System.out.print("Enter Value : ");
                    int value = sc.nextInt();
                    enqueue(value);
                    break;
                case 2:
                    dequeue();
                    break;
                case 3:
                    display();
                    break;
                case 4:
                    return;
            }

        }
    }
}
