class Solution {
public:
    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
        set<int> res1, res2;
        for(int num1 : nums1){
            bool found = false;
            for(int num2 : nums2){
                if(num1 == num2){
                    found = true;
                    break;
                }
            }
            if(!found){
                res1.insert(num1);
            }
        }
        for(int num2 : nums2){
            bool found = false;
            for(int num1 : nums1){
                if(num2 == num1){
                    found = true;
                    break;
                }
            }
            if(!found){
                res2.insert(num2);
            }
        }
        return {vector<int>(res1.begin(), res1.end()), vector<int>(res2.begin(), res2.end())};
    }
};