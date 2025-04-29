
public class DLinkedList {
	
     class Node{
    	 int data;
    	 Node next;
    	 Node prev;
    	 Node(int data){
    		 this.data=data;
    		// this.next=next;
    		 
    	 }
	 
 }
   public Node head=null;
   public Node tail=null;
   
   
   public void add(int data) {
	   Node newNode=new Node(data);
	   if(head==null) {
		   head=newNode;
		   tail=newNode;
	   }else {
		   tail.next=newNode;
		   newNode.prev=tail;
		   tail=newNode;
	   }
	   	   }
   public void delete(int delN) {
	   if(head==null) {
		   System.out.println("empty");
		   return;
	   }
	   if(head.data==delN) {
		   head=head.next;
		   if(head!=null) {
			   head.prev=null;
			   
		   }else {
			   tail=null;
		   }
		   
	   }
	   if(tail.data==delN) {
		   tail=tail.prev;
		   tail.next=null;
	   }
	   // for traversing
	   Node current=head;
	   while(current.next!=null&&current.data!=delN) {
		   current=current.next;
		   
	   }
	   if(current.next==null) {
		   System.out.println("node not found");
		   return;
	   }
	   current.prev.next=current.prev;
	   current.next.prev=current.prev;
	   
	   // to update the tail if we deleted the last node
	   if(current.next==null) {
		   tail=current;
	   }
   }
   public void insertion(int data,int position) {
	   Node newNode=new Node(data);
	   //if we want to insert at beginning
	   if(position==0) {
		   newNode.next=head;
		   newNode.prev=null;
		   head=newNode;
		   
		   return;
		   
	   }
	   // to add specifically
	   Node current=head;
	   int count=0;
	   while(current!=null && count<position-1) {
		   current=current.next;
		   count++;
	   }
	   if(current==null) {
		   System.out.println("position is out of bounds");
		   return;
	   }
	   newNode.next=current.next;
	   newNode.prev=current;
	   if(current.next!=null) {
		   current.next.prev=newNode;
	   }else {
		   tail=newNode;
	   }
	   current.next=newNode;
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
   public void printListReverse() {
	   if(head==null) {
		   System.out.println("empty");
		   return;
	   }Node current=tail;
	   while(current!=null) {
		   System.out.print(current.data+"->");
		   current=current.prev;
	   }
	   System.out.println("null");}
   
  public static void main(String[] args) {
	DLinkedList list=new DLinkedList();
	list.add(10);
	list.add(20);
	list.add(30);
	list.printList();
	//list.delete(20);
	list.printList();
	list.delete(10);
	list.printList();
	//list.delete(30);
	list.printList();
	list.insertion(10, 01);
	list.printList();
	list.insertion(20, 02);
	list.printList();
	list.printListReverse();
	
	
}
}
