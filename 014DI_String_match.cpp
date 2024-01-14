class Solution {
public:
    vector<int> diStringMatch(string s) {
        int i = 0, n = s.length(), j = n;

        vector<int> ans;
        for(char a:s){
            if(a == 'I')    ans.push_back(i++);
            else ans.push_back(j--);
        }

        ans.push_back(i);
        return ans;
    }
};