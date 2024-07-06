class Solution {
public:
    int passThePillow(int n, int time) {
        int FullRound = time/(n-1);
        int TimeLeft = time%(n-1);
        if(FullRound%2 == 0) return TimeLeft+1;
        else return n-TimeLeft;
        return -1;
    }
};