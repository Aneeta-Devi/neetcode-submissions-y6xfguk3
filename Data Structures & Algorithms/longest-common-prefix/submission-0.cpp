class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        sort(strs.begin(), strs.end());
        
        int n = strs.size();
        string first = strs[0];
        string last = strs[n - 1];
        
        string ans = "";
        
        for (int i = 0; i < first.length(); i++) {
            if (i >= last.length() || first[i] != last[i]) {
                break;
            }
            ans.push_back(first[i]);
        }
        
        return ans;
    }
};