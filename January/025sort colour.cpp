class Solution {
public:
    void sortColors(vector<int>& nums) {
        int red = 0, white = 0, blue = 0;

        for(auto a: nums){
            if(a==0)  red++;
            else if(a==1)   white++;
            else    blue++;
        }

        for(int i=0;i<nums.size();i++){
            if(red){
                nums[i] = 0;
                red--;
            }   
            else if(white){
                nums[i] = 1;
                white--;
            }    
            else nums[i] = 2;
        }
    }
};