class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int> stk;
        for(int i=0;i<tokens.size();i++){
            
            if(tokens[i]=="+" || tokens[i]=="-" || tokens[i]=="*" || tokens[i]=="/"){
                int res;
            int x=stk.top();
            stk.pop();
            int y=stk.top();
            stk.pop();
                switch(tokens[i][0]){
                    case '+':

                    
                    res=x+y;
                    break;

                    case '*':
                    res=x*y;
                    break;


                    case '/':
                    res=y/x;
                    break;


                    case '-':
                    res=y-x;
                    break;


                    
                }
                stk.push(res);
            }
            else
            stk.push(stoi(tokens[i]));
        }
        return stk.top();
    }
};