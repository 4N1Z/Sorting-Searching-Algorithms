import java.util.*;

class Main {
    public static void main(String[] args) throws Exception {

        /**
         * Bucket Sort
         * 
         * Explanation:
         * Another sorting algorithm which doesn't use comparisons, The idea behind it
         * is to distribute the elements in a number of buckets and sort these buckets
         * using another sorting algorithm and then combine them so instead of sorting
         * larger array we end up sorting small chunks (can also be sorted in parallel)
         * & finally merge them up to get the final result so we end up consuming lesser
         * execution time.
         * 
         * There is no specific order of choosing the number of buckets, but the more
         * number of buckets the more execution time will be lesser as we need to sort
         * lesser items in each bucket, hence it ends being faster.
         * 
         * Each bucket should contain a Linked List as there could be multiple elements
         * going into the same buckets.
         * 
         * We start by iterating over the input array as soon as we encounter an element
         * divide it by the number of buckets & place it in the resultant bucket with
         * the index, After this, we sort these buckets individually once they are
         * filled & finally we iterate over the input array and
         * start filling the indexes with bucket elements in order 1,2 ... so on.
         * 
         * Space & Time complexity
         * 
         * Space -> O(n + k)
         * 
         * Time ->              Best    Worst
         * 
         * Distribution         O(n)    O(n)
         * 
         * Iterating Buckets    O(k)    O(k)
         * 
         * Sorting              O(1)    O(n^2)
         */
        System.out.println(Arrays.toString(bucketSort(new int[] { 4, 1, 5, 8, 9, 3 })));
    }

    static int[] bucketSort(int[] array) {
        // getting rid of Type Safety
        @SuppressWarnings("unchecked")

        // initializing buckets
        int bucketSize = 3; // choose as per choice
        LinkedList<Integer>[] buckets = new LinkedList[bucketSize];
        for (int i = 0; i < buckets.length; i++)
            buckets[i] = new LinkedList<>();

        // could be reffered to as hashing, here we are bucket index 
        // for the integer present in the input array and adding it to 
        // the linkedlist present at the same index 
        for (int i = 0; i < array.length; i++) {
            var index = array[i] / buckets.length;
            buckets[index == buckets.length ? index - 1 : index].addLast(array[i]);
        }

        // sorting each linkedlist as order of linkedlist 
        // is not maintained during insertion and finally populating
        // resultant array
        var i = 0;
        for (var bucket : buckets) {
            Collections.sort(bucket);
            for (var item : bucket)
                array[i++] = item;
        }

        return array;
    }
}
