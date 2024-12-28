class Solution {
public:
    vector<int> addToArrayForm(vector<int>& nums, int k) {
        int carry = 0;
        for(int i = nums.size()-1; i>=0; i--){ 
            int sum = nums[i] + k%10 + carry;
            nums[i] = sum%10;
            if(sum > 9) carry = 1;
            else carry = 0;
            k /= 10;
        }
        
        while(k){
            int sum = k%10+carry;
            if(sum > 9) carry = 1;
            else carry = 0;
            nums.insert(nums.begin() , sum%10);
            k/=10;
        }

        if(carry) nums.insert(nums.begin() , carry);

        return nums;
    }
};