class Solution {
public:
    int maxDifference(string s) {
        int freq[26] = {0};  
    
        for (char c : s) {
            freq[c - 'a']++;
        }

        int maxOdd = 0;
        int minEven = INT_MAX;

        for (int i = 0; i < 26; ++i) {
            if (freq[i] > 0) {  
                if (freq[i] % 2 != 0 && freq[i] > maxOdd) {
                    maxOdd = freq[i];
                }
                if (freq[i] % 2 == 0 && freq[i] < minEven) {
                    minEven = freq[i];
                }
            }
        }
        return maxOdd - minEven;
    }
};