class Solution {
public:
    int maximumScore(int a, int b, int c) {
        priority_queue<int> pq;
        pq.push(a);
        pq.push(b);
        pq.push(c);
        int count = 0;

        while(1){
            
            int first = pq.top();
            pq.pop();
            int second = pq.top();
            pq.pop();

            if(first == 0 or second == 0) break;

            count++;
            pq.push(--first);
            pq.push(--second);
            
        }

        return count;
    }
};