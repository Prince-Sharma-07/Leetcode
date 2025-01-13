class Solution {
public:
    int minimumLength(string s) {
        if(s.size() < 3) return s.size();
        int count = 0;
        vector<int> left(256 , 0);
        vector<int> right(256 , 0);
        
        for(int i = 1; i<s.size(); i++){
            right[s[i]]++;
        }

        for(int i = 1; i<s.size()-1; i++){
            if(!right[s[i]]) continue;
            
            left[s[i-1]]++;

            right[s[i]]--;

            if(left[s[i]] && right[s[i]]){
                count += 2;
                left[s[i]]--;
                right[s[i]]--;
            }
        }
        return s.size()-count;
    }
};