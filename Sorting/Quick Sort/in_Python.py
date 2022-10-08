from __future__ import annotations

def quick_sort(collection: list) -> list:
   
    if len(collection) < 2:
        return collection
    

    pivot = collection.pop()  # Use the last element as the first pivot
    
    greater: list[int] = []  # All elements greater than pivot
    
    lesser: list[int] = []  # All elements less than or equal to pivot
    
    for element in collection:
        (greater if element > pivot else lesser).append(element)
    
    return quick_sort(lesser) + [pivot] + quick_sort(greater)



if __name__ == "__main__":
    
    user_input = input("Enter numbers separated by a comma:\n").strip()
    unsorted = [int(item) for item in user_input.split(",")]
    print(quick_sort(unsorted))