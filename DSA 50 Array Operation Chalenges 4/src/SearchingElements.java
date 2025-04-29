import java.util.Scanner;
public class SearchingElements {
	

	
	    public static void main(String[] args) {
	        // Define the array
	        int[] arr = {5, 7, 2, 9, 1};
	        
	        // Create a Scanner object to get user input
	        Scanner scanner = new Scanner(System.in);
	        
	        // Ask user to enter the number to search
	        System.out.print("Enter a number to search: ");
	        int target = scanner.nextInt();
	        
	        // Initialize index to start searching from the first element
	        int i = 0;
	        
	        // While loop to search for the element
	        while (i < arr.length && arr[i] != target) {
	            i++; // Move to the next element
	        }
	        
	        // Check if the element is found or not
	        if (i < arr.length && arr[i] == target) {
	            System.out.println("Found at index " + i);
	        } else {
	            System.out.println("Element not found");
	        }
	        
	        // Close the scanner
	        scanner.close();
	    }
	}



