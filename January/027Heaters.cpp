class Solution {
public:
    int findRadius(vector<int>& house, vector<int>& heat) {
        int ans = 0, n = house.size(), m = heat.size();
        sort(house.begin(), house.end());
        sort(heat.begin(), heat.end());

        for(int i=0;i<n;i++){
            auto lb = lower_bound(heat.begin(), heat.end(), house[i]);
            int x = distance(heat.begin(), lb);

            if(x==0){
                ans = max(ans, abs(heat[x] - house[i]));
            }
            else if(x == m) ans = max(ans, abs(heat[x - 1] - house[i]));
            
            else{
                int a = max(ans, abs(heat[x] - house[i]));
                int b = max(ans, abs(heat[x - 1] - house[i]));

                ans = max(ans, min(a,b));
            }
        }

        return ans;
    }
};