class Solution {
public:
    int minOperations(vector<vector<int>>& grid, int x) {
        vector<int> temp;

        for(auto i : grid){
            for(auto j : i){
                temp.push_back(j);
            }
        }

       
        int n = temp.size() , ans = 0;
        nth_element(temp.begin() , temp.begin()+n/2 , temp.end());

        for(int i = 0; i<n; i++){
            if(i != n/2 ){
                if((abs(temp[n/2]-temp[i]))%x != 0) return -1;
                ans += (abs(temp[n/2]-temp[i]))/x;
            }
        }
        return ans;
    }
};