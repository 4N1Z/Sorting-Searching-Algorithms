public class insertionsort{
    void sort(int arr[]){
        int i,j,key;

        for(i=1;i<arr.length;i++){
            key = arr[i];
            j=i-1;

            while(j>=0 && arr[j]>key){
                arr[j+1] = arr[j];
                j=j-1;
            }

            arr[j+1] = key;
        }
    }

    void print(int arr[]){
        for(int i=0;i<arr.length;i++){
            System.out.println(arr[i]);
        }
    }

    public static void main(String[] args){
        int arr[] ={12,11,13,5,6,7};
        
        insertionsort i = new insertionsort();
        i.sort(arr);
        i.print(arr);
    }
}
