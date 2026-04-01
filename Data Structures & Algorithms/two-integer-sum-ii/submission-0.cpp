class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int i=0;
        int n=numbers.size()-1;
        for(int i=0,j=n;i<=n;i++){
         int rem=target-numbers[i];
         while(j>=0 && numbers[j]>rem ){
         j--;
         }

        if(j>=0 && numbers[j]==rem){
            return {i+1,j+1};
        }
        }
    }
};
