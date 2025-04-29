import java.util.Scanner;

public class ReArrangeArrayByMovingTargetToTheEnd {
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
		for(int i=0;i<arrays.length;i++) {
			if(arrays[i]==target) {
				for(int j=i+1;j<n;j++) {
					if(arrays[j]!=target) {
						int temp=arrays[i];
						arrays[i]=arrays[j];
						arrays[j]=temp;
						break;
						
					}
				}
			}
		}
		for(int i=0;i<arrays.length;i++) {
			System.out.print(arrays[i]+" ");
		}

}}
