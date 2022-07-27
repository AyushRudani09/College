import java.util.*;

public class prefixToInfix {
    static char[] arr;

    static void stringReverse(String s) {
        arr = s.toCharArray();
        int i = 0;
        int j = arr.length - 1;
        while (i < j) {
            char temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
            i++;
            j--;
        }

    }

    static int n = 100, top = -1;
    static char[] stack = new char[n];
    static String ans = "";

    static void push(char s) {
        if (top == n - 1) {
            return;
        } else {
            top++;
            stack[top] = s;
        }
    }

    static void pop() {
        if (top == -1) {
            return;
        } else {
            top--;
        }
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        char in = '(';
        String s = sc.nextLine();
        s = in + s + ')';
        int i = 0;
        while (i < arr.length) {
            if (arr[i] == '(') {
                push(arr[i]);
            } else if (arr[i] == ')') {
                while (stack[top] != '(') {
                    System.out.print(stack[top]);
                    pop();
                }
                pop();
            } else if (arr[i] == '+' || arr[i] == '-' || arr[i] == '*' || arr[i] == '/') {
                while (top != -1 && stack[top] != '('
                        && (stack[top] == '+' || stack[top] == '-' || stack[top] == '*' || stack[top] == '/')) {
                    System.out.print(stack[top]);
                    pop();
                }
                push(arr[i]);
            } else {
                ans = ans + arr[i];
            }
            i++;
        }
        System.out.println(ans);
    }
}
