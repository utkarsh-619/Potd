class Solution {
public:
    string longestCommonPrefix(vector<string>& str) {
        sort(str.begin(), str.end());

        int n = str.size();
        string t1 = str[0], t2 = str[n-1], ans = "";
        n = min(t1.length(), t2.length());
        for(int i=0;i<n;i++){
            if(t1[i] != t2[i])  return ans;
            ans += t1[i];
        }

        return ans;
    }
};