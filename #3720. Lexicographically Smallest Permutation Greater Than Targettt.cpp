class Solution {
public:
    string lexGreaterPermutation(string s, string target) {
        int freq[26] = {};

        for(char c : s) {
            freq[c - 'a']++;
        }

        int i = 0;

        while(i < target.size() && freq[target[i] - 'a'] > 0) {
            freq[target[i] - 'a']--;
            i++;
        }

        while(true) {
            if(i < target.size()) {
                for(int c = target[i] - 'a' + 1; c < 26; c++) {
                    if(freq[c] > 0) {
                        string ans = target.substr(0, i);
                        ans += char('a' + c);

                        freq[c]--;

                        for(int j = 0; j < 26; j++) {
                            while(freq[j] > 0) {
                                ans += char('a' + j);
                                freq[j]--;
                            }
                        }

                        return ans;
                    }
                }
            }

            if(i == 0)
                break;

            i--;
            freq[target[i] - 'a']++;
        }

        return "";
    }
};
