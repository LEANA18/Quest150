Q)Given an integer x, return true if x is a palindrome,return true and false otherwise.

Program
*******
bool isPalindrome(int x) {
    if (x<0)
    {
        return false;
    }
    long int div=1;
    while(x>=(10*div))
    {
        div=div*10;
    }
    while(x)
    {
        int right,left;
        right=x%10;
        left=x/div;
        if(left!=right)
        {
            return false;
        }
        x=(x%div)/10;
        div=div/100;
    
    }
    return true;

}
Example 1:
**********
Input: x = 121
Output: true
Explanation: 121 reads as 121 from left to right and from right to left.

Example 2:
*********
Input: x = -121
Output: false
Explanation: From left to right, it reads -121. From right to left, it becomes 121-. Therefore it is not a palindrome.
  
Example 3:
**********
Input: x = 10
Output: false
Explanation: Reads 01 from right to left. Therefore it is not a palindrome.
