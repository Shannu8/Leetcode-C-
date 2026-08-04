// FInd the all missing numbers from the smallest element to largest element

class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
       sort(nums.begin(), nums.end());
        vector<int> ans;
        int ele = nums[0];
        for(int i = 1; i < nums.size(); i++){
            while(nums[i] != ele + 1){
                ans.push_back(++ele);
            }
            ele = nums[i];
        }
        return ans;
    }
};
