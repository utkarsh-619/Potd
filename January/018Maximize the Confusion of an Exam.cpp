class Solution {
public:
    int maxConsecutiveAnswers(string nums, int k) {
        int n = nums.size(), j = 0, t = 0, f = 0, ans = 0;

        for(int i=0;i<n;i++){
            if(nums[i] == 'T')  t++;
            else f++;
            while(min(t,f) > k){
                if(nums[j] == 'T')  t--;
                else    f--;

                j++;
            }

            ans = max(ans, i-j+1);
        }

        return ans;
    }
};