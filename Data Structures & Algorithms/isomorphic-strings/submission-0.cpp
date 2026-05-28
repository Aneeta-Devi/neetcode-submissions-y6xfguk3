class Solution {
public:
    bool isIsomorphic(string s, string t) {
      unordered_map<char,char>map1;
      unordered_map< char,char>map2;
      for(int i=0;i<s.length();i++){
        int sc=s[i],tc=t[i];
        if(map1.count(sc) && map1[sc]!=tc) return false;
        if(map2.count(tc) && map2[tc]!=sc) return false;
        map1[sc]=tc;
        map2[tc]=sc;
      }
      return true;
    }
};