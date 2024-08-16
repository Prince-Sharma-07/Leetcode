class Solution {
public:
    int maxDistance(vector<vector<int>>& arrays) {
        // int maxi = INT_MIN;
        // for(int i = 0; i<arrays.size()-1; i++){
        //     maxi = max(maxi ,abs(arrays[i][0] - arrays[i+1][arrays[i+1].size()-1]));
        //     maxi = max(maxi , abs(arrays[i][arrays[i].size()-1] - arrays[i+1][0]));
        // }
        // return maxi;
        int maxi = INT_MIN , mini = INT_MAX , idx;
        for(int i = 0; i<arrays.size(); i++){
            for(int j = 0; j<arrays[i].size(); j++){
                if(arrays[i][j] > maxi){
                    maxi = arrays[i][j];
                    idx = i;
                }
            }
        }
        
        for(int i = 0; i<arrays.size(); i++){
            for(int j = 0; j<arrays[i].size(); j++){
                if(arrays[i][j] < mini && i!=idx){
                    mini = arrays[i][j];
                }
            }
        }

        int maxi2  = INT_MIN , mini2 = INT_MAX , idx2;
        for(int i = 0; i<arrays.size(); i++){
            for(int j = 0; j<arrays[i].size(); j++){
                if(arrays[i][j] < mini2){
                    mini2 = arrays[i][j];
                    idx2 = i;
                }
            }
        }
        
        for(int i = 0; i<arrays.size(); i++){
            for(int j = 0; j<arrays[i].size(); j++){
                if(arrays[i][j] > maxi2 && i!=idx2){
                    maxi2 = arrays[i][j];
                }
            }
        }
        return max(abs(maxi - mini) ,abs(maxi2-mini2));
    }
};