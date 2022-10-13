// Jump Search
function jumpSearch(arr, x, n)
{
	// Finding block size
	let step = Math.sqrt(n);

	// Find the block where element is
	let prev = 0;
	while (arr[Math.min(step, n)-1] < x)
	{
		prev = step;
		step += Math.sqrt(n);
		if (prev >= n)
			return -1;
	}

	// linear search
	while (arr[prev] < x)
	{
		prev++;

		// next block 
		if (prev == Math.min(step, n))
			return -1;
	}

	if (arr[prev] == x)
		return prev;

	return -1;
}

// Driver program
let arr = [0, 1, 1, 2, 3, 5, 8, 13, 21,
				34, 55, 89, 144, 233, 377, 610];
let x = 55;
let n = arr.length;
	
// index of 'x' using Jump Search
let index = jumpSearch(arr, x, n);

// Print 'x' where it is located
document.write(`Number ${x} is at index ${index}`);

