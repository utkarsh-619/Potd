class Solution {
public:
    bool isHappy(int n) {
        if(n == 1 || n == 7)    return 1;
        else if(n < 10) return 0;

        long long a = 0;
        while(n){
            a += pow(n%10,2);
            n /= 10;
        }

        return isHappy(a);
    }
};