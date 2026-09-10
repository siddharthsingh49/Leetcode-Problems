class Solution {
public:
    bool backspaceCompare(string s, string t) {
        stack<char>st1;
        stack<char>st2;
        for(int i=0;i<s.size();i++){
            char ch=s[i];
            if(ch=='#'){
                if(!st1.empty()){
                    st1.pop();
                }
            }
            else{
                st1.push(ch);
            }
        }
        for(int i=0;i<t.size();i++){
            char ch=t[i];
            if(ch=='#'){
                if(!st2.empty()){
                    st2.pop();
                }
            }
            else{
                st2.push(ch);
            }
        }
        if(st1.size()!=st2.size()){
            return false;
        }
        while(!st1.empty()){
            if(st1.top()!=st2.top()){
                return false;
            }
            st1.pop();
            st2.pop();
        }
        return true;

        
    }
};