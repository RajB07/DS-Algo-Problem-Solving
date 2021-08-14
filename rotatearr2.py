#ADDED A SEARCH FUNCTION. WHICH CAN SEARCH IN A SORTED ROTATED ARRAY 

nums = list(map(int,input().split()))
low = nums[0]
high = nums[-1]
n = len(nums)
k= int(input())
def reverse(nums,low,high):
    while(low<high):
        nums[low],nums[high] = nums[high],nums[low] 
        low+=1
        high-=1

def rotate(nums, k):
    k = k%n
    reverse(nums,0, n-k-1)
    reverse(nums,n-k,n-1)
    reverse(nums,0,n-1)


rotate(nums,k)
print(nums)
print("enter the target elem")
target = int(input(""))
def search(nums,target):
    low = 0
    high = n-1
    while(low<=high):
    
        mid = (low+high)//2
        if(nums[mid]==target):
            return mid
        elif(nums[mid]>=nums[low]):
        
            if(target<=nums[mid] and target>=nums[low]):
                high = mid-1
            else:
                low = mid+1
        
        else:
        
            if(target>=nums[mid] and target<=nums[high]):
                low = mid+1
            else:
                high = mid-1
        return -1
search(nums,target)
print("Target element is {} ".format(int(target)))
        


