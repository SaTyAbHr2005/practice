class Solution {
public:
    string kthDistinct(vector<string>& arr, int k) {
        unordered_set<string> seenOnce, seenTwice;
        for(const string& s : arr){
            if(seenOnce.count(s)){
                seenOnce.erase(s);
                seenTwice.insert(s);
            }
            else if(!seenTwice.count(s)){
                seenOnce.insert(s);
            }
        }
        for(const string& s : arr){
            if(seenOnce.count(s) == 1){
                k--;
                if(k == 0) return s;
            }
        }
        return "";
    }
};