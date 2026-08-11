// Find the sum of the longest sequential prefix,
// then return the smallest integer greater than or equal to
// this sum that does not already exist in the array.

class Solution {
public:
    int missingInteger(vector<int>& nums) {
        unordered_set<int> st(begin(nums), end(nums));
        int SeqSum = nums[0];
        for(int i =1;i<nums.size();i++){
            if(nums[i] == nums[i-1] + 1){
                SeqSum += nums[i];
            }
            else break;
        }

        while(st.count(SeqSum)){
            SeqSum++;
        }
        return SeqSum;
    }
};
