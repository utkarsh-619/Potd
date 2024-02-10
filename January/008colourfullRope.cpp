class Solution {
public:
    int minCost(string colors, vector<int>& nums) {
        int n = colors.size(), ans = 0, j = 0;
        char prev = colors[0];
        for(int i=1;i<n;i++){
            if(prev == colors[i]){
                if(nums[j] < nums[i]){
                    ans += nums[j];
                    j = i;
                    prev = colors[j];
                }
                else{
                    ans += nums[i];
                }
            }
            else{
                j = i;
                prev = colors[j];
            }
        }
        return ans;
    }
};