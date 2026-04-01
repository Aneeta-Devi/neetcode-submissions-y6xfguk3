class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        int n=nums.size();
        // sort(nums.begin(),nums.end());
       vector<int>ans;
       vector<int>ans2;
       int i=0;
       while(i<n){
        if(nums[i]%2==0){
            ans.push_back(nums[i]);
            // nums.erase(nums[i]);
        }
        else{
            ans2.push_back(nums[i]);
        }
        i++;
       } 
       int e=ans2.size();
       int j=0;
       while(j<e){
        ans.push_back(ans2[j]);
        j++;
       }
       return ans;
    }
};