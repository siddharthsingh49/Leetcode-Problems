class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int>st;
        for(int i=0;i<tokens.size();i++){
            string token=tokens[i];
            if(token!="+"&& token!="-"
            && token!="*"&& token!="/"){
                st.push(stoi(token));
            }
            else if(token=="+"){
                int first=st.top();
                st.pop();
                int second=st.top();
                st.pop();
                st.push(second+first);
            }
             else if(token=="-"){
                int first=st.top();
                st.pop();
                int second=st.top();
                st.pop();
                st.push(second-first);
            }
             else if(token=="*"){
                int first=st.top();
                st.pop();
                int second=st.top();
                st.pop();
                st.push(second*first);
            }
            else if(token=="/"){
                int first=st.top();
                st.pop();
                int second=st.top();
                st.pop();
                st.push(second/first);
            }
        }    
            return st.top();
    }
};