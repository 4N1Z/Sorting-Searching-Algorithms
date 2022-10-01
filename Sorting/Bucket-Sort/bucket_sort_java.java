import java.util.*;

class Main {
    public static void main(String[] args) throws Exception {

		/**
	    * Bucket sort
	    */
	    System.out.println(Arrays.toString(bucketSort(new int[] { 4, 1, 5, 8, 9, 3 })));
	}

	static int[] bucketSort(int[] array) {
	    @SuppressWarnings("unchecked")
        LinkedList<Integer>[] buckets = new LinkedList[3];

        for (int i = 0; i < buckets.length; i++) {
            buckets[i] = new LinkedList<>();
        }
        for (int i = 0; i < array.length; i++) {
            var index = array[i] / buckets.length;
            buckets[index == buckets.length ? index - 1 : index].addLast(array[i]);
        }

        var i = 0;
        for (var bucket : buckets) {
            Collections.sort(bucket);
            for (var item : bucket) {
                array[i++] = item;
            }
        }

        return array;
    }
}
