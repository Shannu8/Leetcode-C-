class Solution {
public:
    int t[502][502];
    int predict(int beg, int end, vector<int> &piles){
        if(beg>end) return 0;
        
        if(beg == end)  return piles[beg];

        if(t[beg][end] != -1){
            return t[beg][end];
        }

        int take_beg = piles[beg] + min(predict(beg+2, end, piles), predict(beg+1, end-1, piles));
        int take_end = piles[end] + min(predict(beg+1, end-1, piles), predict(beg, end-1, piles));

        return t[beg][end] = max(take_beg, take_end);
    }

    bool stoneGame(vector<int>& piles) {

        memset(t, -1, sizeof(t));

        int total = accumulate(piles.begin(), piles.end(), 0);
        int player1 = predict(0, piles.size()-1, piles);
        int player2 = total - player1;

        return player1 > player2;
    }
};
