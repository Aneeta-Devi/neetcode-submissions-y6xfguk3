class Solution {
public:
    bool validWordAbbreviation(string word, string abbr) {
        int i = 0, j = 0;

        while (j < abbr.size()) {
            // If it's a letter, it must match
            if (isalpha(abbr[j])) {
                if (i >= word.size() || word[i] != abbr[j])
                    return false;
                i++;
                j++;
            } 
            else {
                // Leading zero not allowed
                if (abbr[j] == '0')
                    return false;

                int num = 0;
                while (j < abbr.size() && isdigit(abbr[j])) {
                    num = num * 10 + (abbr[j] - '0');
                    j++;
                }

                i += num;
                if (i > word.size())   // early stopping
                    return false;
            }
        }

        return i == word.size();
    }
};
