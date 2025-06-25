
public class ProductExceptSelf {
public static int[] productexceptself(int[] nums) {
	int n=nums.length;
	int[] left =new int[n];
	int[] right=new int[n];
	int[] result=new int[n];
	left[0]=1;
	for(int i=1;i<n;i++) {
		left[i]=left[i-1]*nums[i-1];
	}
	right[n-1]=1;
	for(int i=n-2;i>=0;i--) {
		right[i]=right[i+1]*nums[i+1];
		}
	for(int i=0;i<n;i++) {
		result[i]=left[i]*right[i];
	}
	return result;
	
	
	
}
public static void main(String[] args) {
	int[] nums= {2,7,6,5};
	int[] result=productexceptself(nums);
	System.out.println("result: ");
	for(int value:result) {
		System.out.print(value+" ");
	}
}
}
