class Solution {
public:
    bool isMajorityElement(vector<int>& nums, int target) {
        int len=nums.size()/2;
        int maj_len=len+1;
        int n=nums.size();
        for(int i=0;i<n;++i){
            if(nums[i]==target){
                maj_len=maj_len-1;
            }
        }
                if(maj_len!=0){
                    return false;
                }
    
        return true;
    }
};
