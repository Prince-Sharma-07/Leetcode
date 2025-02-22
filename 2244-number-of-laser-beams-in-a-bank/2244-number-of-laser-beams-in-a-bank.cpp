class Solution {
public:
    int numberOfBeams(vector<string>& bank) {
        int prevDevices = 0 , ans = 0;
        vector<int> ones;
        for(auto i : bank){
            int count = 0;
            for(int j = 0; j<i.size(); j++){
                if(i[j] == '1'){
                    count++;
                }
            }
            if(count){
             ones.push_back(count);
            }
        }

        for(int i = 1; i<ones.size(); i++) ans += (ones[i] * ones[i-1]);
        
        return ans;
    }
};