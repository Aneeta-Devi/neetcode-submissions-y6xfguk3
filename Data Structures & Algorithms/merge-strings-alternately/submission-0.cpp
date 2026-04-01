class Solution {
public:
    string mergeAlternately(string word1, string word2) {
       int n1=word1.length();
       int n2=word2.length(); 
       string ans;
       int i=0;
       int j=0;
       while(i<n1 && j<n2){
        ans.push_back(word1[i]);
         i++;
         ans.push_back(word2[j]);
         j++;
       }
       while(i<n1){
        ans.push_back(word1[i]);
        i++;
       }
         while(j<n2){
        ans.push_back(word2[j]);
        j++;
       }
       return ans;
    }
};