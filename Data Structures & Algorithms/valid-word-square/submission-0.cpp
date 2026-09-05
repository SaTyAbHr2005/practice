class Solution {
public:
    bool validWordSquare(vector<string>& words) {
        for(int wordNum = 0; wordNum < words.size(); ++wordNum){
            for(int charPos = 0; charPos < words[wordNum].size(); ++charPos){
                if(charPos >= words.size() || wordNum >= words[charPos].size() || words[wordNum][charPos] != words[charPos][wordNum]){
                    return false;
                }
            }
        }
        return true;
    }
};
