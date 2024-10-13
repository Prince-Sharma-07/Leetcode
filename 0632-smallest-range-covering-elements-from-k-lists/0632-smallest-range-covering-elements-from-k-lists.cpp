class Solution {
public:
    vector<int> smallestRange(vector<vector<int>>& nums) {
         int k = nums.size();

        vector<int> vec(k, 0); //{0, 0, 0....}

        vector<int> resultRange = {-1000000, 1000000}; //(a, b)

        while(true) {
            int minEl        = INT_MAX;
            int maxEl        = INT_MIN;
            int minElListIdx = 0;

            for(int i = 0; i < k; i++) {
                int listIdx = i;
                int elIdx = vec[i];
                int element = nums[listIdx][elIdx];

                if(element < minEl) {
                    minEl = element;
                    minElListIdx = listIdx;
                }

                maxEl = max(maxEl, element);
            }

            //raneg (minEl, maxEl)
            if(maxEl - minEl < resultRange[1] - resultRange[0]) {
                resultRange[0] = minEl;
                resultRange[1] = maxEl;
            }

            //now shorten this range by moving minElement idx
            int nextIndex = vec[minElListIdx]+1;
            if(nextIndex >= nums[minElListIdx].size()) {
                break;
            }
            vec[minElListIdx] = nextIndex;
        }

        return resultRange;
    }
};