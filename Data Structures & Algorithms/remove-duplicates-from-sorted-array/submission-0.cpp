class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        // int count=0;
       for(int i=1;i<nums.size();){
        if(nums[i-1]==nums[i]){
            nums.erase(nums.begin()+i-1);
            // nums.pop_back();
            // continue;
        }
        else{
            // count++;
            ++i;
        }
       }
       int n=nums.size();
    return n;
    }
};