public static void preorder(Node root) {

       if(root == null) {

           System.out.print(-1+" ");

           return;

       }

       System.out.print(root.data+" ");

       preorder(root.left);

       preorder(root.right);

   }

