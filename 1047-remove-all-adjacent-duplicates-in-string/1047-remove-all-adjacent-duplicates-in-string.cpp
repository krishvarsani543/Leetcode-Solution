class Solution {
public:
    string removeDuplicates(string s) {
        stack<char>st;
        string y;
        for(int i=0;i<s.size();i++){
            if(!st.empty()&&st.top()==s[i]){
                st.pop();
                continue;
            }
            else{
                st.push(s[i]);
            }
        }
       while(!st.empty()){
        y+=st.top();
        st.pop();
       }
       reverse(y.begin(),y.end());
        return y;
    }
};