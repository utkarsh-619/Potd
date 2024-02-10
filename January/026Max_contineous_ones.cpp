class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int j = 0, ans = 0,n = nums.size();

        for(int i=0;i<n;i++){
            if(!nums[i]){
                if(k)   k--;
                else{
                    while(nums[j])  j++;
                    j++;
                }
            }
            ans = (ans < i-j+1)?i-j+1:ans;
        }

        return ans;
    }
};