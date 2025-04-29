import java.util.Scanner;

public class SameProblemWithLessTimeComplexity {
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
		int placer=0;
		for(int explorer=0;explorer<arrays.length;explorer++) {
			if(arrays[explorer]!=target) {
				arrays[placer]=arrays[explorer];
				placer++;
			}
		}
		while(placer<arrays.length) {
			arrays[placer]=target;
			placer++;
		}
		
		for(int i=0;i<arrays.length;i++) {
			System.out.print(arrays[i]+" ");
		}

}

}
