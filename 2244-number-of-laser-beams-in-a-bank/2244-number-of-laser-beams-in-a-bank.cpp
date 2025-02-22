class Solution {
public:
    int numberOfBeams(vector<string>& bank) {
        int prevDevices = 0 , ans = 0;

        for(auto i : bank){
            int count = 0;
            for(int j = 0; j<i.size(); j++){
                if(i[j] == '1'){
                    ans += prevDevices;
                    count++;
                }
            }
            if(count){
            prevDevices = count;
            }
        }

        return ans;
    }
};