
public class countposnegzero {
	public static void main(String[] args) {
        int[] arr = {1, -3, 0, 4, -2, 0, 6};
        int positive = 0, negative = 0, zero = 0;

        for (int i = 0; i < arr.length; i++) {
            if (arr[i] > 0)
                positive++;
            else if (arr[i] < 0)
                negative++;
            else
                zero++;
        }

        System.out.println("Positive: " + positive);
        System.out.println("Negative: " + negative);
        System.out.println("Zero: " + zero);
    }


}
