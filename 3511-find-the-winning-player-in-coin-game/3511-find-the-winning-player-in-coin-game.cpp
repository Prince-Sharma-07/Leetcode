class Solution {
public:
    string losingPlayer(int x, int y) {
       int ans = min(x,y/4);
       if(ans%2 == 0) return "Bob";
       return "Alice";
    }
};