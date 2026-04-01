class Solution {
public:
    bool isPalindrome(int x) {
      int n=sizeof(x);
      if(n==1 && x>=0){
        return true;
      }  
      if(x<0){
        return false;
      }
      int s=0;
      int p=x;
     while(x!=0){
     n=x%10;
     s=s*10+n;
     x=x/10;
     }
     if(p==s){
      return true;
    }
    else{
        return false;
    }
    }
};