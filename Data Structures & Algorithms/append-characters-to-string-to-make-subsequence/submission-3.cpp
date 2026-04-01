class Solution {
public:
    int appendCharacters(string s, string t) {
        int p1 = 0; // Pointer for string s
int p2 = 0; // Pointer for string t

while (p1 < s.length() && p2 < t.length()) {
    if (s[p1] == t[p2]) {
        // Found a match, move to the next char in t
        p2++;
    }
    // Always move to the next char in s
    p1++;
}
// If p2 represents how many characters of t were found in s,
// the remaining characters of t are the ones that must be appended.
int remaining = t.length() - p2;
return remaining;
        // int count=0;
        //   int size_1=s.size();
        // int size_2=t.size();
        //     for(int i=0;i<t.size();i++){
        //     if(t[i]!=s[i]){
        //         s.push_back(t[i]);
        //           count++;
        //     }
        // }
      
        
    //     set<char>s1(s.begin(),s.end());
    //     set<char>s2(t.begin(),t.end());
    //     s.clear();
    //     t.clear();
    //     s.assign(s1.begin(),s1.end());
    //      t.assign(s2.begin(),s2.end());
    //     int siz1=s.size();
    //     int siz2=t.size();
    //     if(siz1==siz2 && size_1>size_2){
    //         return 0;
    //     }
        
    //     // for(int i=0;i<t.size();i++){
    //     //     if(t[i]!=s[i]){
    //     //         s.push_back(t[i]);
    //     //           count++;
    //     //     }
    //     // }
        
    //  return count;
    }
};