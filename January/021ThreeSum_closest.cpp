class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        int n = nums.size(), minDiff = INT_MAX, ans;

        for(int i=0;i<n-2;i++){
            for(int j=i+1;j<n-1;j++){
                for(int k=j+1;k<n;k++){
                    int temp = nums[i]+nums[j]+nums[k];

                    if(abs(temp - target) < minDiff){
                        ans = temp;
                        minDiff = abs(temp - target);
                    }
                }
            }
        }

        return ans;
    }
};