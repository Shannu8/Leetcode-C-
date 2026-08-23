//marked Medium (difficulty)

class Solution {
public:
    bool sumGame(string num) {
        int ls = 0, rs = 0, lb = 0,rb = 0;
        int n = num.size();
        for(int i=0;i<n/2;i++){
            if(num[i] != '?'){
                ls += num[i] - '0';
            }
            else lb++;
        }
        for(int i = n/2;i<n;i++){
            if(num[i] != '?'){
                rs += num[i] - '0';
            }
            else rb++;
        } 

        if(rb + lb == 0){
            return rs!=ls;
        } 
        if((rb + lb) % 2 == 1){
                return 1;
        }

        int mini = min(rb,lb);
        lb -= mini;
        rb -= mini;

        if(lb>0){
            if(ls>rs){
                return 1;
            }
            if(9*(lb/2) == rs-ls){
                return 0;
            }
            else{
                return 1;
            }
        }
        else{
             if(rs>ls){
                return 1;
            }
            if(9*(rb/2) == ls-rs){
                return 0;
            }
            else {
                return 1;
            }
        }
    }
};
