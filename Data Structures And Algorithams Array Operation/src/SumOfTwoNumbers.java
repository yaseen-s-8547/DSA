import java.util.Scanner;

public class SumOfTwoNumbers {
	public static int[] twonumbers(int[] array,int targ) {
		for(int i=0;i<array.length;i++) {
			for(int j=1;j<array.length-1;j++) {
				if(array[i]+array[j]==targ) {
					return new int[] {array[i],array[j]};
				}
			}
		}
		return new int[0];
	}
	public static void main(String[] args) {
		Scanner sc=new Scanner(System.in);
		System.out.println("sise of the array ?");
		int n=sc.nextInt();
		int [] arrays =new int[n];
		System.out.println("eneter the elemets");
		for(int e=0;e<n;e++) {
			 arrays[e]=sc.nextInt();
		}
		System.out.println("enter the target");
		int target=sc.nextInt();
		int []result=twonumbers(arrays,target);
		for(int i=0;i<result.length;i++) {
			System.out.println(result[i]);
		}
				
	}

}

