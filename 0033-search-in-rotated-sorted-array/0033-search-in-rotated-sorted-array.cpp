class Solution {
public:
    int BinarySearch(vector<int> nums , int l , int h , int target){
        while(l<=h){
            int mid = l+(h-l)/2;
            if(nums[mid] == target) return mid;
            else if(nums[mid] < target) l = mid+1;
            else h = mid-1;
        }
        return -1;
    }

    int search(vector<int>& nums, int target) {
        int n = nums.size() ,l = 0 , h = n-1;

         while(l<h){
            int mid = l + (h-l)/2;
            if(nums[mid] > nums[h]) l = mid+1;
            else h = mid;
        }

        int ans1 =  BinarySearch(nums , 0 , l-1 , target);
        int ans2 = BinarySearch(nums , l , n-1 , target);

        return ans1 > ans2 ? ans1 : ans2;
    }
};