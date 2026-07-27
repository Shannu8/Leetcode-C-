//Returns true if the number is a palindrome and returns false when number isn't a palindrome
class Solution {
public:
    bool isPalindrome(int x) {
        bool flag = 0;
        int a = x,num;
        long long int rev = 0;
        if(a<0){
            flag = 0;
        }
        else{
            while(a!=0){
                num = a % 10;
                rev = rev*10 + num;
                a = a/10;
            }
        }
        if(x == rev){
            flag = 1;
        }
        return flag;
    }
};
