
class Solution {
    public class TreeNode {
       int val;
       TreeNode left;
       TreeNode right;
       TreeNode() {}
       TreeNode(int val) { this.val = val; }
       TreeNode(int val, TreeNode left, TreeNode right) {
           this.val = val;
           this.left = left;
           this.right = right;
   }
 }
public List<List<Integer>> levelOrder(TreeNode root) {
        List<List<Integer>> values = new ArrayList<>();
        
        if (root == null) {
            return values;
        }
        
        Queue<TreeNode> queue = new ArrayDeque<>();
        queue.add(root);
        
        while (!queue.isEmpty()) {
            List<Integer> currentValues = new ArrayList<>();
            values.add(currentValues);
            
            int levels = queue.size();
            for (int i = 0; i < levels; ++i) {
                TreeNode current = queue.poll();
                currentValues.add(current.val);
                
                if (current.left != null) {
                    queue.add(current.left);
                }
                if (current.right != null) {
                    queue.add(current.right);
                }
            }
        }
        return values;
}
 public static void main(String args[]) {
       int nodes[] = {1, 2, 4, -1, -1, 5, -1, -1, 3, -1, 6, -1, -1};
       TreeNode tree = new TreeNode()   
       Node root = tree.buildTree(nodes);
       List<List<Integer>> result = LevelOrder(root);
       print(result);
          
 }
} 
}
