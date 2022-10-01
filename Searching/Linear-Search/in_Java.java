/*
 <<<<<<<<<< NOTE >>>>>>>>>

 - Create a class with the name of the java program.
 - place this code inside that class
 - eg: public class name_of_the_java_prgrm
*/

/*
 * 
 *  * LINEAR SEARCH -
     * Start searching from the first element till you find the element in the array.
     * return the index.
     * 
     * -if value doesnt exist then return -1.
     * -max comaprisons in the worst case will be 'N'(big-oh(N))
 */


 public class in_Java{
 
    //Code starts from here
    static void linearsearch(int arr[], int target) {
        int found = 0;
        int index = 0;

        for (int i = 0; i < arr.length; i++) {
            
            if (target == arr[i]) {//if the index is found 
                found = 1;
                index = i+1;//increase the index number by one since array index starts with 0
            }
        }
        if (found == 0)
            System.out.println("Not found");
        else
            System.out.println("Found at position : " + index);
    }

    
 }
