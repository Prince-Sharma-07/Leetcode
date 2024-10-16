class Solution {
public:
    string longestDiverseString(int a, int b, int c) {
        priority_queue<pair<int , char>> pq;
        if(a>0) pq.push({a , 'a'});
        if(b>0) pq.push({b , 'b'});
        if(c>0) pq.push({c , 'c'});

        string ans = "";

        while(!pq.empty()){
            int currFreq = pq.top().first;
            char currChar = pq.top().second;
            pq.pop();
            
            if(ans.size() >= 2 && ans[ans.size()-1] == currChar && ans[ans.size()-2] == currChar){
            if(pq.empty()) break;
            int nextFreq = pq.top().first;
            char nextChar = pq.top().second;
            pq.pop();
            ans += nextChar;
            nextFreq--;
            if(nextFreq > 0){
                pq.push({nextFreq , nextChar});
            }  
            }
            else{
                ans.push_back(currChar);
                currFreq--;
            }
            if(currFreq > 0){
                pq.push({currFreq , currChar});
            }  
        }
        return ans;
    }
};