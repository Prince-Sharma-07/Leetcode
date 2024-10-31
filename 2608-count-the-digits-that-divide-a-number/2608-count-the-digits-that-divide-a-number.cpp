class Solution {
public:
    int countDigits(int num) {
        int count = 0;
        int temp = num;
        while(temp){
            if(num%(temp%10) == 0){
              count++;
            }
            temp/=10;
        }
        return count;
    }
};