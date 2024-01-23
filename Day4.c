Q)Given an array of integers nums sorted in non-decreasing order, find the starting and ending position of a given target value.

If target is not found in the array, return [-1, -1].

You must write an algorithm with O(log n) runtime complexity.

Program
*******
int* searchRange(int* nums, int numsSize, int target, int* returnSize) {
    int start=StartIndex(nums, numsSize, target);
    int end=EndIndex(nums, numsSize, target);

    int *result=malloc(2*sizeof(int));
    result[0]=start;
    result[1]=end;
    *returnSize=2;
    return result;
}
int StartIndex(int *nums, int numsSize, int target)
{
    int start=-1;
    int left=0;
    int right=numsSize-1;
    int mid;
    while(left<=right)
    {
        mid=left+(right-left)/2;
        if(nums[mid]==target)
        {
            start=mid;
            right=mid-1;
        }
        else if(nums[mid]<target)
        {
            left=mid+1;
        }
        else
        {
            right=mid-1;
        }
    }
    return start;
}
int EndIndex(int *nums, int numsSize, int target)
{
    int end=-1;
    int left=0;
    int right=numsSize-1;
    int mid;
    while(left<=right)
    {
        mid=left+(right-left)/2;
        if(nums[mid]==target)
        {
            end=mid;
            left=mid+1;
        }
        else if(nums[mid]<target)
        {
            left=mid+1;
        }
        else
        {
            right=mid-1;
        }
    }
    return end;
}
Example 1:
*********
Input: nums = [5,7,7,8,8,10], target = 8
Output: [3,4]
  
Example 2:
**********
Input: nums = [5,7,7,8,8,10], target = 6
Output: [-1,-1]
  
Example 3:
**********
Input: nums = [], target = 0
Output: [-1,-1]
