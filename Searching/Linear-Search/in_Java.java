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
  
   public static void main(String a[]){    
        int[] arr = {10,58,97,50,65,22};    
        int key = 50;    // need to find 50 in above array 'arr'
    
        // calling our linear search function
        linearSearch(arr, key);   
    
    /*  Representation of how it works -
    
        [ 10  ,  58  ,  97  ,  50  ,  65  ,  22 ]
  i=0 ->  ⬆️                                           => arr[i] != key , so i++
  i=1 ->         ⬆️                                    => arr[i] != key , so i++
  i=2 ->                ⬆️                             => arr[i] != key , so i++
  i=3 ->                       ⬆️                      => here arr[i] == key , so we found the target in our array
  
  */
    
    }  
  
 }
