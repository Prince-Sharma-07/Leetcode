class Solution {
public:
    bool canFinish(int numCourses, vector<vector<int>>& prerequisites) {
        vector<vector<int>> adj(numCourses+1);
        vector<int> in(numCourses);

        for(auto i : prerequisites){
            adj[i[0]].push_back(i[1]);
        }

        for(auto i : adj){
            for(auto j : i){
                in[j]++;
            }
        }

        queue<int> q;
        vector<int> res;
        for(int i = 0; i<numCourses; i++){
            if(in[i] == 0) q.push(i);
        }

        while(!q.empty()){
            int node = q.front();
            q.pop();
            res.push_back(node);
            for(auto i : adj[node]){
                in[i]--;
                if(in[i] == 0) q.push(i);
            }
        }
        return res.size() == numCourses;
    }
};