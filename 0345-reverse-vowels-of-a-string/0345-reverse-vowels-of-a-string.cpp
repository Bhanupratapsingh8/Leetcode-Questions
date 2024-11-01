class Solution {
public:
    string reverseVowels(string s) {
        int left = 0, right = s.size() - 1;
        string vowels = "aeiouAEIOU";
        while (left < right) {
            while (left < right && vowels.find(s[left]) == string::npos) {
                left++;
            }
            while (left < right && vowels.find(s[right]) == string::npos) {
                right--;
            }
            swap(s[left++], s[right--]);
        }
        return s;
    }
};