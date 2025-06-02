class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
        int n = cardPoints.size() , maxi = INT_MIN;
        vector<int> pre(k) , suf(k);
        pre[0] = cardPoints[0];
        suf[0] = cardPoints[n-1];
    
        for(int i = 1; i<k; i++){
            pre[i] = pre[i-1] + cardPoints[i];
            suf[i] = suf[i-1] + cardPoints[n-1-i];
        }
       
        int i = k-2;
        int j = 0;

        maxi = max(pre[k-1] , suf[k-1]);

        while(i >= 0 && j <= k-2){
            maxi = max(pre[i--]+suf[j++], maxi);
        }

        return maxi;
        
    }
};