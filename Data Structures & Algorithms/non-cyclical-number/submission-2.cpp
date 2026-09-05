class Solution {
public:
    bool isHappy(int n) {
        unordered_set<int> seen;
        while(n != 1 && !seen.count(n)){
            seen.insert(n);
            n = sum(n);
        }
        return n == 1;
    }

    int sum(int n){
        int res = 0;
        while(n > 0){
            int d = n % 10;
            res += d * d;
            n /= 10;
        }
        return res;
    }
};
