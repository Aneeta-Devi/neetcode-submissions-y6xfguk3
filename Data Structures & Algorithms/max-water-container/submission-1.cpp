class Solution {
public:
    int maxArea(vector<int>& heights) {
      int n=heights.size();
      int max_Area=0;
        int j=n-1;
        int i=0;
        while(j>i){
            int d=j-i;
            int min_height=min(heights[i],heights[j]);
            int Area=min_height*d;
            max_Area=max(max_Area,Area);
            if(heights[i]<heights[j]){
                i++;
            }
            else{
                j--;
            }
        }
      
      return max_Area;
    }
};
