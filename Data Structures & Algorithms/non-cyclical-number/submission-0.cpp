class Solution {
public:
    bool isHappy(int n) {
        unordered_set<int> visit;

        while(visit.find(n) == visit.end()){
            visit.insert(n);
            n = sum(n);
            if(n == 1){
                return true;
            }
        }
        return false;
    }

    int sum(int n){
        int res = 0;
        while(n > 0){
            int d = n % 10;
            d = d * d;
            res += d;
            n /= 10;
        }
        return res;
    }
};
