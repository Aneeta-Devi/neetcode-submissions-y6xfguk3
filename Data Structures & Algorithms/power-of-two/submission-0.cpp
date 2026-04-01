class Solution {
public:
    bool isPowerOfTwo(int n) {
    int ans=1;
    
    if(ans==n){
        return true;
    }
     for(int i=0;i<n;i++){
      ans=ans*2;
      if(ans==n){
        return true;
      }
      if(ans>n){
        return false;
      }
     } 
     return false;
    }
};