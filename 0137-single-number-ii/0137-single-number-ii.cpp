class Solution {
public:
    int singleNumber(vector<int>& nums) {
        unordered_map<int,int>m;
        for(int a:nums){
            m[a]++;
        }
        for(auto v:m){
            if(v.second==1)
            return v.first;
        }
        return -1;
    }
};