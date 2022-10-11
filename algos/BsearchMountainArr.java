// finding the taret element in a mountain array

public class BsearchMountainArr {
	public static void main(String[] args) {
		int[] arr = {1,2,4,5,3,1};
		int target = 3;
		int maxEle = findIndex2(arr);
		int res1 = SearchEle(arr,target,0,maxEle);
		int res2 = SearchEle(arr,target,maxEle+1, arr.length-1); 
		if(res1 == -1 && res2 == -1) {
			System.out.println("element not found");
		}
		else {
			if(res1 == -1) {
				System.out.println(res2);
			}
			else {
				System.out.println(res1);
			}
		}
	}
	public static int SearchEle(int[] arr, int target, int start, int end){
		while(start<=end){
            int mid = start + (end-start) /2;

            if(target<arr[mid]){
                if(arr[0]>arr[arr.length-1]){
                    start = mid+1;
                }
                else{
                    end = mid - 1;
                }
            }
            else if(target>arr[mid]){
                if(arr[0]>arr[arr.length-1]){
                    end = mid - 1;
                }
                else{
                    start = mid+1;
                }
            }
            else if(target == arr[mid]){
                return mid;
            }
        }
        
        return -1;
    }
	public static int findIndex2(int[] arr){
		int start = 0;
		int end = arr.length-1;
        while(start<end){
            int mid = start + (end-start) /2;
            
            if(arr[mid]>arr[mid+1]) {
            	end=mid;
            }else {
            	start = mid+1;
            }
        }
        return start;
	}
}
