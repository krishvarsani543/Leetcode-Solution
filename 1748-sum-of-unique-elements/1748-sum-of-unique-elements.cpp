class Solution {
public:
    int sumOfUnique(vector<int>& nums) {
       unordered_map<int,int>m;
       for(int a:nums)
       m[a]++;
       int sum=0;
       for(auto v:m){
           if(v.second==1){
              sum+=v.first;
       } 
       }
      
       return sum;
    }
};