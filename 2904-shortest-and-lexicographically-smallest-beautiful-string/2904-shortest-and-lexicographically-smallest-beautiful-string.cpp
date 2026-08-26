class Solution {
public:
    string shortestBeautifulSubstring(string s, int k) {

        int n = s.length();
        int minLen = INT_MAX;
        string ans = "";

        for (int i = 0; i < n; i++) {

            int ones = 0;

            for (int j = i; j < n; j++) {

                if (s[j] == '1') {
                    ones++;
                }

                if (ones == k) {

                    int len = j - i + 1;
                    string curr = s.substr(i, len);

                    if (len < minLen) {
                        minLen = len;
                        ans = curr;
                    }
                    else if (len == minLen && curr < ans) {
                        ans = curr;
                    }

                    break;
                }
            }
        }

        return ans;
    }
};