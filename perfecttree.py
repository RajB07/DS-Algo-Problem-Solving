class PerfectTree:
    
    def make_heap(self,arr,n,i):
        largest = i
        left = 2*i+1
        right = 2*i+2
        
        if left < n and arr[i]<arr[left]:
            largest = left
        
        if right <n and arr[largest]<arr[right]:
            largest = right
        
        if(largest!=i):
            arr[i],arr[largest] = arr[largest],arr[i]
            self.make_heap(arr, n, largest)
            
        
     
    def max_heap(self,arr,n):
        for i in range(n//2,-1,-1):
            
            self.make_heap(arr, n, i)
        
        

arr = [10 ,5 ,8 ,3 ,4 ,6 ,7 ,1 ,2 ,2 ,3]

n =len(arr)
tr = PerfectTree()
tr.max_heap(arr, n)


    
 