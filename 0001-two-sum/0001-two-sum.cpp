class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int>ans(nums);
        sort(ans.begin(),ans.end());
        
        int start=0;int end=nums.size()-1;
        while(start<end){
            if(ans[start]+ans[end]==target){
                break;
                
                
            }
            else if(ans[start]+ans[end]>target){
                end--;
            }
            else{
                start++;
            }
        }
        
        vector<int>res;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==ans[start]){
                res.push_back(i);

            }
            else if(nums[i]==ans[end]){
                res.push_back(i);
            }

        }
        return res;
        
    }
};