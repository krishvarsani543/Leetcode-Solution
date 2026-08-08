class Solution {
public:
    int firstUniqChar(string s) {
        unordered_map<char,int>m;
        queue<int>q;
        for(int i=0;i<s.size();i++){
            if(m.find(m[s[i]])==m.end()){
                q.push(i);
            }
            m[s[i]]++;
        }
        while(q.size()>0&&m[s[q.front()]]>1){
            q.pop();
   
        }
      
        
   
     if(q.size()>0)return q.front();return -1;
        
    }
};