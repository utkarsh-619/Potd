class Solution {
public:
    int maxArea(vector<int>& height) {
        int n = height.size();
        int s = 0, e = n-1, ans = 0;
        
        while(s<e){
            int m = min(height[e], height[s]), d = e-s;
            ans = max(ans,m*d);

            if(height[e] > height[s])   s++;
            else e--;
        }

        return ans;
    }
};