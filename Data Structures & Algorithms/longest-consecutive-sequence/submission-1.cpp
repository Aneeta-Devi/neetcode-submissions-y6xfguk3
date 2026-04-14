class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        set<int>myset(nums.begin(),nums.end());
        nums.assign(myset.begin(),myset.end());

        if(nums.empty()){
            return 0;
        }
        int count=1;
        int maximum=1;
        for(int i=0;i<nums.size()-1;i++){
            if((nums[i]+1)!=nums[i+1]){
                count=1;
            }else{
                count++;
            }
            maximum=max(maximum,count);   
        }
        return maximum;
    }
};
