class Solution {
public:
    bool isPalindrome(string s) {
    vector<char>ans;
    for(int i=0;i<s.length();++i){
       if(s[i]>='A'&& s[i]<='Z'){
        ans.push_back(tolower(s[i]));
       }
       else if(s[i]>='a'&& s[i]<='z'){
        ans.push_back(s[i]);
       }
       else if(s[i]>='0' && s[i]<='9'){
        ans.push_back(s[i]);
       }
       else{
        continue;
       }
    } 

    int st=0;
    int e=ans.size()-1;

    while(st<=e){
       if(ans[st]!=ans[e]){
        return false;
       }
       st++;
        e--;
    }
    return true;
    }
};
