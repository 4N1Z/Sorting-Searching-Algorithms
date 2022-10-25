package Sorting_Algos;

import java.util.Arrays;


/*
	Time Complexity of Cyclic sort is o(n^2).
	Space Complexit of Cyclic sort is o(1).
	
	This algo works when you have given that there are numbers from 0/1 to a Integer , and all the values will be there in Array , just on random Position . 
*/

public class Cyclic_Sort {
    public static void main(String[] args) {
        int[] arr = {2,4,5,7,3,1,6};
        cyclicSort(arr);
        System.out.println(Arrays.toString(arr));

    }
    public static void cyclicSort(int[] arr){
        int i = 0;
        while ( i < arr.length){
            int correctidx = arr[i] -1;
            if(arr[i] != arr[correctidx]){
                swap(arr , i , correctidx);
            }else{
                i++;
            }
        }
    }

     static void swap(int[] arr, int first, int second) {
        int temp = arr[first];
        arr[first] = arr[second];
        arr[second] = temp;
    }
}
