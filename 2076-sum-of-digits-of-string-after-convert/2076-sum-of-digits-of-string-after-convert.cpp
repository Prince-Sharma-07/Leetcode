class Solution {
public:
    int getLucky(string s, int k) {
      int no = 0;
      for(char ch : s){
        int pos = ch - 'a' + 1;
        while(pos){
            no += pos%10;
            pos/=10;
        }
      }
      while(k>1){
       int sum = 0;
          while(no){
             sum += no%10;
             no/=10;
          }
          no = sum;
          k--;
      }
      return no;
    }
};