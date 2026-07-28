//Returns the maximum product from an array
class Solution {
public:
    int maxProduct(int n) {
        int max1 =INT_MIN, max2 = INT_MIN;
        int a = n;
        if(n < 10){
            return n;
        }
        else {
                while(a!=0){
                int num = a % 10;
                if(num>max1){
                    max2 = max1;
                    max1 = num;
                }
                else if(num>max2){
                    max2 = num;
                }
                a /= 10;
            }
        }
        return max1 * max2;
    }
};
