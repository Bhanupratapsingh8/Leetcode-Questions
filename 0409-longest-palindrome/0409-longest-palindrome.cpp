class Solution {
public:
    int longestPalindrome(string s) {
        vector<int> count(128, 0);
        for (char c : s) {
            count[c]++;
        }
        int result = 0;
        bool odd_found = false;
        for (int c : count) {
            if (c % 2 == 0) {
                result += c; 
            } else {
                result += c - 1; 
                odd_found = true; 
            }
        }
        return odd_found ? result + 1 : result;
    }
};
