class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) {
        for(auto i : letters){
             if(i > target) return i;
        }
        return letters[0];
    }
};