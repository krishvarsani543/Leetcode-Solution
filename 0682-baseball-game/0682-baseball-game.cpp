class Solution {
public:
    int calPoints(vector<string>& op) {
        stack<int>s;
        for(int i=0;i<op.size();i++){
       
            if(op[i]=="C"){
                if(!s.empty())
                s.pop();}
            else if(op[i]=="D")s.push(2*s.top());
            else if(op[i]=="+"){
                int top=s.top();
                if(!s.empty())
                s.pop();
                int top1=s.top();
                s.push(top);
                s.push(top+top1);

            }
            else{
                int y=stoi(op[i]);
                s.push(y);
            }
        
        }
        int pro=0;
        while(!s.empty()){
            pro+=s.top();
            s.pop();
        }
        return pro;
    }
};