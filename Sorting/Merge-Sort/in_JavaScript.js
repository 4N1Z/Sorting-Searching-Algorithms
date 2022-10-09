// Overall time complexity of Merge sort is O(nLogn). It is more efficient as it is in worst case also the runtime is O(nlogn) The space complexity of Merge sort is O(n).



function merge(arr, l, m, r)
{
	// n1,n2 are the left and right limits
	var n1 = m - l + 1;
	var n2 = r - m;
	var L = new Array(n1);
	var R = new Array(n2);
	//splitting the given array to left and right parts
	for (var i = 0; i < n1; i++)
		L[i] = arr[l + i];
	for (var j = 0; j < n2; j++)
		R[j] = arr[m + 1 + j];
	var i = 0;
	var j = 0;
	var k = l;

	//comparing the elements in the two parts
	while (i < n1 && j < n2) {
		if (L[i] <= R[j]) {
			arr[k] = L[i];
			i++;
		}
		else {
			arr[k] = R[j];
			j++;
		}
		k++;
	}

	// adding the remaining elements of left part into the array
	while (i < n1) {
		arr[k] = L[i];
		i++;
		k++;
	}
	
	// adding the remaining elements of the right part into the array
	while (j < n2) {
		arr[k] = R[j];
		j++;
		k++;
	}
}

function mergeSort(arr,l, r){
	if(l>=r){
		return;
	}
	var m =l+ parseInt((r-l)/2);
	mergeSort(arr,l,m); //sorting the left part
	mergeSort(arr,m+1,r); //sorting the right part
	merge(arr,l,m,r); // merging the left and right part
}
// this is the main function , pass the array into this function
function merge_sort(arr) {
	mergeSort(arr,0,arr.length-1); // This function changes the passed arr variable itself
	console.log("array sorted");
}