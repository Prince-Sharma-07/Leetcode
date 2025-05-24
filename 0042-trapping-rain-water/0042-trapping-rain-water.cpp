class Solution {
public:
    int trap(vector<int>& height) {
        vector<int> prefix;
        vector<int> suffix;

        int maxi = 0 , ans = 0;

        for(auto i : height){
            maxi = max(maxi , i);
            prefix.push_back(maxi);
        }

        maxi = 0;

        for(int i = height.size()-1; i>=0; i--){
            maxi = max(maxi , height[i]);
            suffix.push_back(maxi);
        }

        reverse(suffix.begin() , suffix.end());

        for(int i = 0; i<height.size(); i++){
            ans += abs(height[i] - min(prefix[i] , suffix[i]));
        }

      

        return ans;
    }
};