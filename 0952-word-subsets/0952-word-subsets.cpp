class Solution {
public:
    vector<string> wordSubsets(vector<string>& words1, vector<string>& words2) {
        vector<int> freq(256,0);
        vector<string> ans;

        for(auto i : words2){
            vector<int> temp(256,0);
            for(auto j : i){
                temp[j]++;
                if(temp[j] > freq[j]){
                    freq[j] = temp[j];
                }
            }
        }
      
        for(auto i : words1){
            vector<int> temp(256,0);
            for(auto j : i){
                temp[j]++;
            }
            
            int k;
            for(k = 0; k<temp.size(); k++){
                if(freq[k] > 0 && freq[k] > temp[k]) break;
            }
            if(k == 256) ans.push_back(i);
        }

        return ans;
    }
};