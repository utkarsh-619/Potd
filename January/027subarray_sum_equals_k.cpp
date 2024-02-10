class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int sum = 0, m=0;
        unordered_map<int,int> mp;
        mp[0] = 1;

        for(int &i:nums){
            sum+=i;
            if(mp.find(sum - k) != mp.end()){
                m +=mp[sum-k];
            }
            mp[sum]++;
        }
        return m;
    }
};