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
