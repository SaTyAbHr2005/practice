class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        unordered_set<int> res;
        for(int i : nums1){
            for(int j : nums2){
                if(i == j){
                    res.insert(i);
                    break;
                }
            }
        }
        return vector<int>(res.begin(), res.end());
    }
};