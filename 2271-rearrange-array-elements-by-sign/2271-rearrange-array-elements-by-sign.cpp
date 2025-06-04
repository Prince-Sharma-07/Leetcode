class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        int n = nums.size();
        vector<int> positive;
        vector<int> negative;
        vector<int> ans(n);

        for(auto i : nums){
            if(i < 0) negative.push_back(i);
            else positive.push_back(i); 
        }
        
        int j = 0;
        for(int i = 0; i<n; i+=2 ){
            ans[i] = positive[j];
            ans[i+1] = negative[j];
            j++;
        }

        return ans;
    }
};