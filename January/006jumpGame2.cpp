class Solution {
public:
    int jump(vector<int>& nums) {
        int i=0, n = nums.size(), ans = 0;
        if(n == 1)  return 0;
        while(i<n){
            int mx = 0, mi = -1, temp = nums[i];
            for(int j = i+1;temp--;j++){
                if(j+1 == n)    return ++ans;
                if(mx < j+nums[j]){
                    mx = j+nums[j];
                    mi = j;
                }
            }
            ans++;
            i = mi;
        }

        return ans;
    }
};