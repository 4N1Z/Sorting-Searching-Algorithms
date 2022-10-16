# BOCKET SORT WITH THE HELP OF INSERTION SORT


# INSERTION SORT
def insertionSort(customList):
    for i in range(1,len(customList)):
        key=customList[i]
        j=i-1
        while j>=0 and key < customList[j]:
            customList[j+1] = customList[j]
            j -= 1
        customList[j+1] = key
    return customList


# BUCKET SORT 
import math
def bucketSort(customList):
    numberofBuckets = round(math.sqrt(len(customList)))
    maxValue = max(customList)
    arr =[]

    for i in range(numberofBuckets):
        arr.append([])
    for j in customList:
        index_b = math.ceil(j*numberofBuckets/maxValue)
        arr[index_b-1].append(j)

    for i in range(numberofBuckets):
        arr[i] = insertionSort(arr[i])

    k = 0
    for i in range(numberofBuckets):
        for j in range(len(arr[i])):
            customList[k] = arr[i][j]
            k+=1
    return customList     



cList=[2,1,3,6,9,7,4,8,5]
print(bucketSort(cList))

