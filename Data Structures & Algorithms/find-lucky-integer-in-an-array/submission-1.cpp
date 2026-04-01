class Solution {
public:
    int findLucky(vector<int>& arr) {
        sort(arr.begin(),arr.end());
        int size=arr.size()-1;
        int num=1;
        for(int i=size;i>=0;i--){
            //compare karo ki kya num uske descended ke equal h
            if(arr[i]==arr[i-1] && i-1>=0){
                num++;
            }
            //jb previous value change ho to compre karo ki kya value usi num ke eqal h
            else if(arr[i]==num && arr[i-1]!=arr[i]){
                int num1=arr[i];
                return num1;
            }
            else if(arr[i]==num && i-1==0){
                int num2= arr[i];
                return num2;
            }
            else{
                num=1;
            } 
        }
        
        return -1;
    }
};