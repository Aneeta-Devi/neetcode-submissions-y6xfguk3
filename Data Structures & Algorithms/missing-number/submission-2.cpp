class Solution {
public:
    int missingNumber(vector<int>& nums) {
        sort(nums.begin(),nums.end());
      int ans=0;
  if(nums[0]!=0){
    return 0;
  }
    //   last position of an element
      int n=nums.size();
      if(nums[n-1]!=n){
        return n;
      }
      for(int i=0;i<n;i++){
       if(nums[i]!=nums[i+1]-1){
        return nums[i]+1;
       }
      } 
        if(nums[n-1]!=n){
        return n;
      }
       
      return ans;
    }
};
