class Solution {
public:
    int characterReplacement(string s, int k) {
        int freq[26] = {0};

        int i = 0, j = 0;
        int maxFreq = 0;
        int ans = 0;

        while (j < s.length()) {
            freq[s[j] - 'A']++;
            
            // har step pe max freq update
            maxFreq = max(maxFreq, freq[s[j] - 'A']);

            // window invalid ho gayi
            if ((j - i + 1) - maxFreq > k) {
                freq[s[i] - 'A']--;
                i++;
            }

            ans = max(ans, j - i + 1);
            j++;
        }

        return ans;
    }
};