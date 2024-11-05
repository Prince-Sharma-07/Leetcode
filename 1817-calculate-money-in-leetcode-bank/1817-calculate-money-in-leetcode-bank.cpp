class Solution {
public:
    int totalMoney(int n) {
       int weeks = n/7;
       int rem = n%7;
       int money = 0;
       for(int i = 1; i<=weeks; i++){
          money += (7*(2*i+(6)))/2;
       }
        money += (rem*(2*(weeks+1)+(rem-1)))/2;
        return money;
    }
};