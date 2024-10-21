class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        int length = flowerbed.size();
        for (int i = 0; i < length; ++i) {
            // Check if the current plot is empty and adjacent plots are also empty or non-existent
            if (flowerbed[i] == 0 &&
                (i == 0 || flowerbed[i - 1] == 0) &&
                (i == length - 1 || flowerbed[i + 1] == 0)) {
                // Plant a flower
                flowerbed[i] = 1;
                --n;
                // Early exit if all flowers are planted
                if (n == 0) {
                    return true;
                }
            }
        }
        // If not all flowers could be planted, return false
        return n <= 0;
    }
};
