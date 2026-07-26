class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {

        sort(strs.begin(), strs.end());
        string first = strs.front();
        string last = strs.back();
        string ans = "";
        int i = 0;
        while (i<first.size() && i<last.size()) {
            if (first[i] != last[i])
                break;
            ans += first[i];
            i++;
        }
        return ans;
    }
};