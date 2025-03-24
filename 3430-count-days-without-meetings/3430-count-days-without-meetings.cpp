class Solution {
public:
    int countDays(int days, vector<vector<int>>& meetings) {
         
        sort(meetings.begin() , meetings.end());
        for(auto i : meetings){
            cout<<i[0]<<","<<i[1]<<" ";
        }
        int temp , ans = 0 , maxi = INT_MIN , n = meetings.size() , mini = meetings[0][1];
        vector<vector<int>> meeting;
        meeting.push_back({meetings[0][0] , meetings[0][1]});

        for(int i = 0; i<n-1; i++){
            if(meetings[i+1][1] >= mini){
                mini = meetings[i+1][1];
                meeting.push_back({meetings[i+1][0] , meetings[i+1][1]});
            }
        }

        for(int i = 0; i<meeting.size()-1; i++){
            temp = meeting[i+1][0] - meeting[i][1] - 1;
            if(temp > 0) ans += temp;
        }
        
        for(auto i : meeting){
            maxi = max(maxi , max(i[0] , i[1]));
        }

        ans += meeting[0][0] - 1;

        ans += days - maxi;

        return ans;

    }
};