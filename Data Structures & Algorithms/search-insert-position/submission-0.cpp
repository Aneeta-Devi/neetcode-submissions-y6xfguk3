class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int s=0;
        int e=nums.size()-1;
        int num;
        while(s<=e){
            int mid=s+(e-s)/2;
            if(nums[mid]==target){
                return mid;
            }
            if((nums[mid-1]<target && nums[mid]>target)&& mid-1>=s){
                return mid;
            }
            if((nums[mid+1]>target&& nums[mid]<target )&& mid+1>=e){
                return mid+1;
            }
            else if(nums[mid]<target){
               s=mid+1;
            }
            else{
                e=mid-1;
            }
        }
        return e+1;
    }
};