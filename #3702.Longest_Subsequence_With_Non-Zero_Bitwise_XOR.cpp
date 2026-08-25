//Used <Set> Time_Complexity = 2ms

class Solution {
public:
    int longestSubsequence(vector<int>& nums) {
        int n = nums.size();

        int resultXor = 0;
        bool allZero = true;

        for(int &x : nums) {
            resultXor ^= x;
            if(x != 0)
                allZero = false;
        }

        if(allZero)
            return 0;

        return resultXor == 0 ? n-1 : n;
    }
};


//Used <Unordered_Set> Time_Complexity = 6ms
class Solution {
public:
    int missingMultiple(vector<int>& nums, int k) {
        unordered_set<int> a(nums.begin(),nums.end());

        for(int i = k; ;i+=k){
            if(!a.count(i))
            return i;
        }
    }
};
