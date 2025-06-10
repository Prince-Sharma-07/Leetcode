class Solution {
public:
    int maxDifference(string s) {
        unordered_map<char , int> mp;

        for(auto i : s){
            mp[i]++;
        }
        int maxiOdd = 0;
        for(auto i : mp){
            if(i.second%2 != 0){
                maxiOdd = max(maxiOdd , i.second);
            }
        }

        // int miniOdd = 0;
        // for(auto i : mp){
        //     if(i.second%2 != 0){
        //         miniOdd = min(miniOdd , i.second);
        //     }
        // }
        
        int miniEven = INT_MAX;
        for(auto i : mp){
            if(i.second%2 == 0){
                miniEven = min(miniEven , i.second);
            }
        }

        return maxiOdd - miniEven;
    }
};