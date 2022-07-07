import java.util.*;

class infix_postfix {
    static int n = 100, top = -1;
    static char[] stack = new char[n];

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
        char[] infix = s.toCharArray();
        int i = 0;
        while (i < infix.length) {
            if (infix[i] == '(') {
                push(infix[i]);
            } else if (infix[i] == ')') {
                while (stack[top] != '(') {
                    System.out.print(stack[top]);
                    pop();
                }
                pop();
            } else if (infix[i] == '+' || infix[i] == '-' || infix[i] == '*' || infix[i] == '/') {
                while (top != -1 && stack[top] != '('
                        && (stack[top] == '+' || stack[top] == '-' || stack[top] == '*' || stack[top] == '/')) {
                    System.out.print(stack[top]);
                    pop();
                }
                push(infix[i]);
            } else {
                System.out.print(infix[i]);
            }
            i++;
        }
    }
}