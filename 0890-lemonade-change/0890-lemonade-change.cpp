class Solution {
public:
    bool lemonadeChange(vector<int>& bills) {
         int five = 0 , ten = 0 , i=0;
         while(i<bills.size()){
            if(bills[i] == 5){
                five++;
            }
            else if(bills[i] == 10){
                if(five){
                    five--;
                    ten++;
                }
                else{
                    return 0;
                }
            }
            else if(bills[i] == 20){
                if(ten && five){
                    ten--;
                    five--;
                  }
                else if(five >= 3){
                    five -= 3;
                  }
                else{
                    return 0;
                }
            }
            i++;
         }
         return 1;
    }
};