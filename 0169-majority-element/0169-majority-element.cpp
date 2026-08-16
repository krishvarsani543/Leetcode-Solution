class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int,int>m;
        for(int i=0;i<nums.size();i++){
            m[nums[i]]++;
        }
        int max=-1;
        int ans;
       for(auto x:m){
        if(x.second>max){
            ans=x.first;
            max=x.second;
        }

       }
return ans;
    }
};