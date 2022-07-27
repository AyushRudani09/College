import java.util.Scanner;

class queue {
    static int t = 0, r = 0, n = 4;
    static int[] q = new int[n];

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
                    insert(value);
                    break;
                case 2:
                    System.out.println("deleted value is  : " + delete());
                    break;
                case 3:
                    System.out.println("Queue : ");
                    dispaly();
                    break;
                case 4:
                    return;
            }

        }
    }

    public static void insert(int value) {
        if (r == n - 1) {
            System.out.println("queue over flow");
        } else {
            r++;
            q[r] = value;
            System.out.println("Queue Upadteted Succesfully");
            if (t == 0) {
                t = 1;
            }
        }
    }

    public static int delete() {
        int ans;
        if (t == 0) {
            System.out.println("Queue is Empty");
            return 0;
        } else {
            ans = q[t];
            if (t == r) {
                t = r = 0;
            } else {
                t++;
            }
            return ans;
        }
    }

    public static void dispaly() {
        for (int i = t; i <= r; i++) {
            System.out.println(q[i]);
        }
    }
}