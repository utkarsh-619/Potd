class Solution {
public:
    vector<int> sortArrayByParityII(vector<int>& nums) {
        int n = nums.size(), i = 0, j = 1;
        vector<int> ans(n);

        for(int a : nums){
            if(a % 2){
                ans[j] = a;
                j+=2;
            }else{
                ans[i] = a;
                i+=2;
            }   
        }

        return ans;
    }
};