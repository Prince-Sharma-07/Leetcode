class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        int l = 0, r = 0;
        deque<int> dq;
        vector<int> ans;

        while(r<nums.size()){
            if(r-l < k){
                while(!dq.empty() && dq.back() < nums[r]) dq.pop_back();
                dq.push_back(nums[r]);
                r++;
                if(r-l == k) ans.push_back(dq.front());
            }
            else{
                if(dq.front() == nums[l]) dq.pop_front();
                l++;
            }
        }
        return ans;
    }
};