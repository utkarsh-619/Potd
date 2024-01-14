class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<int,int> mp;
        for(char a:s)
            mp[a]++;

        for(char a:t)
            mp[a]--;
        
        for(auto a:mp){
            if(a.second)    return 0;
        }

        return 1;
    }
};