class Solution {
public:
    typedef vector<vector<long long>> Matrix;
    int M = 1e9+7;

    Matrix matrixMultiplication(Matrix &A , Matrix &B){
        Matrix C(26 , vector<long long>(26,0));
        for(int i = 0; i<26; i++){
            for(int j = 0; j<26; j++){
                for(int k = 0; k<26; k++){
                    C[i][j] = (C[i][j]+ (A[i][k] * B[k][j])%M)%M;
                }
            }
        }
        return C;
    }

    Matrix matrixExponentiation(Matrix &base , int exponent){
        if(exponent == 0){
            Matrix I(26, vector<long long>(26,0));
            for(int i = 0; i<26; i++){
                I[i][i] = 1;
            }
            return I;
        }
        Matrix half = matrixExponentiation(base , exponent/2);
        Matrix result = matrixMultiplication(half , half);
        if(exponent%2 == 1){
            result = matrixMultiplication(result , base);
        }
        return result;
    }

    int lengthAfterTransformations(string s, int t, vector<int>& nums) {
            vector<int> freq(26,0);
            for(char &ch : s){
                freq[ch-'a']++;
            }

            Matrix T(26 , vector<long long>(26 , 0));
            for(int i = 0; i<26; i++){
                for(int add = 1; add <= nums[i]; add++){
                    T[(i+add)%26][i]++;
                }
            }

            Matrix result = matrixExponentiation(T , t);

            vector<int> updatedFreq(26 ,0);

            for(int i = 0; i<26; i++){
                for(int j = 0; j<26; j++){
                    updatedFreq[i] = (updatedFreq[i] + (result[i][j] * freq[j]) % M ) %M;
                }
            }

            int resultLength = 0;

            for(int i = 0; i<26; i++){
                resultLength = (resultLength + updatedFreq[i] ) % M;
            }

            return resultLength;

    }
};