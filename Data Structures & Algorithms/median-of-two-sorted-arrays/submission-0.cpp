class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int n=nums1.size();
        int m=nums2.size();
        int s=n+m;
        vector<int>ans;
        for(int i=0;i<n;i++){
            ans.push_back(nums1[i]);
        }
        for(int i=0;i<m;i++){
            ans.push_back(nums2[i]);
        }
        auto mid = ans.begin() + ans.size() / 2;
    
    // Inbuilt partitioning algorithm
    std::nth_element(ans.begin(), mid, ans.end());
    
    if (ans.size() % 2 != 0) {
        return *mid; // Odd count: Middle element is ready
    } else {
        // Even count: Find the element just before the middle
        auto mid_minus_one =max_element(ans.begin(), mid);
        return (*mid + *mid_minus_one) / 2.0;
    }
    }
};
