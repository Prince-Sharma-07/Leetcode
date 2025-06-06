#define MAX 30000
class NumArray {
int seg[4*MAX]; 
vector<int> arr;
public:
    void build(int idx , int low , int high){
        if(low == high){
            seg[idx] = arr[low];
            return;
        }

        int mid = (low + high)/2;
        build(2*idx+1 , low , mid);
        build(2*idx+2 , mid+1 , high);

        seg[idx] = seg[2*idx+1] + seg[2*idx+2];
    }

    NumArray(vector<int>& nums) {
        arr = nums;
        build(0 , 0 , nums.size()-1);
    }

    void update2(int i , int low , int high , int index, int val) {
        if(low == high){
            seg[i] = val;
            return;
        }

        int mid = (low+high)/2;
        if(index <= mid)
            update2(2*i+1, low , mid , index , val);
        else
            update2(2*i+2 , mid+1 , high , index, val);

        seg[i] = seg[2*i+1] + seg[2*i+2];
    }

    void update(int index, int val) {
        update2(0, 0 , arr.size()-1 , index , val);
    }

    int sumRange2(int i , int low , int high , int left, int right) {
        if(low > right || high < left) return 0;
        if(low >= left && high <= right) return seg[i];

        int mid = (low + high)/2;
        int leftSum = sumRange2(2*i+1 , low , mid , left , right);
        int rightSum = sumRange2(2*i+2 , mid+1 , high , left , right);

        return leftSum + rightSum;
    }

    
    int sumRange(int left, int right) {
        return sumRange2(0 , 0 , arr.size()-1 , left , right);
    }
};

/**
 * Your NumArray object will be instantiated and called as such:
 * NumArray* obj = new NumArray(nums);
 * obj->update(index,val);
 * int param_2 = obj->sumRange(left,right);
 */