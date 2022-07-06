class pop_function {
    static int n = 5, top = -1;
    static int[] st = new int[100];

    static void push(int value) {
        if (top == n - 1) {
            System.out.println("Stack is Overflow\n");
        } else {
            top = top + 1;
            st[top] = value;
        }
    }

    static void pop() {
        if (top == -1) {
            System.out.println("Stack is Underflow\n");
        } else {
            top = top - 1;
        }
    }

    static void display() {
        if (top == -1) {
            System.out.println("Stack is Empty\n");
        } else {
            for (int i = 0; i <= top; i++) {
                System.out.println(st[i] + " ");
            }
        }
    }

    static void change(int i, int value) {
        if (i < 0 || i > top) {
            System.out.println("Stack is Empty\n");
        } else {
            st[i] = value;
        }
    }

    public static void main(String[] args) {
        System.out.println("Press 1 For push : ");
        System.out.println("Press 2 For pop : ");
        System.out.println("press 3 For change : ");
        System.out.println("Press 4 For display : ");
        System.out.println("press 5 For exit : ");
        int choice = 0;
        int value = 0;
        while (choice != 5) {
            System.out.println("Enter your choice : ");
            choice = Integer.parseInt(System.console().readLine());
            switch (choice) {
                case 1:
                    System.out.println("Enter the value : ");
                    value = Integer.parseInt(System.console().readLine());
                    push(value);
                    break;
                case 2:
                    pop();
                    break;
                case 3:
                    System.out.println("Enter the index : ");
                    int i = Integer.parseInt(System.console().readLine());
                    System.out.println("Enter the value : ");
                    value = Integer.parseInt(System.console().readLine());
                    change(i, value);
                    break;
                case 4:
                    display();
                    break;
                case 5:
                    System.out.println("Exit");
                    break;
                default:
                    System.out.println("Invalid choice");
                    break;
            }
        }

    }
}