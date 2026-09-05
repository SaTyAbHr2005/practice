class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int n = nums.size();
        if(n == 0) return {-1, -1};
        int start = -1, end = -1;
        for(int i = 0; i < n; i++){
            if(nums[i] == target){
                if(start == -1) start = i;
                end = i;
            }
        }
        return {start, end};
    }
};