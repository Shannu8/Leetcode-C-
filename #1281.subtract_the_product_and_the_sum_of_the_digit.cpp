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
