
public class MineClass {
public static void main(String[] args) {
	int[] arr = {5, 7, 2, 9, 1};
	int first=Integer.MIN_VALUE;
	int second=Integer.MIN_VALUE;
	for(int num:arr) {
		System.out.println("Checking: " + num + ", first: " + first + ", second: " + second);
		if(num>first) {
			second=first;
			first=num;
		}else if(num>second && num!=first) {
			second=num;
		}
		
	}
	if(second==Integer.MIN_VALUE) {
		System.out.println("second element not found");
	}else {
		System.out.println("second largest element is: "+second);
	}
}
}
