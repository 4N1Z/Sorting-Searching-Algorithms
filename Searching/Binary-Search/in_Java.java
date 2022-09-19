
/*
         <<<<<<   Binary Search    >>>>>

     -It is used to search in sorted array.
     -arr=[2,4,6,9,11,12,14,20,36,48]
       to check whether 36 exist in arrar or not.
     -in binary search, take the middle of the element;.
     -that is, divide the indices by 2

     Why binary search ??
      -in the bst case, it only takes one step , that is its best  case complexity is constant(Doesnt matter time)
       big -0h(1)
      -In worst case, it take big-oh(log2(n)).

*/

/*
        <<<<<<   ALGORITHM $ LOGIC    >>>>>

   1. Find the middle element.
   2. If the target element is greater than the middle element then search in right
      otheriwse search in left(ascending array).
   3. If the middle element == my target element then ans found.
   4. Take two pointers as start and the end to find the middle.
   5. the mid=start+end/2
   6. Then if the ans is in the right then assign the start pointer to the next index just after the middle.
      (mid+1)
   7. then again check the middle.
   8. If the target is again greater than or equal to the middle ignore the left part and check the right
      else check the left.
   9. then assign start as mid+1.
   10. then check whether the if greater or equal to .
   11. If the start becomes greater than the end , then the target doesnot exist in the array.

*/
public class in_Java {

    // Code from here
    static int binarysearch(int arr[], int target) {
        int start = 0;
        int end = arr.length - 1;

        while (start <= end) {
            // find the middle element
            int mid = start + (end - start) / 2; // think

            if (target < arr[mid]) {
                end = mid - 1;

            } else if (target > arr[mid]) {
                start = mid + 1;
            } else {
                return mid; // ans
            }
        }

        return -1; // if nothing is executed then not exist
    }

}
