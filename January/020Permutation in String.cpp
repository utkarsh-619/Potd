class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        unordered_map<char,int> mp1, mp2;
        for(char a:s1)  mp1[a]++;

        int j=0, n = s2.length(), m = s1.length();
        for(int i=0;i<n;i++){
            mp2[s2[i]]++;
            if(i-j+1 == m){
                if(mp1 == mp2)  return 1;
                mp2[s2[j]]--;
                if(mp2[s2[j]] == 0)  mp2.erase(s2[j]);
                j++; 
            }
        }

        return 0;
    }
};