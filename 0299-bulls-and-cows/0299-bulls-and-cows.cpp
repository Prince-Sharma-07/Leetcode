class Solution {
public:
    string getHint(string secret, string guess) {
          unordered_map<char , int> mp;
        int bulls = 0 , cows = 0;

        for(auto i : secret){
            mp[i]++; 
        }

        for(int i = 0; i<secret.size(); i++){
            if(secret[i] == guess[i]){
                mp[guess[i]]--;
                bulls++;
            }
        }
        for(int i = 0; i<guess.size(); i++){
            if(secret[i] != guess[i] && mp[guess[i]]){
                mp[guess[i]]--;
                cows++;
            }
        }

        string ans;
        ans += to_string(bulls);
        ans += "A";
        ans += to_string(cows);
        ans += "B";
        
        return ans;
    }
};