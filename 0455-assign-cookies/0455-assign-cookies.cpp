class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        sort(g.begin() , g.end());
        sort(s.begin() , s.end());
        int x = 0 , count = 0;
        for(auto i : g){
            auto it = lower_bound(s.begin()+x , s.end() , i);
            if(it != s.end()){
                x = it-s.begin();
                x = x+1;
                count++;
            }
        }

        return count;
    }
};