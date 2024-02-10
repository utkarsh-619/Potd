class Solution {
public:
    int totalFruit(vector<int>& fr) {
        
        int n = fr.size(), j = 0, ans = 0;   
        unordered_map<int,int> mp;

        for(int i = 0;i<n;i++){
            mp[fr[i]]++;

            while(mp.size() > 2){
                mp[fr[j]]--;
                if(mp[fr[j]] == 0)  mp.erase(mp.find(fr[j]));
                j++;
            } 

            ans = max(ans, i-j+1);
        }

        return ans;
    }
};