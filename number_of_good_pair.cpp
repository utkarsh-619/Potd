class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        unordered_map<int,int> mp;
        int count = 0;
        for(int i=0;i<nums.size();i++)
            mp[nums[i]]++;
            
        for(auto it : mp)
            count += (it.second*(it.second-1))/2;
        
        return count;
    }
};