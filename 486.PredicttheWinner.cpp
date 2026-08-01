class Solution {
public:

    int predict(int beg, int end, vector<int> &nums){

        if(beg>end)     return 0;
        if(beg == end){
        return nums[beg];
        }
        int choice_beg = nums[beg] + min(predict(beg+1, end-1, nums),  predict(beg+2, end, nums));
        int choice_end = nums[end] + min(predict(beg+1, end-1, nums),  predict(beg,end-2, nums));

        return max(choice_beg, choice_end);



    }
    bool predictTheWinner(vector<int>& nums) {
        int total = accumulate(nums.begin(), nums.end(), 0);
        int player1 = predict(0,nums.size()-1,nums );
        int player2 = total - player1;

        return player1 >= player2;
    }
};
