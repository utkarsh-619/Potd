class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        map<char,bool> mp;
        int j=0, n=s.length(), ans = 0;

        for(int i=0;i<n;i++){
            if(mp[s[i]]){
                while(s[j] != s[i]){
                    mp[s[j]] = 0;
                    j++;
                }
                mp[s[j]] = 0;
                j++;
            }
            mp[s[i]] = 1;
            int temp = i - j + 1;
            ans = max(temp, ans);
        }
        
        return ans;
    }
};