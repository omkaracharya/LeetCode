class Solution {
public:
    int longestPalindrome(string s) {
        int ans = 0;
        int odd_count = 0;
        cout << s.length();
        unordered_map <char, int> hashmap;
        for (char c : s)
            hashmap[c]++;
        unordered_map <char, int>::iterator it;
        for (it = hashmap.begin(); it != hashmap.end(); ++it) {
            if (it->second % 2)
                odd_count++;                
        }
        if (odd_count)
            ans = s.length() - odd_count + 1;
        else
            ans = s.length();
        return ans;
    }
};