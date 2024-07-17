public static TreeInfo diameter(Node root) {

       if(root == null) {
           return new TreeInfo(0, 0);
       }

       TreeInfo leftTI = diameter(root.left);
       TreeInfo rightTI = diameter(root.right);

       int myHeight = Math.max(leftTI.height, rightTI.height) + 1;

       int diam1 = leftTI.height + rightTI.height + 1;
       int diam2 = leftTI.diam;
       int diam3 = rightTI.diam;

       int myDiam = Math.max(diam1, Math.max(diam2, diam3));
       return new TreeInfo(myHeight, myDiam);
}
