import java.util.*;

class postfixToInfix {
    static int top = -1, n = 100;
    static String[] stack = new String[n];

    static void push(String value) {
        if (top == n - 1) {
            System.out.println("Stack Overflow");
            return;
        } else {
            top++;
            stack[top] = value;
        }
    }

    static void pop() {
        if (top == -1) {
            System.out.println("Stack Underflow");
            return;
        } else {
            top--;
        }
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String str = sc.nextLine();
        str = str + ')';
        char[] postfix = str.toCharArray();
        int i = 0;
        while (i < postfix.length) {
            if (postfix[i] == '+' || postfix[i] == '-' || postfix[i] == '*' || postfix[i] == '/') {
                String A = stack[top] + "";
                String B = stack[top - 1] + "";
                top = -1;
                String ans = B + postfix[i] + A;
                push(ans);
            } else if (postfix[i] == ')') {
                System.out.println(stack[0]);
            } else {
                push(postfix[i] + "");
            }
            i++;
        }
    }
}