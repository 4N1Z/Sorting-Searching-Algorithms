bubbleSort <- function(vector) {
  n <- length(vector) #stores the length of the input vector/ array
  
  for (i in 1:(n - 1)) { #first loop is for passes 
    for (j in 1:(n - i)) { #second loop will run for the pairs
      if (vector[j] > vector[j + 1]) {
        temp <- vector[j] # Swap arr[j] and arr[j + 1]
        vector[j] <- vector[j + 1]
        vector[j + 1] <- temp
      }
    }
  }
  return(vector)
}

# User Input:
user_vec <- c(6, 10, 4, 34, 25, 90, 12, 22, 11, 90)
sortedVector <- bubbleSort(user_vec)
cat("Sorted Array:", sortedVector, "\n")
