class Solution {
public:
    double averageWaitingTime(vector<vector<int>>& customers) {
        long long n  = customers.size(), total = customers[0][0] , sum = 0 , i = 0; 
       while(i<n){
        if(customers[i][0] <= total){
            total += customers[i][1];
            sum += total - customers[i][0];
        }
        else{
            sum += (customers[i][0] + customers[i][1]) - customers[i][0];
            total = customers[i][0] + customers[i][1];
        }
        i++;
       }

      return (double) sum/n;
    }
};