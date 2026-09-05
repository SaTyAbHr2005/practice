class Solution {
public:
    vector<int> findOrder(int numCourses, vector<vector<int>>& prerequisites) {
        unordered_map<int, vector<int>> prereq;
        for(const auto& pre : prerequisites){
            prereq[pre[0]].push_back(pre[1]);
        }
        vector<int> output;
        unordered_set<int> cycle;
        unordered_set<int> visit;

        for(int crs = 0; crs < numCourses; crs++){
            if(!dfs(crs, prereq, visit, cycle, output)){
                return {};
            }
        }
        return output;
    }

    bool dfs(int crs, unordered_map<int, vector<int>>& prereq, unordered_set<int>& visit,  unordered_set<int>& cycle, vector<int>& output){
        if(cycle.count(crs)){
            return false;
        }
        if(visit.count(crs)){
            return true;
        }
        cycle.insert(crs);
        if(prereq.count(crs)){
            for(int pre : prereq.at(crs)){
                if(!dfs(pre, prereq, visit, cycle, output)){
                    return false;
                }
            } 
        }
        cycle.erase(crs);
        visit.insert(crs);
        output.push_back(crs);
        return true;
    }
};
