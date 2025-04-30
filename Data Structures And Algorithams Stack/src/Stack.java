import LinkedList.Node;

public class Stack {
	   class Node{
	    	 int data;
	    	 Node next;
	    	 Node(int data){
	    		 this.data=data;
	    		// this.next=next;
	    		 
	    	 }
		 
	 }
	   public Node top =null;
	  
	   
	   
	   public void push(int data) {
		   Node newNode=new Node(data);
		   if(top==null) {
			   top=newNode;
			  
		   }else {
		          newNode.next=top;
		          top=newNode;
		          }
		   	   }
	  	   
	  
	   
	   public void printList() {
		   if(head==null) {
			   System.out.println("empty");
			   return;
		   }Node current=head;
		   while(current!=null) {
			   System.out.print(current.data+"->");
			   current=current.next;
		   }
		   System.out.println("null");
		   
	   }
	  public static void main(String[] args) {
		

}}
