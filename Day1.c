Q)Given an array of integers nums and an integer target, return indices of the two numbers such that they add up to target.

You may assume that each input would have exactly one solution, and you may not use the same element twice.

You can return the answer in any order.

Program
*******
int* twoSum(int* nums, int numsSize, int target, int* returnSize) {
    int* retarr=malloc(2*sizeof(int));
    retarr[0]=1;
    retarr[1]=1;
    int i,j;
   
    for(i=0;i<numsSize;i++)
    {
       for(j=i+1;j<numsSize;j++)
       {
           if(nums[i]+nums[j]==target)
           {
               *returnSize=2;
               retarr[0]=i;
               retarr[1]=j;
               return retarr;
           }
       }
    }
    return NULL;
    
}

Example 1:
*********
Input: nums = [2,7,11,15], target = 9
Output: [0,1]
Explanation: Because nums[0] + nums[1] == 9, we return [0, 1].
  
Example 2:
**********
Input: nums = [3,2,4], target = 6
Output: [1,2]
  
Example 3:
**********
Input: nums = [3,3], target = 6
Output: [0,1]
