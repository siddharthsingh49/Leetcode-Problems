class Solution {
public:
    int calPoints(vector<string>& operations) {
        stack<int>st;
        for(int i=0;i<operations.size();i++){
            string op=operations[i];
        if(op!="C" && op!="D" && op!="+"){
            st.push(stoi(op));
        }
        else if(op=="C"){
            st.pop();
        }
        else if(op=="D"){
            st.push(2*st.top());
        }
        else{
            int first=st.top();
            st.pop();
            int second=st.top();
            st.push(first);
            st.push(first+second);
        }
        }
        int total=0;
        while(!st.empty()){
            total=total+st.top();
            st.pop();
        }
        return total;

        
    }
};