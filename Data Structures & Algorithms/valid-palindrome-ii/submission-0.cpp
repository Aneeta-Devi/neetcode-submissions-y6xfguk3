class Solution {
public:
    bool validPalindrome(string s) {
       vector<char>ans;
        for(int i=0;i<s.length();++i){
            if(s[i]>='A'&& s[i]<='Z'){
                ans.push_back(tolower(s[i]));
            }
            else if(s[i]>='a' && s[i]<='z'){
                ans.push_back(s[i]);
            }
            else if(s[i]>='0'&& s[i]<='9'){
                ans.push_back(s[i]);
            }
            else{
                continue;
            }
        }
        int st=0;
        int e=ans.size()-1;
        // poping out one element
        int flag=0;
        while(st<e){
            
            if(ans[st]!=ans[e] && flag==0){
                    if(ans[st]==ans[e-1] && (st + 1 > e - 2 || ans[st+1] == ans[e-2])){
                        e--;
                        flag=1;
                    }
                    else if(ans[st+1]==ans[e]){
                        st++;
                        flag=1;
                    }
                    else{
                        return false;
                    } 
            }
            else if(ans[st]!=ans[e] && flag != 0){
                return false;
            }
            st++;
            e--;
        }
     return true;
    }
};