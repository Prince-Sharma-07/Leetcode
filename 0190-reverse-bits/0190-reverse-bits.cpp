class Solution {
public:
    uint32_t reverseBits(uint32_t n) {
        uint32_t ans = 0;
        int temp1 , temp2 = n;
        for(int i = 31; i>=0; i--){
            temp1 = temp2&1;
            temp2 >>= 1;

            ans = ans | (temp1<<i);
            
        }

        return ans;
    }
};