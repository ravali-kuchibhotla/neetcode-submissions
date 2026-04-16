class Solution {
public:
    int characterReplacement(string s, int k) {
        //find the most freq char
        int freq[26] = {0};   // frequency of chars in current window
        int i = 0;
        int maxFreq = 0;      // max frequency in current window
        int ans = 0;

        for (int j = 0; j < s.length(); j++) {
            // Expand window: include s[j]
            freq[s[j] - 'A']++;

            // Update max frequency in window
            maxFreq = max(maxFreq, freq[s[j] - 'A']);

            // Check validity: replacements needed > k
            if ((j - i + 1) - maxFreq > k) {
                // Shrink window from left
                freq[s[i] - 'A']--;
                i++;
            }

            // Window is always valid here (size never decreases)
            ans = max(ans, j - i + 1);
        }

        return ans;
    }
};
