class Solution
{
    public:
    //Function to get the maximum total value in the knapsack.
    double fractionalKnapsack(int w, Item arr[], int n)
    {
        // Your code here
        vector<pair<double, int>> nums;
        for(int i=0;i<n;i++){
            double temp = (double)arr[i].value / (double)arr[i].weight;
            nums.push_back({temp, arr[i].weight});
        }
        
        sort(nums.rbegin(), nums.rend());
        
        double ans = 0;
        for(int i=0;i<nums.size();i++){
            double a = nums[i].first, b = nums[i].second;
            if(w >= b){
                w -= b;
                ans +=  a*b;
            }
            else{
                ans += w * a;
                break;
            }
        }
        return ans;
    }
        
};