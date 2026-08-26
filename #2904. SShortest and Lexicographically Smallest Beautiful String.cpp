// return    shortest   substring
class Solution {
public:
    string shortestBeautifulSubstring(string s, int k) {
        int n = s.length();
        string s1(101, ' ');
        int m=0;
        for(int i = 0 ; i < n ; i++){
            int count = 0;
            string a;
            if(s[i] == '1' && count <=k){
                int j=i;
                while(j<n && count < k){
                   
                    if(s[j] == '1'){
                        count++;
                    }
                     a = a + s[j];
                    j++;
                    
                }
            
           

               if(count == k && 
                    (a.length() < s1.length() || 
                    (a.length() == s1.length() && a < s1))) {
                        
                        s1 = a;
                        m = count;
                }
            }
            
        }


        if(m != k){
            return "";
        }
        else    return s1;
    }
};
