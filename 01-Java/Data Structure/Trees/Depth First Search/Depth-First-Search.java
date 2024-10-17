import java.util.Scanner;

public class BinaryTreeDFS {

    static class BinaryTree {
        Node root;

        static class Node {
            int data;
            Node left, right;

            Node(int item) {
                data = item;
                left = right = null;
            }
        }

        // Preorder traversal
        void preorder(Node node) {
            if (node == null) {
                return;
            }
            System.out.print(node.data + " ");
            preorder(node.left);
            preorder(node.right);
        }

        // Inorder traversal
        void inorder(Node node) {
            if (node == null) {
                return;
            }
            inorder(node.left);
            System.out.print(node.data + " ");
            inorder(node.right);
        }

        // Postorder traversal
        void postorder(Node node) {
            if (node == null) {
                return;
            }
            postorder(node.left);
            postorder(node.right);
            System.out.print(node.data + " ");
        }
    }

    public static void main(String[] args) {
        // Create a binary tree
        BinaryTree tree = new BinaryTree();
        tree.root = new BinaryTree.Node(1);
        tree.root.left = new BinaryTree.Node(2);
        tree.root.right = new BinaryTree.Node(3);
        tree.root.left.left = new BinaryTree.Node(4);
        tree.root.left.right = new BinaryTree.Node(5);
        tree.root.right.left = new BinaryTree.Node(6);
        tree.root.right.right = new BinaryTree.Node(7);

        // Scanner for user input
        Scanner scanner = new Scanner(System.in);

        System.out.println("Choose traversal type:");
        System.out.println("1: Preorder");
        System.out.println("2: Inorder");
        System.out.println("3: Postorder");

        int choice = scanner.nextInt();

        switch (choice) {
            case 1:
                System.out.println("Preorder traversal:");
                tree.preorder(tree.root);
                break;
            case 2:
                System.out.println("Inorder traversal:");
                tree.inorder(tree.root);
                break;
            case 3:
                System.out.println("Postorder traversal:");
                tree.postorder(tree.root);
                break;
            default:
                System.out.println("Invalid choice");
                break;
        }

        scanner.close();
    }
}
