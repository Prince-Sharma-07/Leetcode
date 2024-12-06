class Solution {
public:
    int maxCount(vector<int>& banned, int n, int maxSum) {
        unordered_map<int , bool> mp;
        for(auto i : banned){
            mp[i] = true;
        }
        int i = 1 , sum = 0 , count = 0;
        while(sum <= maxSum && i <= n){
            if(!mp[i]){
            sum += i;
            count++;
            }
            i++;
        }
        if(sum <= maxSum) return count;
        return count-1;
    }
};