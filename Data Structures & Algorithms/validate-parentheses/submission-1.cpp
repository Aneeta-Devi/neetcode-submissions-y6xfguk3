class Solution {
public:
    bool isValid(string s) {
      vector<char>ans;
      for(char c:s){
        if(c=='['||c=='{'||c=='('){
            ans.push_back(c);
        }else{
            if(ans.empty())return false;
        
        if(c==']'&& ans.back()=='[' || c=='}'&&ans.back()=='{'||
        c==')'&& ans.back()=='('){
            ans.pop_back();
        }
        else{
            return false;
        }
        }
      }  
      return ans.empty();
    }
};
