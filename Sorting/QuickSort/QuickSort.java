/**
 * Explanation:
 * 
 * In this algorithm, we start by selecting the item which is known as a pivot,
 * and then we re-arrange all the elements such that elements smaller than the
 * pivot are on the left side & elements larger than the pivot appear on the
 * right side of the pivot which is called partitioning, so we divide the array
 * into two partitions that are separated by the pivot.
 * 
 * The same process is continued into the other two partitions, also in the case
 * of reordering the items we did not worry about the right partition so we have
 * narrowed down the scope of our work this is the reason why quick sort has
 * logarithmic complexity because at every step we almost narrow down the size
 * of our partition almost breaking them into half.
 * 
 * Space & Time Complexity:
 * 
 * Space -> O(log(n))
 * 
 * Time -> O(n log(n))
 * 
 */

public class QuickSort {
  public static void sort(int[] arr) {
    sort(arr, 0, arr.length - 1);
  }

  private static void sort(int[] arr, int start, int end) {
    if (start >= end)
      return;
    int boundary = partition(arr, start, end);
    sort(arr, start, boundary - 1);
    sort(arr, boundary + 1, end);
  }

  private static int partition(int[] arr, int start, int end) {
    int pivot = arr[end];
    int boundary = start - 1;
    for (int i = start; i <= end; i++)
      if (arr[i] <= pivot)
        swap(arr, i, ++boundary);
    return boundary;
  }

  private static void swap(int[] arr, int i, int j) {
    int temp = arr[i];
    arr[i] = arr[j];
    arr[j] = temp;
  }
}
