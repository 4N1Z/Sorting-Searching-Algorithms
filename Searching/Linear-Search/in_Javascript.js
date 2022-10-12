// Linear Search in JavaScript

// Each element is visited once, and checked w.r.t to the required value.
// If element matches the index is returned.
// else null is returned

// Time Complexity = O(N)
// Space Complexity = O(1)

function linearSearch(arr, key) {
  for (var i = 0; i < arr.length; i++) {
    if (arr[i] === key) { 
      return i;
    }
  }
  
  // key not found
  return null;
}
