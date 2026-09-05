class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        int n = nums.size();
        unordered_set<int> new_arr;
        for(int i = 1; i <= n; i++){
            new_arr.insert(i);
        }

        for(int num : nums){
            new_arr.erase(num);
        }
        vector<int> res(new_arr.begin(), new_arr.end());
        return res;
    }
};