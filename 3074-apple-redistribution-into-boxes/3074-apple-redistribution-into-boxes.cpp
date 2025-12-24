class Solution {
public:
    int minimumBoxes(vector<int>& apple, vector<int>& capacity) {
        int n = apple.size() , m = capacity.size() , count = 1 , j = m-1;
        int total_apple = apple[0];
        for(int i = 1; i<n; i++){
            total_apple += apple[i];
        } 
        sort(capacity.begin() , capacity.end());
        int total_capacity = capacity[j];
        while(j>=0){
        if( total_capacity >= total_apple ) return count;
            else{
                total_capacity += capacity[--j];
                count += 1;
            }
          }
        return count;   
    }
};