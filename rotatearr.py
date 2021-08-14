#Beginner's practice question
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
    reverse(nums,0, n-k-1)
    reverse(nums,n-k,n-1)
    reverse(nums,0,n-1)

rotate(nums,k)
print(nums)

