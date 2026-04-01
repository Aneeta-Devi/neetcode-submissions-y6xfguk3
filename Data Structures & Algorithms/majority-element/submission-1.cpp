class Solution {
public:
    int majorityElement(vector<int>& nums) {
      sort(nums.begin(),nums.end());
      int n=nums.size()-1;
      int count= (n/2)+1;
      int num=1;
      for(int i=n;i>=0;i--){
        if(nums[i]==nums[i-1] && i-1>=0){
            num++;;
        }
        else if(num>=count){
          return nums[i];

        }
        else{
            num=1;;
        }
      }
    }
};