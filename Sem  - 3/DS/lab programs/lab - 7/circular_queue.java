import java.util.Scanner;

public class circular_queue {
    static int n = 5, front = -1, r = -1;
    static int[] que = new int[10];

    static void enqueue(int value) {
        if (r == n) {
            r = 0;
            if (front == 0) {
                System.out.println("overflow");
            } else {
                que[r] = value;
            }
        }
        if (front == r && front != 0 && front != -1) {
            System.out.println("overflow");
        } else {
            r++;
            que[r] = value;
            System.out.println("updated Succesfully....");
            if (front == -1) {
                front = 0;
            }
        }
    }

    static int dequeue() {
        int ans;
        if (front == -1) {
            System.out.println("underflow");
        }
        ans = que[front];
        if (front == n) {
            front = 0;
        } else {
            front++;
        }
        return ans;
    }

    static void display() {
        System.out.println("queue elements->");
        if (front < r) {
            for (int i = front; i <= r; i++) {
                System.out.println(que[i]);
            }
        } else {
            for (int i = 0; i < r; i++) {
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
                    System.out.println("deleted value is  : " + dequeue());
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
