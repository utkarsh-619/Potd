class Solution {
public:
    int longestAlternatingSubarray(vector<int>& nums, int threshold) {
        bool flag = 0;
        int ans = 0, count = 0, n = nums.size();

        for(int i=0;i<n;i++){
            if(nums[i] > threshold){
                count = 0;
                flag = 0;
                continue;
            } 
            else if(nums[i]%2 != flag){
                count = 0;
                flag = 0;
            }

            if(nums[i]%2 == flag){
                count++;
                ans = max(ans, count);
                flag = !flag;
            } 
        }

        return ans;
    }
};