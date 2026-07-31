//it is different from the other similar code because here the characters ain't fixed
class Solution {
public:
    int minimumPushes(string word) {
        vector<int> freq(26,0);
        for(auto ch : word){
            freq[ch-'a']++;
        }

        sort(freq.begin(), freq.end(), greater<int>());

        int total = 0;
        for(int i=0;i<26;i++){
            if(freq[i] == 0)    break;
            int push = i/8 + 1;

            total = total + push*freq[i];
        }
        return total;
    }
};
