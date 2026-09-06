class Solution {
public:
    vector<string> stringMatching(vector<string>& words) {
        vector<string> res;
        sort(words.begin(), words.end(), [](const string& a, const string& b){
            return a.length() > b.length();
        });

        for(int i = 0; i < words.size(); ++i){
            for(int j = i + 1; j < words.size(); ++j){
                if(words[i].find(words[j]) != string::npos){
                    res.push_back(words[j]);
                }
            }
        }
        return res;
    }
};