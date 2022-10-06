
/*
<<<<<<   Jump Search     >>>>>

EXPLAINATION
-------------------------------------
-It can only be used in SORTED arrays.
-Based on searching a fewer number of elements compared to linear search
- The way it works:
	Divide the array to search into blocks
	Jump between the blocks until we find one that 'should' contain the searched value
	Use linear search on the block


BIG O ANALYSIS	
------------------------------------

-Best Case Scenario : O(1) -> When element is found in the very first block it searches
-Worst/Average Case Scenario: O(√n) since jump searches optimal jump values are √n


*/

public class in_Java {

	public static void main(String[] args) {
		//Test array
		int[] arrayToSearch = {0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20};
		//Element searched
		int element = 12;
		
		//We divide the array into sections in which we are going to search
	    int blockSize = (int) Math.sqrt(arrayToSearch.length);
	    // Hold the last index of the current block
	    int currentLastIndex = blockSize-1;
	    
	    System.out.println(jumpSearch(arrayToSearch, element, blockSize, currentLastIndex));

	}

	//This implementation is the recursive form of Jump Search
	public static int jumpSearch(int[] arrayToSearch, int element, int blockSize, int currentLastIndex) {
	    
		if (currentLastIndex < arrayToSearch.length && element > arrayToSearch[currentLastIndex]) {
	        currentLastIndex += blockSize;
	        return jumpSearch(arrayToSearch, element, blockSize, currentLastIndex);
	    } else {
	    	//Found block of array which contains element, continue using linear search
	        for (int currentSearchIndex = currentLastIndex - blockSize + 1;currentSearchIndex <= currentLastIndex && currentSearchIndex < arrayToSearch.length; currentSearchIndex++) {
	            if (element == arrayToSearch[currentSearchIndex]) return currentSearchIndex;
	        }
	    }
	    // Target element not found. Return negative value representing value not found
	    return -1;
	}
	
	
	
	
	
	
	
	
	
	
	
	

}
