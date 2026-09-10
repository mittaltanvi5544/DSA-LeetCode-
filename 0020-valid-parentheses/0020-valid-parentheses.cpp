class Solution {
public:
    bool isValid(string s) {
        stack<int> stk;
        if(s.length()%2!=0)
        return false;
        for(int i=0;i<s.length();i++){
            if(s[i]=='(' || s[i]=='{' || s[i]=='['){
                stk.push(s[i]);
            }
            

            else{
               
                if(stk.empty())
                return false;
                  char tpbr=stk.top();
                if(tpbr=='{' && s[i]=='}'|| tpbr=='(' && s[i]==')'|| tpbr=='[' && s[i]==']' )
                {
                    stk.pop();
                continue;
                }

                else
                return false;
            }
        }

        if(stk.empty())
        return true;
        else
        return false;
        
    }
};