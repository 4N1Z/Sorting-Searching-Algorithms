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
