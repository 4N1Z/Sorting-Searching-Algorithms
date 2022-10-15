'''Bucket sort is a sorting algorithm that separate the elements into multiple groups said to be buckets. 
Elements in bucket sort are first uniformly divided into groups called buckets, and then they are sorted by any other sorting algorithm. 
After that, elements are gathered in a sorted manner.'''

'''
    Time Complexity	 
    Best	O(n+k)
    Average	O(n+k)
    Worst	O(n2)
    Space Complexity O(n*k)
    Stable Yes
'''
    
    
#Bucket sort in Python
    
def bucket_sort(input_list):
    # Find maximum value in the list and use length of the list to determine which value in the list goes into which bucket 
    max_value = max(input_list)
    size = max_value/len(input_list)

    # Create n empty buckets where n is equal to the length of the input list
    buckets_list= []
    for x in range(len(input_list)):
        buckets_list.append([]) 

    # Put list elements into different buckets based on the size
    for i in range(len(input_list)):
        j = int (input_list[i] / size)
        if j != len (input_list):
            buckets_list[j].append(input_list[i])
        else:
            buckets_list[len(input_list) - 1].append(input_list[i])

    # Sort elements within the buckets using Insertion Sort
    for z in range(len(input_list)):
        insertion_sort(buckets_list[z])
            
    # Concatenate buckets with sorted elements into a single list
    final_output = []
    for x in range(len (input_list)):
        final_output = final_output + buckets_list[x]
    return final_output
