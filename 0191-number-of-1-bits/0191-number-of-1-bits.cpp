class Solution {
public:
    int hammingWeight(int n) {
        string ans;
        int count = 0;
        while(n){
        ans+= to_string(n%2);
        n/=2;
        }
        for(auto i : ans){
          if(i == '1') count++;
        }
        return count;
    }
};