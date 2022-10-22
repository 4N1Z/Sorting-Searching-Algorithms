## Introduction

Bubble sort algorithm is one the basic sorting algorithm usually implemented in the early and beginner stage of programming.

## Working
![image](https://miro.medium.com/max/828/1*F25GplAIHNujkBrWBrWkrA.png)<br/>
``Now, since these elements are already in order (8 > 5), the algorithm does not swap them and Proceeds to Second Pass(step 1) and repeats the whole process till the algorithm gets one whole pass without any swap to know it is sorted.``

**Worst and Average Case Time Complexity:** O(n*n)
<br/>**Best Case Time Complexity:** O(n)

## Algorithm
Bubble Sort is the simple sorting algorithm that works by repeatedly swapping the adjacent elements if they are in the wrong order.<br/>
<br>
The function ‘bubbleSort’ takes an argument of int type and loops through each element of the list item.
<br><br>
For each element, it then checks the adjacent element and swaps if the adjacent is a smaller element.
<br><br>
The inner for loop will continue until the first pass(step 0) is completed. It then returns the array and the outer for loop will start its second pass(step 1). Our algorithm repeats the whole process until it gets one whole pass without any swap.<br><br>
![image](https://miro.medium.com/max/720/1*Dy6olUoBWUgV0GJbbiAyMA.png)

