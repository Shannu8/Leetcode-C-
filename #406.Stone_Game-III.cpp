//check it out

class Solution {
public:

    int n;
    vector<int>t;

    int check(int i, vector<int>& stoneValue){

        if(i >= n)  return 0;

        if(t[i] != -1)  return t[i];
        
        int point = stoneValue[i] - check(i+1, stoneValue);
        
        if(i+1 < n){
            point = max(point, stoneValue[i] + stoneValue[i+1] - check(i+2, stoneValue));
        }

        if(i+2 < n) 
             point = max(point, stoneValue[i] + stoneValue[i+1] + stoneValue[i+2] - check(i+3, stoneValue));

        return t[i] =  point;

    }

    string stoneGameIII(vector<int>& stoneValue) {
        
        n = stoneValue.size();
        t.resize(n+1, -1);
        int diff = check(0, stoneValue);

        if(diff > 0)    return "Alice";

        else if(diff < 0)   return "Bob";

        return "Tie";

    }
};
