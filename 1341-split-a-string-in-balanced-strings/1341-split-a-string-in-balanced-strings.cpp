class Solution {
public:
    int balancedStringSplit(string s) {
        int balance = 0 , count = 0;

        if(s[0] == 'L'){
        for(auto i : s){
            if(i == 'L') balance++;
            else balance--;
            if(balance == 0) count++;
        }
        }
        else{
            for(auto i : s){
                if(i == 'R') balance++;
                else balance--;
                if(balance == 0) count++;
            }
        }
        
        return count;
    }
};