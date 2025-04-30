

public class Queue {
	class Node{
   	 int data;
   	 Node next;
   	 Node(int data){
   		 this.data=data;
   		// this.next=next;
   		 
   	 }
	 
}
  public Node front =null;
  public Node rear= null;
 
  
  
  public void enqueue(int data) {
	   Node newNode=new Node(data);
	   if(front==null) {
		   front=rear=newNode;
		  
	   }else {
	          rear.next=newNode;
	          rear=newNode;
	          }
	   	   }
  public void dequeue() {
	   if(front==null) {
		   System.out.println("queue underflow");
		   return;
	   }else {
		   front=front.next;
	   }
  }
 	   
 
  
  public void printList() {
	   if(front==null) {
		   System.out.println("empty");
		   return;
	   }Node current=front;
	   while(current!=null) {
		   System.out.print(current.data+"->");
		   current=current.next;
	   }
	   System.out.println("null");
	   
  }
 public static void main(String[] args) {
	Queue sc=new Queue();
	sc.enqueue(10);
	sc.enqueue(30);
	sc.enqueue(40);
	sc.printList();
	sc.dequeue();
	sc.printList();

}

}
