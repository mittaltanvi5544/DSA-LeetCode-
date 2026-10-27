class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int lft=0;
       int maxlen=0;
        for(int i=0;i<s.length();i++){
            for(int j=lft;j<i;j++){
                   if(s[i]==s[j]){
                   
                    lft=j+1;
                    break;
                   }
                   

            }

           maxlen=max(maxlen,i-lft+1);
           
        }
     return maxlen;
    }
};