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

        
    }
};