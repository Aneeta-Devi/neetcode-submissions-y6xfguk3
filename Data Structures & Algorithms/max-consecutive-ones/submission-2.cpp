class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        vector<int>ans;
        int n=nums.size();
        if(nums.size()==1){
          if(nums[0]==1){
          return 1;
          }
          else{
            return 0;
          }
        }
        
        for(int i=0;i<nums.size();i++){
          if(nums[i]==0){
            ans.push_back(i);
          }
        }
        if(ans.size()==0){
          return n;
        }
        int max=ans[0];
        for(int i=0;i<ans.size()-1;i++){
          int num=ans[i+1]-ans[i]-1;
          if(max<num){
            max=num;
          }
        }
        int size1=ans.size()-1;
        int size2=nums.size()-1;
        int max2=size2-ans[size1];
        if(max<max2){
          max=max2;
        }
      return max;
    }
};