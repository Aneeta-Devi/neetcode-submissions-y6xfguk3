class Solution {
public:
    int findBound(vector<int>& nums, int target, bool first){
        int s = 0, e = nums.size() - 1;
        int ans = -1;

        while(s <= e){
            int mid = s + (e - s) / 2;

            if(nums[mid] == target){
                ans = mid;
                if(first)
                    e = mid - 1;   // search left
                else
                    s = mid + 1;   // search right
            }
            else if(nums[mid] < target){
                s = mid + 1;
            }
            else{
                e = mid - 1;
            }
        }

        return ans;
    }

    vector<int> searchRange(vector<int>& nums, int target) {
        int first = findBound(nums, target, true);
        int last = findBound(nums, target, false);
        return {first, last};
    }
};