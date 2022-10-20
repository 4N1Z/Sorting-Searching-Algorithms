import java.util.Scanner;
import java.util.Arrays;

public class in_JAVA {

    // Sorts the array using the Bogo Sort algorithm
    public static void bogoSort (int[] arr) {
        while (!isSorted(arr)) {
            shuffle(arr);
        }
    }

    // Shuffle the array
    public static void shuffle (int[] arr) {
        for (int i = 0; i < arr.length; i++) {
            int j = (int) (Math.random() * arr.length);
            int temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
        }
    }

    // Returns true if the array is sorted
    public static boolean isSorted (int[] arr) {
        for (int i = 0; i < arr.length - 1; i++) {
            if (arr[i] > arr[i + 1]) {
                return false;
            }
        }
        return true;
    }

    public static void main(String[] args) {

        // declaring the scanner object
        Scanner sc = new Scanner(System.in);

        System.out.print("Enter space separated numbers: ");

        // Taking input from client
        String[] input = sc.nextLine().split(" ");

        int[] numbers = new int[input.length];
        
        // converting string array to integer array
        for (int i = 0; i < input.length; i++) {
            numbers[i] = Integer.parseInt(input[i]);
        }

        // sorting the array
        bogoSort(numbers);

        // printing the sorted array
        System.out.println("Sorted Array: " + Arrays.toString(numbers));

        // closing the scanner
        sc.close();
    }
}
