
public class LinkedList {
	
     class Node{
    	 int data;
    	 Node next;
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
		   if(head==null) {
			   tail=null;
		   }
		   return;
	   }
	   // for traversing
	   Node current=head;
	   while(current.next!=null&&current.next.data!=delN) {
		   current=current.next;
		   
	   }
	   if(current.next==null) {
		   System.out.println("node not found");
		   return;
	   }
	   current.next=current.next.next;
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
	   current.next=newNode;
	   if(newNode.next==null) {
		   tail=newNode;
	   }
   }
   public void removeadjacentDuplicates() {
	   if(head==null||head.next==null) {
		   System.out.println("empty");
		   return;
	   }
	   Node current=head;
	   while(current!=null&&current.next!=null) {
		   if(current.data==current.next.data) {
			   current.next=current.next.next;
		   }else {
			   current=current.next;
		   }
		   
	   }
	   tail=current;
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
	LinkedList list=new LinkedList();
	list.add(10);
	list.add(20);
	list.add(30);
	list.add(30);
	list.add(30);
	list.add(40);
	list.add(50);
	list.add(50);
	
	//list.printList();
	//list.delete(20);
	//list.printList();
	//list.delete(10);
	//list.printList();
	//list.delete(30);
	list.printList();
	//list.insertion(10, 01);
	//list.printList();
	//list.insertion(20, 02);
	list.removeadjacentDuplicates();
	list.printList();
	
	
}
}

