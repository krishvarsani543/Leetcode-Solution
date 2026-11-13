class Solution {
public:
    string removeDuplicates(string s) {
             stack<char>st;
             for(int i=0;i<s.size();i++){
                if(st.size()>0 &&st.top()==s[i]){
                    st.pop();
                    continue;
                }
                else{
                    st.push(s[i]);
                }
             }
             string krish;
             while(!st.empty()){
                 krish+=st.top();
                 st.pop();
             }
             reverse(krish.begin(),krish.end());

             return krish;

    }
};