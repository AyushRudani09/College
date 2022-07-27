class Node {
    int data;
    Node next;
}

class list {
    Node head;

    public void insert(int data) {
        Node node = new Node();
        node.data = data;
        node.next = null;

        if (head == null) {
            head = node;
        } else {
            Node n = head;
            while (n.next != null) {
                n = n.next;
            }
            n.next = node;
        }

    }

    public void show() {
        Node node = head;

        while (node.next != null) {
            System.out.println(node.data);
            node = node.next;
        }
        System.out.println(node.data);
    }
}

class linkedlist {
    public static void main(String[] args) {
        list l = new list();
        l.insert(5);
        l.insert(10);
        l.insert(15);
        l.show();
    }
}