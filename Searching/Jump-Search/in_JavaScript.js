/*
Like Binary Search, Jump Search is a searching algorithm for sorted arrays. 
The basic idea is to check fewer elements (than linear search) by jumping ahead by 
fixed steps or skipping some elements in place of searching all elements.

Let’s consider the following array: (0, 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89, 144, 233, 377, 610). The length of the array is 16. 
The Jump search will find the value of 55 with the following steps assuming that the block size to be jumped is 4. 
STEP 1: Jump from index 0 to index 4; 
STEP 2: Jump from index 4 to index 8; 
STEP 3: Jump from index 8 to index 12; 
STEP 4: Since the element at index 12 is greater than 55, we will jump back a step to come to index 8. 
STEP 5: Perform a linear search from index 8 to get the element 55.

Time Complexity : O(√n) 
Auxiliary Space : O(1)
*/

<script>
 
function jumpSearch(arr, x, n)
{
    // Finding block size to be jumped
    let step = Math.sqrt(n);

    let prev = 0;
    while (arr[Math.min(step, n)-1] < x)
    {
        prev = step;
        step += Math.sqrt(n);
        if (prev >= n)
            return -1;
    }
   
    while (arr[prev] < x)   // Doing a linear search for x in block
    {
        prev++;
   
        // edge case if element not present or reached end of block
        if (prev == Math.min(step, n))
            return -1;
    }

    if (arr[prev] == x)
        return prev;    // if element is found
   
    return -1;
}

// lets test the function here 👀
let arr = [0, 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89, 144, 233, 377, 610];
let x = 55;
let n = arr.length;
       
let index = jumpSearch(arr, x, n);

document.write(`The Number ${x} is at index ${index}`);

</script>
