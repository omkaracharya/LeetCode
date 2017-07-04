class Solution {
public:
    string reverseWords(string s) {
        // stack <char> st;
        // string ans;
        // for (int i = 0; i < s.length(); ++i) {
        //     if (s[i] == ' ') {
        //         while (!st.empty()) {
        //             ans += st.top();
        //             st.pop();
        //         }
        //         ans += s[i];
        //     } else {
        //         st.push(s[i]);
        //     }
        // }
        // while (!st.empty()) {
        //     ans += st.top();
        //     st.pop();
        // }
        // return ans;
        
        
        int start = 0, end = 0;
        for (; end <= s.length(); ++end) {
            if (s[end] == ' ' || end == s.length()) {
                reverse(&s[start], &s[end]);
                start = end + 1;
            }
        }
        return s;
    }
};