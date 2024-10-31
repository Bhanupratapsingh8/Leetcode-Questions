class Solution {
public:
    bool wordPattern(string pattern, string s) {
        vector<string> words;
        istringstream ss(s);
        string word;
        while (ss >> word) words.push_back(word);
        if (words.size() != pattern.size()) return false;
        unordered_map<char, string> charToWord;
        unordered_map<string, char> wordToChar;
        for (int i = 0; i < pattern.size(); i++) {
            char c = pattern[i];
            if ((charToWord.count(c) && charToWord[c] != words[i]) ||
                (wordToChar.count(words[i]) && wordToChar[words[i]] != c))
                return false;
            charToWord[c] = words[i];
            wordToChar[words[i]] = c;
        }
        return true;
    }
};
