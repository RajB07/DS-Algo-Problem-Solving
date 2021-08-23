from sys import maxsize 
def maxSubArraySum(arr,n): 
       
    max_value = -maxsize
    max_value_end = 0
       
    for i in range(0, n): 
        max_value_end = max_value_end + arr[i] 
        if (max_value < max_value_end): 
            max_value = max_value_end 
  
        if max_value_end < 0: 
            max_value_end = 0   
    return max_value

arr = list(map(int,input().split()))
print ("Maximum contiguous sum is", maxSubArraySum(arr,len(arr))) 