class Solution {
public:
    int minPairSum(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int i = -1, j = nums.size(),m = INT_MIN;
        while(i++<j--)  m = max(m,nums[i]+nums[j]);
        return m;
    }
};