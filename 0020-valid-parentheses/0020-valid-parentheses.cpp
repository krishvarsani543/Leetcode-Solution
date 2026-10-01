class Solution {
public:
    bool isValid(string s) {
        stack<int>st;
        for(int i=0;i<s.size();i++){
            if(s[i]=='('||s[i]=='['||s[i]=='{'){
                st.push(s[i]);
            }
            if(s[i]==')'&&(st.empty()||st.top()!='('))return false;
            
             if(s[i]==']'&&(st.empty()||st.top()!='['))return false;
              if(s[i]=='}'&&(st.empty()||st.top()!='{'))return false;
if(s[i]==')'||s[i]==']'||s[i]=='}')st.pop();

        }
        return st.empty();
    }
};