class Node {
    int data;
    Node next;
}

class linkedList {
    Node head;

    void insert(int data) {
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

    void show() {
        Node node = head;
        while (node.next != null) {
            System.out.println(node.data);
            node = node.next;
        }
        System.out.println(node.data);

    }
}

public class test {
    public static void main(String[] args) {
        linkedList ll = new linkedList();
        ll.insert(15);
        ll.insert(20);
        ll.insert(50);
        ll.show();
    }
}
