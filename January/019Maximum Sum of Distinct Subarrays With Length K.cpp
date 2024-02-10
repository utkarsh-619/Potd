class Solution {
public:
    long long maximumSubarraySum(vector<int>& nums, int k) {
        map<int,int> mp;

        long long ans = 0, sum = 0;
        int j = 0, n = nums.size();
        for(int i=0;i<n;i++){
            if(mp[nums[i]] == 0){
                sum += nums[i];
                mp[nums[i]]++;
            }
            else if(mp[nums[i]] == 1){
                while(nums[j] != nums[i]) {
                    sum -= nums[j];
                    mp[nums[j++]]--;
                }
                j++;
            }

            if(i-j+1 == k){
                ans = max(ans, sum);
                sum -= nums[j];
                mp[nums[j++]]--;
            }   
        }

        return ans;
    }
};