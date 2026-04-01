class Solution {
public:
    long long mySqrt(long long x) {
        if(x<2){
            return x;
        }
     long long s=0;
     long long e=x-1;
     long long ans=0;
     while(s<=e){
        long long mid=s+(e-s)/2;
        if(mid*mid<=x){
            ans=mid;
            s=mid+1;
        }
        else {
            e=mid-1;
        }
     }  
     if((ans+0.5)*(ans+0.5)<=x){
        return ans;
     }
    else{
        return ans;
    } 
    }
 
};