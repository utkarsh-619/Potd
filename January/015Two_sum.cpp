class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n = nums.size();
        unordered_map<int,int> mp;

        for(int i=0;i<n;i++){
            int temp = target - nums[i];
            if(mp[temp] )  return {i,mp[target-nums[i]]-1};
            mp[nums[i]] = i+1;
        }

        return {};
        
    }
};