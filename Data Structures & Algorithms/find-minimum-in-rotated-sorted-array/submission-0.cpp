class Solution {
public:
    int findMin(vector<int> &nums) {
   int s=1;
   int e=nums.size()-1;
   int min=nums[0];
   while(s<=e){
    int mid=s+(e-s)/2;
    if(nums[mid]<min){
        min=nums[mid];
    }
    if(nums[s]<nums[mid]){
        if(nums[s]<min){
            e=mid-1;
        }
        else{
            s=mid+1;
        }
    }
   else{
    if(nums[e]<min){
       s=mid+1;
    }
    else{
        e=mid-1;
    }
   }
   }
   return min;
    }
};
