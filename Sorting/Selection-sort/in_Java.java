import java.util.Arrays;

public class Selection {
    public static void main(String[] args) {
        int[] arr = {5, 3, 4, 1, 2};
        selection(arr);
        System.out.println(Arrays.toString(arr));
    }
    static void selection(int[] arr){
        for (int i = 0; i < arr.length; i++) {
            int last = arr.length-1 -i;

            int max = 0;
            for (int j = 0; j < arr.length - i; j++) {
                if(arr[max] < arr[j]){
                    max = j;
                }
            }

            int temp = arr[last];
            arr[last] = arr[max];
            arr[max] = temp;
        }
    }
}
