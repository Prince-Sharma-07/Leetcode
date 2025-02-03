class Solution {
public:
    int longestMonotonicSubarray(vector<int>& nums) {
     int maxi = 1, len = 1 , maxLeft , maxRight , n = nums.size();
     
    for (int i=1; i<n; i++)
    {
        if (nums[i] > nums[i-1])
            len++;
        else
        {
            if (maxi < len)    
                maxi = len;
            
            len = 1;    
        }    
    }
    if (maxi < len)
        maxi = len;
  
    maxLeft = maxi;
        
        maxi = 1 , len = 1;   
    for (int i=1; i<n; i++)
    {
        if (nums[i] < nums[i-1])
            len++;
        else
        {
            if (maxi < len)    
                maxi = len;    
            len = 1;    
        }    
    }
    if (maxi < len)
        maxi = len;
  
    maxRight = maxi;
        
        return max(maxLeft,maxRight);
    }
    
};