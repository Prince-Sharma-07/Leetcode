class Solution {
public:
    int countSeniors(vector<string>& details) {
        int count = 0;
        for(int i = 0; i < details.size(); i++){
            string ans = details[i];
            char a = ans[11];
            char b = ans[12];
            int check = 10*(a-'0') + (b - '0'); 
            if(check>60) count++;
        }
        return count;
    }
};