import java.util.Scanner;
import java.util.Arrays;

public class DNF_Sort {
    // Sorts the array using the DNF Sort algorithm
    public static void dnfSort(int arr[], int n){
        int low = 0, mid = 0, high = n-1;
        
        while(mid <= high){
            if(arr[mid] == 0){
                // swap arr[low] and arr[mid]
                int temp = arr[low];
                arr[low] = arr[mid];
                arr[mid] = temp;
                low++; mid++;
            }
            else if(arr[mid] == 1){
                mid++;
            }
            else{
                // swap arr[mid] and arr[high]
                int temp = arr[mid];
                arr[mid] = arr[high];
                arr[high] = temp;
                high--;
            }
        }
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
        dnfSort(numbers, numbers.length);

        // printing the sorted array
        System.out.println("Sorted Array: " + Arrays.toString(numbers));

        // closing the scanner
        sc.close();
    }
}
