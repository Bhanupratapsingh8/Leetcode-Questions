class Solution {
public:
    bool isIsomorphic(string s, string t) {
        if (s.length() != t.length()) return false;
        int mapS[256] = {0};
        int mapT[256] = {0};
        for (int i = 0; i < s.length(); ++i) {
            char sc = s[i];
            char tc = t[i];
            if (mapS[sc] != mapT[tc]) return false;
            mapS[sc] = i + 1;
            mapT[tc] = i + 1;
        }
        return true;
    }
};
