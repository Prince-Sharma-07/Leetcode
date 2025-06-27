class Solution {
public:
    bool isBipartite(vector<vector<int>>& graph) {
        vector<int> color(graph.size(), -1);
        queue<int> q;

        for (int i = 0; i < graph.size(); i++) {
            if (color[i] == -1) {
                q.push(i);
                color[i] = 0;
                while (!q.empty()) {
                    int node = q.front();
                    q.pop();

                    for (auto i : graph[node]) {
                        if (color[i] == -1) {
                            if (color[node] == 0)
                                color[i] = 1;
                            else
                                color[i] = 0;
                            q.push(i);
                        } else if (color[i] == color[node])
                            return 0;
                    }
                }
            }
        }
        return 1;
    }
};