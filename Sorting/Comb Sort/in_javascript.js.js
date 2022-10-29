
// Algorithm

// Comb Sort is an advancement of Bubble Sort. Bubble sort removes inversions one by one by comparing adjacent values.

// Comb Sort uses 'gap size'>1 to improve Bubble sort. The gap starts with a large value and shrinks by a factor of 1.3 in every iteration until it reaches the value 1. Thus Comb Sort removes more than one inversion count with one swap and performs better than Bubble Sort.

// The shrink factor has been empirically found to be 1.3 (by testing Combsort on over 200,000 random lists) [Source: Wiki]

// Although it works better than Bubble Sort on average, worst-case remains O(n2).Comb Sort is mainly an improvement over Bubble Sort. Bubble sort always compares adjacent values. So all inversions are removed one by one. Comb Sort improves on Bubble Sort by using a gap of the size of more than 1. The gap starts with a large value and shrinks by a factor of 1.3 in every iteration until it reaches the value 1. 

// Thus Comb Sort removes more than one inversion count with one swap and performs better than Bubble Sort.
// The shrink factor has been empirically found to be 1.3 (by testing Combsort on over 200,000 random lists) [Source: Wiki]
// Although it works better than Bubble Sort on average, worst-case remains O(n2).







// Code for Comb Sort

const combSort=(array)=>
{
   const is_sorted=(array)=>{
      let sorted = true;
      for (let i = 0; i < array.length - 1; i++) {
          if (array[i] > array[i + 1]) {
              sorted = false;
              break;
          }
      }
      return sorted;
  }
 
  var iteration_count = 0;
  var gap = array.length - 2;
  var decrease_factor = 1.25;
 
  // Repeat iterations Until array is not sorted
  
  while (!is_sorted(array)) 
  {
      // If not first gap  Calculate gap
      if (iteration_count > 0)
         gap = (gap == 1) ? gap : Math.floor(gap / decrease_factor);
 
  // Set front and back elements and increment to a gap
      var front = 0;
      var back = gap;
      while (back <= array.length - 1) 
      {
          // Swap the elements if they are not ordered
        
          if (array[front] > array[back])
          {
              var temp = array[front];
              array[front] = array[back];
              array[back] = temp;
          }
 
          // Increment and re-run swapping
        
          front += 1;
          back += 1;
      }
      iteration_count += 1;
  }
  return array;
}
  
 var arra = [3, 0, 2, 5, -1, 4, 1]; 
console.log("Original Array Elements"); 
console.log(arra); 
console.log("Sorted Array Elements"); 
console.log(combsort(arra));
