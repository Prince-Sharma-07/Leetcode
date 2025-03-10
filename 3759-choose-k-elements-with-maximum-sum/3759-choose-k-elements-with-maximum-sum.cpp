class Solution {
public:
    vector<long long> findMaxSum(vector<int>& nums1, vector<int>& nums2, int k) {
       int n = nums1.size();

       vector<vector<int>> vec(n);

       for(int i = 0; i<n; i++){
        vec[i] = {nums1[i] , i , nums2[i]};
       }

       sort(vec.begin() , vec.end());

       vector<long long> result(n , 0);

       priority_queue<int , vector<int> , greater<int>> pq;
       long long sum = 0;

       for(int i = 0; i<n; i++){
        if(i > 0 && vec[i-1][0] == vec[i][0]){
            long long ans = result[vec[i-1][1]];
            result[vec[i][1]] = ans;
        }
        else{
        result[vec[i][1]] = sum;
        }

        pq.push(vec[i][2]);
        sum += vec[i][2];

        if(pq.size() > k){
            sum -= pq.top();
            pq.pop();
        }
       }
     return result;
    }
};