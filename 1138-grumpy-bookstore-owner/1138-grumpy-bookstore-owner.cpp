class Solution {
public:
    int maxSatisfied(vector<int>& customers, vector<int>& grumpy, int minutes) {
        int n = customers.size();
        int maxUn = 0;
        int currUn = 0;
        for(int i = 0; i<minutes; i++){
            currUn += customers[i] * grumpy[i];
        }

        maxUn = currUn;
        int i = 0 , j = minutes;
        while(j<n){
          currUn += customers[j] * grumpy[j];
          currUn -= customers[i] * grumpy[i];

          maxUn = max(maxUn , currUn);
          i++;
          j++;
        }
        int totalSat = maxUn;
        for(int i  = 0; i<n; i++){
            if(grumpy[i] == 0)
            totalSat += customers[i];
        }
        return totalSat;
    }
};