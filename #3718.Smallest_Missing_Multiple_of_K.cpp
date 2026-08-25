class Solution {
public:
    int missingMultiple(vector<int>& nums, int k) {
        set<int> a(nums.begin(),nums.end());

        for(int i = k; ;i+=k){
            if(a.find(i) == a.end())
             return i;
        }
    }
};
