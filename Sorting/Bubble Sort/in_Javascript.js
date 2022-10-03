/**
 * Explanation:
 * 		Bubble Sort is the simplest sorting algorithm that works by repeatedly swapping
 * 		the adjacent elements if they are in the wrong order.
 *
 * Time complexity:
 * 		- Worst and Average Case: O(N2). The worst case occurs when an array is reverse sorted.
 * 		- Best Case: O(N). The best case occurs when an array is already sorted
 */

const bubbleSort = (data, type = 'asc') => {
	const currentList = [...data]

	for (let i = 0; i < currentList.length; ++i) {
		for (let j = i + 1; j < currentList.length; ++j) {
			switch (type) {
				case 'asc':
					if (currentList[i] > currentList[j]) {
						let temp
						temp = currentList[i]
						currentList[i] = currentList[j]
						currentList[j] = temp
					}
					break

				case 'desc':
					if (currentList[i] < currentList[j]) {
						let temp
						temp = currentList[i]
						currentList[i] = currentList[j]
						currentList[j] = temp
					}
					break

				default:
					return 'Type not valid'
			}
		}
	}

	return currentList
}

/* Example */
const exampleLists = [1, 5, 67, 23, 8, 3, 30, 4, 75, 23]

/**
 * default type is 'asc'
 * Sorting by ascending
 * Result: [1, 3, 4, 5, 5, 8, 23, 23, 30, 67, 75]
 */
console.log(bubbleSort(exampleLists))

/**
 * type: 'desc'
 * Sorting by descending
 * Result: [75, 67, 30, 23, 23, 8, 5, 5, 4, 3, 1]
 */
console.log(bubbleSort(exampleLists, 'desc'))
