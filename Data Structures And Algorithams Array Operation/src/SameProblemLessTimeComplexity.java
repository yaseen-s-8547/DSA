import java.util.HashSet;
import java.util.Scanner;
import java.util.Set;

public class SameProblemLessTimeComplexity {
	public static int[] twonumbers(int[] array,int targ) {
		Set<Integer>nums=new HashSet<>();
		for(int i=0;i<array.length;i++) {
			int num=array[i];
		int match=targ-num;
		if (nums.contains(match)) {
			return new int[] {num,match};
			
		}else {nums.add(num);
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
