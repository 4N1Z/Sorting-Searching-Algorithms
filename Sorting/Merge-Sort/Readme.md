## Introduction

Merge sort algorithm is one of the basic sorting algorithm usually implemented in the early and beginner stage of programming.
Merge Sort - Is a 'Divide and Conquer' algorithm that splits a list into discrete elements and then merges the elements back together in order.
A merge sort is quicker and more efficient than a bubble sort when using longer lists. However, it uses more memory and can take longer to sort shorter lists.

## Working
![video](https://bournetocode.com/projects/GCSE_Computing_Fundamentals/pages/img/merge_sort_ani.gif)<br/>
### The following diagram explains the working of the merge procedure:<br/>
![image](https://miro.medium.com/max/828/1*cFSX2SOwZ5ZN4keqHmX00A.png)

## Algorithm

![image](http://miftyisbored.com/wp-content/uploads/2015/01/Merge-sort-analysis.jpg)<br/>

**Step 1**: Split the list in half to create two subsets.<br/>
**Step 2**: Continue to split the subsets in half, until only individual items remain.<br/>
**Step 3**: Merge individual items back together in pairs, putting them back together in order.<br/>
**Step 4**: Continue to merge the pairs together, with each subset being sorted in order.<br/>
**Step 5**: Once all subsets have been combined, the list should be in the correct order.<br/>

**Worst and Best Case Time Complexity:** θ(nlogn)
<br/>**Space Complexity:** O(n)

### ``Merge Sort Algorithm Example``<br/>

![image](https://miro.medium.com/max/828/1*KKOLPjSopMYlHi0dvwb-3Q.png)<br/>
- The array has initial sequence as 5,2,4,7,1,3,2,6.<br/>
- This array is divided into two sub-arrays (5,2,4,7) and (1,3,2,6). Then again these two sub-arrays are divided into (5,2),(4,7),(1,3), and (2,6). Now these four sub-arrays are divided into eight sub-arrays (5),(2),(4),(7),(1),(3),(2), and (6).<br/>
- As a sub-array with a single element is already sorted hence we can say that all the eight sub-arrays are already sorted.<br/>
- Now Merge procedure combines these sub-arrays. Initially (5) and (2),(4) and (7),(1) and (3),(2) and (6) are combined to form (2,5),(4,7),(1,3), and (2,6). These four sub-arrays after merge forms (2,4,5,7) and (1,2,3,6). Finally these two sub-array form original sorted array (1,2,2,3,4,5,6,7)<br/>

Our algorithm repeats until the merging procedure completes resulting in the sorted array.

**NOTE**
When the two sorted sub-arrays are merged into a single array, it preserves the original order as we check for ‘≤’ in the merge procedure.
``Hence the Merge sort algorithm is stable.``
