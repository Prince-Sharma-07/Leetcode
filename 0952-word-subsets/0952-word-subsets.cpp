class Solution {
public:
    vector<string> wordSubsets(vector<string>& words1, vector<string>& words2) {
        vector<int> Maxfreq(256,0);
        vector<string> ans;

        for(auto i : words2){
            vector<int> temp(256,0);
            for(auto j : i){
                temp[j]++;
                if(temp[j] > Maxfreq[j]){
                    Maxfreq[j] = temp[j];
                }
            }
        }
      
        for(auto i : words1){

            vector<int> temp(256,0);
            for(auto j : i){
                temp[j]++;
            }
            
            bool flag = true;
            for(int k = 0; k<temp.size(); k++){

                if(temp[k] < Maxfreq[k]){
                 flag = false;
                 break;
                 }

            }

            if(flag) ans.push_back(i);
            
        }

        return ans;
    }
};