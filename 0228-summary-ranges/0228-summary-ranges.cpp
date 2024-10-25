class Solution {
public:
    vector<string> summaryRanges(vector<int>& nums) {
        vector<string> result;
        int n = nums.size();
        
        if (n == 0) return result;

        int start = 0; 

        for (int i = 1; i <= n; ++i) {
        
            if (i == n || nums[i] != nums[i - 1] + 1) {
                if (start == i - 1) {
                
                    result.push_back(to_string(nums[start]));
                } else {
                
                    result.push_back(to_string(nums[start]) + "->" + to_string(nums[i - 1]));
                }
                start = i; 
            }
        }
        
        return result;
    }
};
