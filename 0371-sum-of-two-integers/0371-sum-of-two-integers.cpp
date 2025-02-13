class Solution {
public:
    int getSum(int a, int b) {
       int count = 0;
       while(a > 0){
          count++;
          a--;
       }
       while(a < 0){
        count--;
        a++;
       }
       while(b > 0){
        count++;
        b--;
       } 
       while(b < 0){
        count--;
        b++;
       }
       
       return count;
    }
};