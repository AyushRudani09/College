import java.util.Scanner;

import java.util.Scanner;

class swap {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int a = sc.nextInt();
        int b = sc.nextInt();
        System.out.println("before swap: " + a + " " + b);
        swap(a, b);

    }

    static void swap(int a, int b) {
        int temp = a;
        a = b;
        b = temp;
        System.out.println("After swapping a = " + a + " and b = " + b);

    }
}