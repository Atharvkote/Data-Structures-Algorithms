public static void postorder(Node root) {

       if(root == null) {

           System.out.print(-1+" ");

           return;

       }

       postorder(root.left);

       postorder(root.right);

       System.out.print(root.data+" ");

   }

