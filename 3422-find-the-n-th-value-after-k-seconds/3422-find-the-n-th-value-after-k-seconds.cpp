class Solution {
public:
 const int mod = 1e9+7;
    int valueAfterKSeconds(int n, int k) {
        vector<int> v (n, 1); 

        for(int i = 0; i < k; i++) {
            for(int j = 1; j < n; j++) {
                v[j] = (v[j] % mod + v[j - 1] % mod) % mod;
            }
        }

        return v[n - 1];
    }
} ;