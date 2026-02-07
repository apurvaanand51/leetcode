class Solution {
public:
    bool isValid(string s) {
        vector<char> st;
        for (char ch : s) {
            if (ch == '(' || ch == '[' || ch == '{') {
                st.push_back(ch);
            } else {
                if (st.size() == 0) {
                    return false;
                }
                char top = st[st.size() - 1];
                st.pop_back();
                if (ch == ')' && top != '(') return false;
                if (ch == ']' && top != '[') return false;
                if (ch == '}' && top != '{') return false;
            }
        }
        return st.empty();
    }
};