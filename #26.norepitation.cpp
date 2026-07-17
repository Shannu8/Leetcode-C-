//tried with Brute Force speed-very slow retry 
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int n = nums.size();
        for (int i = 0; i < n - 1; i++) {
            int j = i + 1;
            while (j < n) {
                if (nums[i] == nums[j]) {
                    for (int k = j; k < n - 1; k++) {
                        nums[k] = nums[k + 1];
                    }
                    n--;
                }
                else {
                    j++;
                }
            }
        }
        return n;
    }
};
