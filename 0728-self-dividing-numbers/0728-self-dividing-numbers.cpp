class Solution {
public:
    bool containZeros(int n){
        if(n == 0) return false;
        if(n%10 == 0) return true;
        return containZeros(n/10);
    }

    bool selfDividing(int n , int no){
        if(n==0) return true;
        if(no % (n%10) != 0) return false;
        return selfDividing(n/10 , no);
    }

    vector<int> selfDividingNumbers(int left, int right) {
        vector<int> ans;
        for(int i = left; i<=right; i++){
            if(!containZeros(i)){
                if(selfDividing(i , i)) ans.push_back(i);
            }
        }
        return ans;
    }
};