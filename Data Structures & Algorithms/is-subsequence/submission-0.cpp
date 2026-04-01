class Solution {
public:
    bool isSubsequence(string s, string t) {
      int s1=s.length();
      int t1=t.length();
      int i=0;
      int j=0;
      while(i<s1 && j<t1){
        if(t[j]==s[i]){
            i++;
        }
        
            j++;
        
      }
    return i==s1;
    }
};