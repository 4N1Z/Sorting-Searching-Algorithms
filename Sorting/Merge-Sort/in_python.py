def mergeSort(A) :
    if len(A) > 1 :
        mid = len(A) // 2
        halfLeft = A[:mid]
        halfRight = A[mid:]
        mergeSort(halfLeft)
        mergeSort(halfRight)
        # Merge Process
        i = 0; j = 0; k = 0
        while i < len(halfLeft) and j < len(halfRight) :
            if halfLeft[i] < halfRight[j] :
                A[k] = halfLeft[i]
                i += 1
            else :
                A[k] = halfRight[j]
                j += 1
            k += 1
        
        while i < len(halfLeft) :
            A[k] = halfLeft[i]
            i += 1
            k += 1
        while j < len(halfRight) :
            A[k] = halfRight[j]
            j += 1
            k += 1

t = [2,4,54,26,93,17,77,31,44,55,20,12]
mergeSort(t)
print(t)
