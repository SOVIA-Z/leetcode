class Solution {
public:
    bool isOperator(string op){
        return op=="+" || op=="-" || op=="*" || op=="/";
    }
    int evalRPN(vector<string>& tokens) {
        stack<int> st;
        for(auto &token:tokens){
            if(isOperator(token)){
                int b=st.top(); st.pop();
                int a=st.top(); st.pop();
                if(token=="+"){
                    st.push(a+b);
                }else if(token=="-"){
                    st.push(a-b);
                }else if(token=="/"){
                    st.push(a/b);
                }else if(token=="*"){
                    st.push(a*b);
                }
            }else{
                st.push(stoi(token));
            }
        }
        return st.top();
    }
};