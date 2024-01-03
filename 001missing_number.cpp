class Solution {
public:
    int missingNumber(vector<int>& nums) {
        long long sum = 0, n = nums.size();
        for(int i:nums) sum += i;
        n = (n*(n+1))/2;
        return n - sum;
    }
};