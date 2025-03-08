class Solution {
public:
    int trailingZeroes(int n) {
        int count = 0; 
        int k = 1;
        
        while(pow(5 , k) <= n){
            count += n / pow(5,k);
            k++;
        }

        return count;
    }
};