class Solution {
public:
 int countDigits(int n){
        int no = 0;
        while(n){
            no++;
            n/=10;
        }
        return no;
    }

    bool isSymmetric(int no){
        int digits = countDigits(no);
        if(digits&1) return false;
        int half = digits/2 , sum1 = 0 , sum2 = 0;
        while(half){
            sum1 += no%10;
            no/=10;
            half--;
        }
        while(no){
            sum2 += no%10;
            no/=10;
        }
        return sum1 == sum2;
    }

    int countSymmetricIntegers(int low, int high) {
        int count = 0;
        for(int i = low; i<=high; i++){
            if(isSymmetric(i)) count++;
        }
        return count;
    }
};