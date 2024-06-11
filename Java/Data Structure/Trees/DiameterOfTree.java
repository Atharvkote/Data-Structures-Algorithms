public static int diameter(Node root) {

       if(root == null) {

           return 0;

       }


       int diam1 = height(root.left) + height(root.right) + 1;

       int diam2 = diameter(root.left);

       int diam3 = diameter(root.right);


       return Math.max(diam1, Math.max(diam2, diam3));

}
