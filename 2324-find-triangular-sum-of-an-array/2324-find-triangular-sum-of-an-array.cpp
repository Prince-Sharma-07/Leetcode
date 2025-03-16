class Solution {
public:
    int triangularSum(vector<int>& nums) {
        int n = nums.size();
        if(n == 1) return nums[0];
        vector<long long> temp = {1 , 1};
        long long sum = 0;

        while(temp.size() != n){
            vector<long long> newarr;
            newarr.push_back(1);

            for(int j = 1; j<temp.size(); j++){
                newarr.push_back((temp[j]%10 + temp[j-1]%10)%10);
            }

            newarr.push_back(1);

            temp = newarr;
        }

        for(int i = 0; i<temp.size(); i++){
            sum = ((sum%10) + ((nums[i]%10) * (temp[i]%10))%10)%10;
        }
        return sum;
    }
};