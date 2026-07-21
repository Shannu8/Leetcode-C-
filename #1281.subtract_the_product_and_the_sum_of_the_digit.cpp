//return the difference of the product of the digits and the sum of the digits
class Solution {
public:
    int subtractProductAndSum(int n) {
        int a = n;
        int mul = 1;
        int add = 0;
        while(a!=0){
            mul *= a%10;
            add += a%10;
            a = a/10;
        }
        return mul - add;
    }
};
