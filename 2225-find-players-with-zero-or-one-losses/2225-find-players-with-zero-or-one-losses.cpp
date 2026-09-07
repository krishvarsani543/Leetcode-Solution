class Solution {
public:
    vector<vector<int>> findWinners(vector<vector<int>>& matches) {
      
        map<int,int>lo;
        for(auto i:matches){
            int w=i[0];
            int l=i[1];


          lo[l]++;
          
            if(lo.find(w)==lo.end()){
                lo[w]=0;
            }
        }
        vector<int>v;
        vector<int>v1;

        for(auto j:lo){
            if(j.second==1)v1.push_back(j.first);
            else if(j.second==0)v.push_back(j.first);
        }

        return {v,v1};
    }
};