class Solution {
public:
    void getPath(stack<string>& st, string& ans) {
        if (st.empty()) {
            return;
        }
        string miniPath = st.top();
        st.pop();
        getPath(st, ans);
        ans += miniPath;
    }
    string simplifyPath(string path) {
        int n = path.size();
        stack<string> st;

        int i = 0;
        while (i < n) {
            int start = i;
            int end = i + 1;
            while (end < n && path[end] != '/') {
                end++;
            }
            i = end;
            string miniPath = path.substr(start, end - start);
            if (miniPath == "/" || miniPath == "/.") {
                continue;
            }
            if (miniPath == "/.." && !st.empty()) {
                st.pop();
            } else if (miniPath != "/..") {
                st.push(miniPath);
            }
        }

        if (st.empty()) {
            return "/";
        }

        string ans = "";
        getPath(st, ans);
        return ans;
    }
};