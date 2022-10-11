/*
 <<<<<<<<<< NOTE >>>>>>>>>

 - Create a class with the name of the java program.
 - place this code inside that class
 - eg: public class name_of_the_java_prgrm
*/

/*
 * 
 *  * LINEAR SEARCH -
     * Start searching from the first element till you find the element in an array
     * and return the index.
     * 
     * -if value doesnt exist then return -1.
     * -max comaprisons in the worst case will be 'N'(big-oh(N))
     * the space complexity of linear search algorithm is big-oh(1) since searching doesn't requires any extra space. 
     * the time complexity of linear search algorithm is big-oh(N) since in the worst case it will be doing big-oh(N) comparisons. 
 */

import java.util.*;
 public class in_Java{
 
    //Code starts from here
    static void linearSearch(int arr[], int target) {
        int found = 0;
        int index = 0;

        for (int i = 0; i < arr.length; i++) {
            
            if (target == arr[i]) {// if index is found 
                found = 1;
                index = i+1;//increase the index number since array index starts with 0
            }
        }
        if (found == 0)
            System.out.println("Not found");
        else
            System.out.println("Found at position : " + index);
    }   
    public static void main(String[]args){
        System.out.println("Input the Array Length");
        Scanner in=new Scanner(System.in);
        int in_p=in.nextInt();
        int[] a=new int[in_p];
        for(int i=0;i<in_p;i++){
            Scanner in_a=new Scanner(System.in);
            int in_pa=in.nextInt();
            a[i]=in_pa;
        }
        Scanner x=new Scanner(System.in);
        int target=x.nextInt();
        linearSearch(a,target);
    }
 }
