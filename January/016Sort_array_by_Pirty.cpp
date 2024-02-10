class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        
        vector<int> odd,even;
        for(int i:nums){
            if(i%2) odd.push_back(i);
            else    even.push_back(i);
        }
        even.insert( even.end(), odd.begin(), odd.end() );
        return even;
    }
};