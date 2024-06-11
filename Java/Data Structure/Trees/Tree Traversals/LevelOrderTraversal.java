public static void levelOrder(Node root) {

       if(root == null) {

           return;

       }

       Queue<Node> q = new LinkedList<>();

       q.add(root);

       q.add(null);

       while(!q.isEmpty()) {

           Node curr = q.remove();

           if(curr == null) {

               System.out.println();

               //queue empty

               if(q.isEmpty()) {

                   break;

               } else {

                   q.add(null);

               }

           } else {

               System.out.print(curr.data+" ");

               if(curr.left != null) {

                   q.add(curr.left);

               }

               if(curr.right != null) {

                   q.add(curr.right);

               }

           }

       }

   }
