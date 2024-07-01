class Solution {
public:
    bool threeConsecutiveOdds(vector<int>& arr) {
        int flag = 0 , maxi = 0;
        for(int i = 0; i<arr.size(); i++){
            if(arr[i]%2!=0){
                flag++;
                maxi = max(flag , maxi);
            } 
            else flag = 0;
        }
        return (maxi >= 3) ? 1 : 0;
    }
};