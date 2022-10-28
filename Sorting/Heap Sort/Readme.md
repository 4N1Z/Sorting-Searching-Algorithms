## Introduction

The (binary) heap data structure is an array object that we can view as a nearly complete binary tree. Each node of the tree corresponds to an element of the array. The tree is completely filled on all levels except possibly the lowest, which is filled from the left up to a point.

![image](https://miro.medium.com/max/786/1*IJDDOZOsFGLpf445qo1XKw.png)

Heap has two different representations:

**Max-heap**<br>
A heap(nearly complete binary tree) is called a max heap when the parent node is greater(or equal) than its left and right child nodes.<br>
``In max heap largets element is stored at the root of the binary tree.``<br>

**Min-heap**<br>
A heap(nearly complete binary tree) is called a min-heap when the parent node is smaller(or equal) than its left and right child nodes.<br/>
``In min heap smallest element is stored at the root of the binary tree.``

![image](https://miro.medium.com/max/828/1*02r6G-ho8DPnfiaOIHA2OA.png)
## Working
``We’ll use max-heap for sorting the array elements.``
- Max-heap property is maintained by calling the maxHeapify method on non-leaf nodes. All the leaf nodes already satisfy max-heap property since they don't have children.
- When the maxHeapify method is called with a node having index ‘i’ then the node is compared with its left and right child. The largest node among the parent node, left and right children nodes are found and the largest node gets swapped with the parent node.
- As the parent node may have shifted down, we have to recursively heapify the left or right subtrees to maintain the max-heap property.


**The following diagram explains the working of the heapify procedure:**

consider the node at index i=1 which violates the max-heap property:
![image](https://miro.medium.com/max/828/1*PgI5y2OIcg2FFHNTdjEyWA.png)<br/>

## Algorithm


### 1. Build a max heap from the given array.

### 2. At this point, the largest item is stored at the root of the heap. Replace it with the last item of the heap followed by reducing the size of the heap by 1. Finally, heapify the root of the tree.

### 3. Now repeat step 2 till the size of the heap is greater than 1.

**Worst and Best Case Time Complexity:** O(nlogn)
<br/>**Space Complexity:** O(n)

### ``Heap Sort Algorithm Example``<br/>

 we start checking the max heap property from the node which has at least one child and calling the maxHeapify method for each such node for maintaining the max-heap property.
**Building a max heap example:**
![image](https://miro.medium.com/max/828/1*6g4hDPjFz4aEAx6N2ntiZQ.png)<br/>
Here, the loop initialization started with ((length of array/2) — 1), and afterward for each node maxHeapify method is called for maintaining max heap property.

When all the nodes of a heap satisfy the max heap property then we can say that we have built the max heap.

**NOTE**<br/>
Heap sort does not preserve the order of elements.
**``Hence the Merge sort algorithm is stable.``**
