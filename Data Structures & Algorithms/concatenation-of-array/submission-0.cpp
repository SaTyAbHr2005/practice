class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        int n = nums.size();
        vector<int> newNums(2 * n);
        for(int i = 0; i < n; i++){
            newNums[i] = nums[i];
            newNums[i + n] = nums[i];
        }
        return newNums;
    }
};