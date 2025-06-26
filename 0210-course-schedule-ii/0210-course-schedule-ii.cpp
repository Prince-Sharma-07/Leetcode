class Solution {
public:
    vector<int> findOrder(int numCourses, vector<vector<int>>& prerequisites) {
        vector<int> in(numCourses);
        vector<vector<int>> adj(numCourses);

        for(auto i : prerequisites){
            adj[i[1]].push_back(i[0]);
        }

        for(auto i : adj){
            for(auto j : i){
                in[j]++;
            }
        }

        queue<int> q;
        vector<int> ans;
        for(int i = 0; i<in.size(); i++){
            if(in[i] == 0) q.push(i);
        }

        while(!q.empty()){
            int x = q.front();
            q.pop();
            ans.push_back(x);
            for(auto i : adj[x]){
                in[i]--;
                if(in[i] == 0) q.push(i);
            }
        }

        if(ans.size() == numCourses) return ans;
        return {};
    }
};