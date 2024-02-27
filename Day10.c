Q)Given an array nums of size n, return the majority element.

The majority element is the element that appears more than ⌊n / 2⌋ times. 
You may assume that the majority element always exists in the array.

Program
*******
int majorityElement(int* nums, int numsSize) {
    int visit=1;
    int majority=nums[0];
   
    for(int i=1;i<numsSize;i++)
    {
        if(visit==0)
        {
            visit++;
            majority=nums[i];
        }
        else if(majority==nums[i])
        {
            visit++;
        }
        else
        {
            visit--;
        }

    }
return majority;
    
}

Example 1:
**********
Input: nums = [3,2,3]
Output: 3
  
Example 2:
**********
Input: nums = [2,2,1,1,1,2,2]
Output: 2
