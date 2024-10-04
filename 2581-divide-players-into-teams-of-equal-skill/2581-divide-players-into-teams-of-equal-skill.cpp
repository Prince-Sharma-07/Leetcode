class Solution {
public:
    long long dividePlayers(vector<int>& skill) {
        sort(skill.begin() , skill.end());
        long long ans = 0;
        int flag = skill[0] + skill[skill.size()-1];
        int i = 0 , j = skill.size()-1;
        while(i<j){
            if(skill[i] + skill[j] == flag) ans += skill[i]*skill[j];
            else return -1;
            i++;
            j--;
        }
        return ans;
    }
};
