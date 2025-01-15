class Solution {
public:
    vector<int> getOrder(vector<vector<int>>& tasks) {
        int n = tasks.size();
        vector<int> ans;
        for(int i = 0; i<n; i++){
            tasks[i].push_back(i);
        }

        sort(tasks.begin() , tasks.end());
        long long timer = tasks[0][0];
        int i = 0;
     
        priority_queue< pair<int , int> , vector<pair<int, int>> ,  greater<>> pq;

       while(!pq.empty() || i<n){

        while(i<n && timer >= tasks[i][0]){
            pq.push({tasks[i][1] , tasks[i][2]});
            i++;
        }
             
        if(pq.empty()){
            timer = tasks[i][0];
        }
        else{
            ans.push_back(pq.top().second);
            timer += pq.top().first;
            pq.pop();
        }

       }

     return ans;
    }
};