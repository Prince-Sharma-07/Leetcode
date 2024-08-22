class Solution {
public:
    int findComplement(int num) {
        int num_bits = (int)(log2(num)) + 1;

        unsigned int mask = (1U<<num_bits) -1;

        return num^mask;
    }
};