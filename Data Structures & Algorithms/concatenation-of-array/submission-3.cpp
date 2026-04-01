class Solution {
    public:
        vector<int> getConcatenation(vector<int>& nums) {
                vector<int>ans;
                        int count=2;
                                while(count!=0){
                                        for(int i=0;i<nums.size();i++){
                                                    ans.push_back(nums[i]);
                                                            } 
                                                                    count--;
                                                                            }
                                                                                    //  for(int i=0;i<nums.size();i++){
                                                                                            //     ans.push_back(nums[i]);
                                                                                                    // } 
                                                                                                              
                                                                                                                     return   ans;      
                                                                                                                         }
                                                                                                                         };