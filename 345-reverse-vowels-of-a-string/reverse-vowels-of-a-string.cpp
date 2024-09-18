class Solution {
public:
    string reverseVowels(string s) {
        vector<char>vowels = {'a', 'e', 'i', 'o', 'u', 'A', 'E', 'I', 'O', 'U'};
        unordered_map<char, int>mp;
        for (auto i: vowels) {
            mp[i]++;
        }
        int low = 0;
        int high = s.size()-1;
        while (low < high) {
            if ( (mp[s[low]] == 1) && (mp[s[high]] == 1) ) {
                swap(s[low], s[high]);
                high--;
                low++;
            }
            else if ( (mp[s[low]] == 1) && (mp[s[high]] != 1) ) {
                high--;
            }
            else if ( (mp[s[low]] != 1) && (mp[s[high]] == 1) ) {
                low++;
            }
            else {
                low++;
                high--;
            }
        }
        return s;
    }
};