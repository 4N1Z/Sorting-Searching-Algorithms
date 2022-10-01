
public class in_Java {

    public static void main(String[] args) {
        // This is the main function
        // Can add the required array
        // else remove and use as you wish.
    }



    static void insertion(int arr[]) {
        for (int i = 0; i < arr.length - 1; i++) {
            for (int j = i + 1; j > 0; j--) {
                if (arr[j] < arr[j - 1]) {
                    // swap
                    swaparray(arr, j, j - 1);
                } else {
                    break;
                }
            }
        }
    }

    // Function to swap array
    static void swaparray(int[] arr, int first, int second) {

        int temp = arr[first];
        arr[first] = arr[second];
        arr[second] = temp;

    }

}
