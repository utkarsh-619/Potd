class Solution {
public:
    int countCompleteSubarrays(vector<int>& nums) {
        unordered_set<int> st;
        for(int a:nums)  st.insert(a);

        int k = st.size();
        int n = nums.size(), ans = 0;
        for(int i=0;i<n;i++){
            unordered_set<int> st1;
            for(int j=i;j<n;j++){
                st1.insert(nums[j]);
                if(st1.size() == k)  ans++;
            }
        }

        return ans;
    }
};