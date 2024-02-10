class Solution {
public:
    long long dividePlayers(vector<int>& s) {
        long long ans = 0;
        sort(s.begin(), s.end());
        int j = s.size()-1, i = 0, temp = s[0]+s[j];

        while(i<j){
            if(temp == s[i]+s[j])   ans += (s[i] * s[j]);
            else    return -1;
            
            i++;j--;
        }

        return ans;
    }
};