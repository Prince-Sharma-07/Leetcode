class Solution {
public:
    bool rotateString(string s, string goal) {
        if(s.size() != goal.size()) return false;
        for(int i = 0; i<s.size(); i++){
            char temp = s[0]; 
            s.erase(0,1);
            s += temp;
            if(s == goal) return true;
        }
      return false;
    }
};