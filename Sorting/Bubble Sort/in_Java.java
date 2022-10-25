
public class in_Java {

    public static void main(String[] args) {
      //Declare array
        int[] arr = {5, 4, 3, 2, 1, 3, 4, 5, 6, 7, 8, 9, 0};
//Printing ARRAY Before Sorting
        System.out.println("Printing ARRAY Before Sorting");
        for (int i : arr
        ) {
            System.out.print(i + ",");

        }
        System.out.println("");
//Main Logic

        for (int i = 0; i < arr.length; i++) {
            for (int j = i + 1; j < arr.length; j++) {
                if (arr[j] < arr[i]) {
//                    System.out.println("swapped");
                    int temp = arr[j];
                    arr[j] = arr[i];
                    arr[i] = temp;
                }


            }

        }
//Printing ARRAY After Sorting
        System.out.println("Printing ARRAY After Sorting");
        for (int i : arr
        ) {
            System.out.print(i + ",");

        }
    }
    
  

    
}
