selectionSort <- function(vector) {
  n <- length(vector) #stores the length of the input vector/ array
  
for (i in 1:(n - 1)) {    #first loop is for passes 
    for (j in (i + 1):n) {    #second loop will run for the pairs
      if (vector[i] > vector[j]) {  #higher index must have higher valu, if not, swap.
        temp <- vector[i]     #swap arr[j] and arr[j + 1] 
        vector[i] <- vector[j]
        vector[j] <- temp
      }
    }
  }
  return(vector)
}

# User Input:
user_vec <- c(64, 30, 60,90, 25, 12, 2, 11)
sortedVector <- selectionSort(user_vec)
cat("Sorted Array:", sortedVector, "\n")
