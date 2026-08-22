// returns 1 if n is divisible by the sum of the digit's product and digit's sum

class Solution {
public:
    bool checkDivisibility(int n) {
        int x = n, a;
        int sum = 0, mul = 1;


        while(x!=0){
            a = x % 10;
            sum = sum+a;
            mul = mul * a;


            x = x /10;  
        }

        if(n%(sum+mul) == 0){
            return 1;
        }
        else return 0;
    }
};
