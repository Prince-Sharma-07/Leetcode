class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int i = m - 1, j = n - 1, k = nums1.size() - 1;
        // if(m == 0) {
        //     nums1 = nums2;
        //     return;
        // }
        while (j >= 0 && i >= 0) {
            if (nums2[j] >= nums1[i])
                nums1[k--] = nums2[j--];
            else
                nums1[k--] = nums1[i--];
        }
        while(j>=0){
            nums1[k--] = nums2[j--];
        }
    }
};