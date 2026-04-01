class Solution {
public:
    int lengthOfLastWord(string s) {
        int n=s.length()-1;
        int count=0;
        while(n>=0 && isspace(s[n])){
            n--;
        }
          while(n>=0 && !isspace(s[n])){
            n--;
            count++;
        }
        return count;
    }
};