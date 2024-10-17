class TreeNode {
    int val;
    TreeNode left;
    TreeNode right;
    TreeNode(int x) { val = x; }
}

class Solution {
    // Method to calculate the height of a tree
    public static int height(TreeNode root) {
        if (root == null) {
            return 0;
        }

        int Lheight = height(root.left);
        int Rheight = height(root.right);

        return Math.max(Lheight, Rheight) + 1;
    }

    // Method to calculate the diameter of a tree
    public int diameter(TreeNode root) {
        if (root == null) {
            return 0;
        }

        int Lheight = height(root.left);
        int Rheight = height(root.right);

        // Diameter passing through the root
        int rootDiameter = Lheight + Rheight;

        // Diameter not passing through the root
        int leftDiameter = diameter(root.left);
        int rightDiameter = diameter(root.right);

        // The diameter is the maximum of the above three values
        return Math.max(rootDiameter, Math.max(leftDiameter, rightDiameter));
    }

    // Main method to be called to get the diameter of a binary tree
    public int diameterOfBinaryTree(TreeNode root) {
        return diameter(root);
    }
}
