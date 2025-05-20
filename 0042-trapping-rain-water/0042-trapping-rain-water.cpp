class Solution {
public:
    int trap(vector<int>& height) {
        int maxi = INT_MIN , maxIdx = 0 , sum = 0;

        for(int i = 0; i<height.size(); i++){
            if(height[i] > maxi){
                maxIdx = i;
                maxi = height[i]; 
            }
        }

        int leftMax = height[0];

        for(int i = 1; i<maxIdx; i++){
            if(leftMax > height[i]) sum += leftMax - height[i];

            leftMax = max(height[i] , leftMax);
        }

        int rightMax = height[height.size()-1];

        for(int i = height.size()-1; i > maxIdx; i--){
            if(rightMax > height[i]) sum += rightMax - height[i];

            rightMax = max(rightMax , height[i]);
        }

        return sum;

    }
};