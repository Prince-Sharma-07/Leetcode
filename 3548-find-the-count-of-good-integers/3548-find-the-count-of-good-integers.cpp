class Solution {
public:
    long long countGoodIntegers(int n, int k) {
        unordered_set<string> st;
        int d = (n+1)/2 , start = pow(10 , d-1) , end = pow(10 , d)-1 , result = 0;

        for(int num = start; num <= end; num++){
            string leftHalf = to_string(num);
            string full = "";

            if(!(n&1)){
              string rightHalf = leftHalf;
              reverse(rightHalf.begin() , rightHalf.end());
              full = leftHalf + rightHalf; 
            } 
            else{
                string rightHalf = leftHalf.substr(0 , d-1);
                reverse(rightHalf.begin() , rightHalf.end());
                full = leftHalf + rightHalf;
            }

            long long number = stoll(full);

            if(number%k != 0) continue;

            sort(full.begin() , full.end());
            st.insert(full);
        }

        vector<long long> factorial(11, 1);
        for(int i = 1; i<11; i++){
            factorial[i] = factorial[i-1] * i;
        }

        for(auto s : st){
            unordered_map<char , int> mp;

            for(char &ch : s){
                mp[ch]++;
            }

            int totalDigits = s.length();
            int zeroDigits = mp['0'];
            int nonZeroDigits = totalDigits - zeroDigits;

            long long permutations = (nonZeroDigits * factorial[totalDigits-1]);

            for(auto i : mp){
                permutations /= factorial[i.second];
            }

            result += permutations;
        }

        return result;
    }
};