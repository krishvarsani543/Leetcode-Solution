class Solution {
public:
    int firstUniqueFreq(vector<int>& nums) {
        unordered_map<int,int>m1;
        unordered_map<int,int>m2;
        for(int i=0;i<nums.size();i++){
            m1[nums[i]]++;
        }
        for(auto i:m1){
            m2[i.second]++;
        }
       for(auto j:nums){
        if(m2[m1[j]]==1)return j;
       }
       return -1;
    }
};