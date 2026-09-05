class Solution {
public:
    double myPow(double x, int n) {
        if(n == 0) return 1;
        if(x == 1) return 0;

        double res = 1;
        for(int i = 0; i < abs(n); i++){
            res *= x;
        }
        return n >= 0 ? res : 1 / res;
    }
};
