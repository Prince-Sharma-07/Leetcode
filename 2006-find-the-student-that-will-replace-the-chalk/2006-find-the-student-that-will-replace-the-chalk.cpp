class Solution {
public:
    int chalkReplacer(vector<int>& chalk, int k) {
        long long sum = 0;
        for(int i = 0; i<chalk.size(); i++){
            sum += chalk[i];
        }
        
        k%=sum;
        int i;
        for(i = 0; i<chalk.size(); i++){
            if(k >= chalk[i]){
                k -= chalk[i];
            }
            else{
                break;
            }
        }
        return i;
    }
};