//-----------------------------------
//INTERPOLATION SEARCH in Javascript
//-----------------------------------
// Interpolation Search is an improved variant of binary search. This search algorithm works on the probing position of the required value. For this algorithm to work properly, the data collection should be in a sorted form and equally distributed.
// There are cases where the location of target data may be known in advance. For example, in case of a telephone directory, if we want to search the telephone number of Morphius. Here, linear search and even binary search will seem slow as we can directly jump to memory space where the names start from 'M' are stored.
//-----------------------------------
//TIME COMPLEXITY: O(log(log(n))) for uniformly distributed data, O(n) for worst case.
//SPACE COMPLEXITY: O(1)
//-----------------------------------
//ALGORITHM:
// Step 1 − Start searching data from middle of the list.
// Step 2 − If it is a match, return the index of the item, and exit.
// Step 3 − If it is not a match, probe position.
// Step 4 − Divide the list using probing formula and find the new midle.
// Step 5 − If data is greater than middle, search in higher sub-list.
// Step 6 − If data is smaller than middle, search in lower sub-list.
// Step 7 − Repeat until match.
//-----------------------------------
//FUNCTION: Implements Interpolation Search
function interpolationSearch(arr, lo, hi, x) {
	let pos;
	if (lo <= hi && x >= arr[lo] && x <= arr[hi]) {
		pos = lo + Math.floor(((hi - lo) / (arr[hi] - arr[lo])) * (x - arr[lo]));
		if (arr[pos] == x) return pos;
		if (arr[pos] < x) return interpolationSearch(arr, pos + 1, hi, x);
		if (arr[pos] > x) return interpolationSearch(arr, lo, pos - 1, x);
	}
	return -1;
}
//VARIABLE DECLARATIONS
let arr = [];
let len = 0;
let lo = 0;
let hi = 0;
let x = 0;
let index = -1;
//-----------------------------------
//EXAMPLE 1
arr = [10, 12, 13, 16, 18, 19, 20, 21, 22, 23, 24, 33, 35, 42, 47];
len = arr.length;
lo = 0;
hi = len - 1;
x = 18;
index = interpolationSearch(arr, lo, hi, x);
console.log("Searching for " + x + " in Array: " + arr);
if (index !== -1) console.log("Element Found at Index: " + index);
else console.log("Element Not Found: " + index);
console.log("\n");
//-----------------------------------
//EXAMPLE 2
arr = [2, 3, 6, 8, 10, 13, 16, 18];
len = arr.length;
lo = 0;
hi = len - 1;
x = 13;
index = interpolationSearch(arr, lo, hi, x);
console.log("Searching for " + x + " in array: " + arr);
if (index !== -1) console.log("Element Found at Index: " + index);
else console.log("Element Not Found: " + index);
console.log("\n");
//-----------------------------------
//EXAMPLE 3
arr = [0, 4, 8, 8, 15, 18, 23, 31];
len = arr.length;
lo = 0;
hi = len - 1;
x = 16;
index = interpolationSearch(arr, lo, hi, x);
console.log("Searching for " + x + " in array: " + arr);
if (index !== -1) console.log("Element Found at Index: " + index);
else console.log("Element Not Found: " + index);
console.log("\n");
//-----------------------------------
