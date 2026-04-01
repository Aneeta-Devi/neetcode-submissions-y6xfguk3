class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        int n=nums.size();
        int count=0;
        int count1=0;
        int positive_array[n/2];
        int negative_array[n/2];
        for(int i =0;i<n;i++){
            if(nums[i]>0){
                positive_array[count++]=nums[i];
            }
            else{
                negative_array[count1++]=nums[i];
            }
        }
        vector<int>ans(n);
        for(int i=0;i<n/2;i++){
            ans[2*i]=positive_array[i];
        }
        for(int i=0;i<n/2;i++){
            ans[2*i+1]=negative_array[i];
        }
        return ans;
    }
};