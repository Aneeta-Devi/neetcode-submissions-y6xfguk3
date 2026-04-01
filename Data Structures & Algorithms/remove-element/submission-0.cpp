class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        // vector<int>ans;
        int count=0;
      for(int i=0;i<nums.size();) {
        if(nums[i]==val){
            nums.erase(nums.begin()+i);
            // ans.push_back(nums[i])
        }
        else{
             count++;
             ++i;
        }
      }
    //   ans1=ans.size();
      return count;
    }
};