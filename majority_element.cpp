class Solution {
public:
    int majorityElement(vector<int>& nums) {
        sort(nums.begin(), nums.end());

        long long n = nums.size(), k = ceil(n/2.0);
        int j = 0;

        for(int i=0;i<n;i++){
            if(nums[i] != nums[j])  j = i;
            if(k <= i-j+1)  return nums[i];
        }
        return -1;
    }
};