
import java.util.*;

class Fibonacci {

	public static void main(String[] args)
		{
		int arr[] = { 10, 22, 35, 40, 45, 50,
					80, 82, 85, 90, 100,235};
		int n = 12;
		int x = 235;
		int ind = Search(arr, x, n);
		if(ind>=0)
		System.out.print("Found at index: "+ind);
		else
		System.out.print(x+" is not present in the array");
	}

	public static int min(int x, int y)
	{
		return (x > y) ? y : x;
	}


	public static int Search(int arr[], int x,int n)
	{
		
		int varMm2 = 0; 
		int varMm1 = 1; 
		int var = varMm2 + varMm1; 

		
		while (var < n) {
			varMm2 = varMm1;
			varMm1 = var;
			var = varMm2 + varMm1;
		}

		
		int offset = -1;

		while (var > 1) {
	
			int i = min(offset + varMm2, n - 1);

		
			if (arr[i] < x) {
				var = varMm1;
				varMm1 = varMm2;
				varMm2 = var - varMm1;
				offset = i;
			}

			
			else if (arr[i] > x) {
				var = varMm2;
				varMm1 = varMm1 - varMm2;
				varMm2 = var - varMm1;
			}
			else
				return i;
		}

		if (varMm1 == 1 && arr[n-1] == x)
			return n-1;

		return -1;
	}


	
}

