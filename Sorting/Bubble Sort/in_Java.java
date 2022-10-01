
public class in_Java {

    public static void main(String[] args) {
        
    }
    
    static void bubble(int arr[]){
        boolean swapped;
        //runs steps n-1 times
        for(int i=0;i<arr.length-1;++i){
            swapped=false;
            for(int j=1;j<arr.length-i;++j){
 
             if(arr[j]<arr[j-1]){
             //then swap
             int temp;
             temp=arr[j];
             arr[j]=arr[j-1];
             arr[j-1]=temp;
            swapped=true;
 
             }
            }
            //if did not swap for a particular value if i, it means the array is sorted hence stop the program
            if(swapped==false){
                break;
            }
            //without this if condition it would be of  o(n^2),but with this condition it becomes o(n).
        }
    }

    
}
