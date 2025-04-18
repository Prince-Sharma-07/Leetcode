class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int maxi = INT_MIN , prev = 0;

        for(int i = 0; i<gain.size(); i++){
            maxi = max(maxi , prev + gain[i]);
            prev = prev + gain[i];
        }
        if(maxi < 0) return 0;
        return maxi;
    }
};