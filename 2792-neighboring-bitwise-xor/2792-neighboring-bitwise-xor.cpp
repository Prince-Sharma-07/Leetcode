class Solution {
public:
    bool doesValidArrayExist(vector<int>& derived) {
        vector<int> ans(derived.size());
        ans[0] = 0;
        int i;
        for(i = 0; i<derived.size()-1; i++){
            if(derived[i] == 1 && ans[i] == 0){
                ans[i+1] = 1;
            }
            else if(derived[i] == 1 && ans[i] == 1){
                ans[i+1] = 0;
            }
            else if(derived[i] == 0 && ans[i] == 0){
                ans[i+1] = 0;
            }
            else ans[i+1] = 1;
        }
       if(derived[i] == 0 && ans[i] == 0 || derived[i] == 1 && ans[i] == 1) return true;
       return false;  
    }
};