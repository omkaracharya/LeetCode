class Solution {
public:
    vector<string> findWords(vector<string>& words) {
        vector <string> ans;
        unordered_map <char, int> hashmap;
        hashmap['a'] = 1;
        hashmap['s'] = 1;
        hashmap['d'] = 1;
        hashmap['f'] = 1;
        hashmap['g'] = 1;
        hashmap['h'] = 1;
        hashmap['j'] = 1;
        hashmap['k'] = 1;
        hashmap['l'] = 1;

        hashmap['A'] = 1;
        hashmap['S'] = 1;
        hashmap['D'] = 1;
        hashmap['F'] = 1;
        hashmap['G'] = 1;
        hashmap['H'] = 1;
        hashmap['J'] = 1;
        hashmap['K'] = 1;
        hashmap['L'] = 1;

        hashmap['q'] = 0;
        hashmap['w'] = 0;
        hashmap['e'] = 0;
        hashmap['r'] = 0;
        hashmap['t'] = 0;
        hashmap['y'] = 0;
        hashmap['u'] = 0;
        hashmap['i'] = 0;
        hashmap['o'] = 0;
        hashmap['p'] = 0;

        hashmap['Q'] = 0;
        hashmap['W'] = 0;
        hashmap['E'] = 0;
        hashmap['R'] = 0;
        hashmap['T'] = 0;
        hashmap['Y'] = 0;
        hashmap['U'] = 0;
        hashmap['I'] = 0;
        hashmap['O'] = 0;
        hashmap['P'] = 0;

        hashmap['z'] = 2;
        hashmap['x'] = 2;
        hashmap['c'] = 2;
        hashmap['v'] = 2;
        hashmap['b'] = 2;
        hashmap['n'] = 2;
        hashmap['m'] = 2;

        hashmap['Z'] = 2;
        hashmap['X'] = 2;
        hashmap['C'] = 2;
        hashmap['V'] = 2;
        hashmap['B'] = 2;
        hashmap['N'] = 2;
        hashmap['M'] = 2;

        for (string word: words) {
            int row = hashmap[word[0]];
            int c = 1;
            for (c = 1; c < word.length(); ++c) {
                if (row != hashmap[word[c]]) {
                    break;
                }
            }
            if (c == word.length())
                ans.push_back(word);
        }
        return ans;
    }
};