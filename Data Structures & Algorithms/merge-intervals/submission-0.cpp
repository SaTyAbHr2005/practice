class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        sort(intervals.begin(), intervals.end());
        vector<vector<int>> res;
        res.push_back(intervals[0]);

        for(auto& i : intervals){
            int start = i[0];
            int end = i[1];
            int last = res.back()[1];

            if(start <= last){
                res.back()[1] = max(last, end);
            }
            else{
                res.push_back({start, end});
            }
        }
        return res;
    }
};
