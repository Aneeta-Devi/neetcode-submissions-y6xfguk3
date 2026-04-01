class Solution {
public:
    int missingNumber(vector<int>& arr) {
        sort(arr.begin(),arr.end());
        int diff;
        int e=arr.size()-1;
        // find exact difference from array 
         int diff1=arr[1]-arr[0];
         int diff2=arr[e]-arr[e-1];
         if(diff1>diff2){
           diff=diff2;
         }
         else{
            diff=diff1;
         }
        
        
      for(int i=0;i<arr.size();++i){
        if(arr[i+1]!=arr[i]+diff){
          return arr[i]+diff;
        }
        else{
            continue;
        }
      } 
      return -1;
    }
};
