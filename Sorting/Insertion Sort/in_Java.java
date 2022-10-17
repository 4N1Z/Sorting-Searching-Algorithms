
public class in_Java {

    public static void main(String[] args) {
        // This is the main function
        // Can add the required array
        // else remove and use as you wish.
    }



    static void insertion(int arr[]) {
        int ele,j;
		for(int i=1;i<arr.length;i++){
		    ele=a[i];
		    j=i-1;
		    while(j>=0&&a[j]>ele){
		        a[j+1]=a[j];
		        j--;
		    }
		    a[j+1]=ele;
		}
    }
}   
