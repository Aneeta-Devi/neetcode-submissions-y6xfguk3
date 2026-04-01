class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        if(ransomNote.length()>magazine.length()){
            return false;
        }
        sort(ransomNote.begin(),ransomNote.end());
        sort(magazine.begin(),magazine.end());
        int n=ransomNote.length();
        int m=magazine.length();
        int i=0;
        int j=0;
        while(i<n && j<m){
            if(ransomNote[i]==magazine[j]){
                i++;
            }
            j++;
           if(i!=n && j==m){
            return false;
           }
           
        }
        return true;
    }
};