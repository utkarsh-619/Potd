class Solution {
public:
    bool check(vector<int> &nums, int k){
        int sum = 0, mx = INT_MIN, n = nums.size();

        for(int i=0;i<n;i++){
            mx = (mx > nums[i])?mx:nums[i];
            sum += nums[i];
        }
        return (sum - mx <= k);
    }

    int characterReplacement(string &s, int k) {
        vector<int> nums(26);

        int n = s.length(), ans = 0, j = 0;
        for(int i=0;i<n;i++){
            nums[s[i] - 'A']++;

            while(!check(nums,k)){
                nums[s[j++] - 'A']--;
            }
            ans = (ans > i-j+1)?ans:i-j+1;
        }

        return ans;
    }
};