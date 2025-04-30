

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
	   public void pop() {
		   if(top==null) {
			   System.out.println("stack underflow");
			   return;
		   }else {
			   top=top.next;
		   }
	   }
	  	   
	  
	   
	   public void printList() {
		   if(top==null) {
			   System.out.println("empty");
			   return;
		   }Node current=top;
		   while(current!=null) {
			   System.out.print(current.data+"->");
			   current=current.next;
		   }
		   System.out.println("null");
		   
	   }
	  public static void main(String[] args) {
		Stack sc=new Stack();
		sc.push(10);
		sc.push(30);
		sc.push(40);
		sc.printList();
		sc.pop();
		sc.printList();

}}
