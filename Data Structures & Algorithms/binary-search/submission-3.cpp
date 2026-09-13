class Solution {
public:
    int binary_search(int l, int r, vector<int>& nums, int target){
        if(l <= r){
            int m = l + (r - l) / 2;
            if(nums[m] == target) return m;
            if(nums[m] > target){
                return binary_search(l, m - 1, nums, target);
            }
            else{
                return binary_search(m + 1, r, nums, target);
            }
        }
        return -1;
    }

    int search(vector<int>& nums, int target) {
        return binary_search(0, nums.size() - 1, nums, target);
    }
};
