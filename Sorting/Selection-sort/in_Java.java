/*
as we all know there a lot of cases where we need to sort the data mostly we do this task with ids and in some algos also you need sorted data
great example is binary search so now, we know sorting is important so here is the famous selection sort!!

as its name selection sort, we all may have thought of it like we are selecting smething and that's exactly what we do!

1. we select the last elemnent.
2. we run a for loop for finding the max elmnt in the array.
3. then we as we have our max and the last element of the unsorted array,
    and its common sense that in the sorted array the max elmnt should be in last.
4. now what left? just swap the last elmnt with the max elmnt

we run these steps for every element in our array with the outer loop that runs n times and we run the inner loop n -i times as after the one paas
of outer loop the last elemnt will be on its correct position so no need to compare that in inner loop.

and this give us what we want a SORTED ARRAY!!

time complexity of this algorithm is : O(n^2)


here is the code in java :-
*/


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
