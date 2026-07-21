//return the total numbers of 1's in the binary number given. we solved here with the right shift operator

class Solution {
public:
    int hammingWeight(int n) {
        int count = 0;
        while(n!=0){
            if(n&1){
                count++;
            }
            n>>=1;
        }
        return count;
    }
};
