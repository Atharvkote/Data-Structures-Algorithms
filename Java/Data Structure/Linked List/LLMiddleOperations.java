public void addInMiddle(int index, String data) {
       if(index > size || index < 0) {
           System.out.println("Invalid Index value");
           return;
       }
       size++;
       Node newNode = new Node(data);
       if(head == null || index == 0) {
           newNode.next = head;
           head = newNode;
           return;
       }
        Node currNode = head;
       for(int i=1; i<size; i++) {
           if(i == index) {
               Node nextNode = currNode.next;
               currNode.next = newNode;
               newNode.next = nextNode;
               break;
           }
           currNode = currNode.next;
       }
   }
