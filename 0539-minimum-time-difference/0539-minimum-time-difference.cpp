class Solution {
public:
    int findMinDifference(vector<string>& timePoints) {
        vector<int> minutes;
        for(auto time : timePoints){
            string hr = time.substr(0,2);
            string min = time.substr(3);

            int hour = stoi(hr);
            int mins = stoi(min);

            minutes.push_back(hour*60+mins);
        }

        sort(minutes.begin() , minutes.end());

        int mini = INT_MAX;

        for(int i = 1; i<minutes.size(); i++){
            mini = min(mini ,minutes[i]-minutes[i-1]);
        }

        mini = min(mini , (1440-minutes[minutes.size()-1]) + minutes[0]);

        return mini;
    }
};